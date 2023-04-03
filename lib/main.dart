import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:mini_java_compiler/compiler_services.dart';
import 'package:tuple/tuple.dart';

void main() {
  runApp(const MyApp());
}

//TODO saving file ??
//TODO Compile
//TODO lines number

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: const HomePage(),
    );
  }
}

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {

  String code = "";
  TextEditingController codeController = TextEditingController();
  TextEditingController consoleController = TextEditingController();
  Tuple2<bool,String> result = Tuple2(false, "");
  FocusNode _focusNode = FocusNode();
  FocusNode _codeFocusNode = FocusNode();



  @override
  @override
  Widget build(BuildContext context) {
    double deviceHeight = MediaQuery.of(context).size.height;
    double deviceWidth = MediaQuery.of(context).size.width;
    bool codeExists = codeController.text.trim() != "";

    return Scaffold(
      backgroundColor: Colors.grey.shade200,
      body: Column(
        children: [
          Expanded(
            flex: 1,
            child: Container(
              color: Colors.blue,
              //height: deviceHeight*0.1,
              child: Padding(
                padding: EdgeInsets.symmetric(horizontal: deviceWidth *0.03),
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    ElevatedButton(
                      child: Row(
                        children: [
                          Icon(Icons.file_download, color: Colors.blue,),
                          SizedBox(width: 6,),
                          Text("Import File", style: TextStyle(color: Colors.blue),),
                        ],
                      ),
                      onPressed: () async {
                        String? fileContent = await readFile();
                        if(fileContent != null){
                          setState(() {
                            code = fileContent!;
                            codeController.text = code;
                          });
                        }
                      },
                      style: ButtonStyle(
                        backgroundColor: MaterialStateProperty.all(Colors.white)
                      ),
                    ),
                    Row(
                      children: [
                        ElevatedButton(
                          child: Row(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Icon(Icons.code, color: codeExists ? Colors.red : Colors.grey.shade400,),
                              SizedBox(width: 6,),
                              Text("Compile", style: TextStyle(color: codeExists ? Colors.red : Colors.grey.shade400)
                              ),
                            ],
                          ),
                          onPressed: !codeExists ? null : () async {
                            await writeFile(codeController.text);
                            var r = await compileCode();
                            setState((){
                              result = r;
                              if(!r.item1){
                                consoleController.text = "COMPILED SUCCESSFULLY";
                              }
                              else{
                                consoleController.text = result.item2;
                              }
                            });
                          },
                          style: ButtonStyle(
                            backgroundColor: MaterialStateProperty.all(codeExists ? Colors.white : Colors.grey),

                          ),
                        ),
                        SizedBox(width: deviceWidth*0.01,),
                        ElevatedButton(
                          child: Row(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Icon(Icons.play_arrow, color: codeExists ? Colors.green : Colors.grey.shade400,),
                              SizedBox(width: 6,),
                              Text("Run", style: TextStyle(color: codeExists ? Colors.green: Colors.grey.shade400)
                              ),
                            ],
                          ),
                          onPressed: !codeExists ? null : (){
                          },
                          style: ButtonStyle(
                              backgroundColor: MaterialStateProperty.all(codeExists ? Colors.white: Colors.grey)
                          ),
                        ),
                      ],
                    )
                  ],
                ),
              ),
            ),
          ),
          Expanded(
            flex: 8,
            child: Padding(
              padding: EdgeInsets.only(left: deviceWidth*0.1,),
              child: Container(
                decoration: BoxDecoration(
                  color: Colors.white
                ),
                child: Actions(
                  actions: {InsertTabIntent: InsertTabAction()},
                  child: Shortcuts(
                    shortcuts: {
                      LogicalKeySet(LogicalKeyboardKey.tab):
                      InsertTabIntent(8, codeController)
                    },
                    child: TextField(
                      //focusNode: _codeFocusNode,
                      controller: codeController,
                      keyboardType: TextInputType.multiline,
                      cursorColor: Colors.grey,
                      maxLines: null,
                      onChanged: (value){
                        setState(() {});
                      },
                      decoration: InputDecoration(
                        border: OutlineInputBorder(
                          borderSide: BorderSide.none,
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
          Expanded(
            flex: 3,
            child: Container(
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Container(
                    color: Colors.grey.shade300,
                    child: Padding(
                      padding: EdgeInsets.symmetric(horizontal: 18, vertical: 8),
                      child: Text("Console", style: TextStyle(fontWeight: FontWeight.bold),),
                    ),
                  ),
                  Expanded(
                    child: Container(
                      color: Colors.white,
                      child: Padding(
                        padding: const EdgeInsets.all(8.0),
                        child: TextField(
                          style: TextStyle(
                            color: result.item1? Colors.red : Colors.green
                          ),
                          controller: consoleController,
                          enabled: false,
                          decoration: InputDecoration(

                            border: OutlineInputBorder(
                              borderSide: BorderSide.none,
                            ),
                          ),
                        ),
                      ),
                    ),
                  )
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}

class InsertTabIntent extends Intent {
  const InsertTabIntent(this.numSpaces, this.textController);
  final int numSpaces;
  final TextEditingController textController;
}

class InsertTabAction extends Action {
  @override
  Object invoke(covariant Intent intent) {
    if (intent is InsertTabIntent) {
      final oldValue = intent.textController.value;
      final newComposing = TextRange.collapsed(oldValue.composing.start);
      final newSelection = TextSelection.collapsed(
          offset: oldValue.selection.start + intent.numSpaces);

      final newText = StringBuffer(oldValue.selection.isValid
          ? oldValue.selection.textBefore(oldValue.text)
          : oldValue.text);
      for (var i = 0; i < intent.numSpaces; i++) {
        newText.write(' ');
      }
      newText.write(oldValue.selection.isValid
          ? oldValue.selection.textAfter(oldValue.text)
          : '');
      intent.textController.value = intent.textController.value.copyWith(
        composing: newComposing,
        text: newText.toString(),
        selection: newSelection,
      );
    }
    return '';
  }
}