import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:mini_java_compiler/compiler_services.dart';
import 'package:tuple/tuple.dart';

void main() {
  runApp(const MyApp());
}

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
  String text = "";
  Tuple2<bool,String> result = Tuple2(false, "");
  bool isCompiled = false;
  String _fileContent = "";

  Future<void> readCodeFile() async {
    try {
      final file = await File("D:\\Users\\Ines\\StudioProjects\\mini_java_compiler\\compiler\\code_generator.txt").readAsString();
      setState(() {
        _fileContent = file;
      });
    } catch (e) {
      print("Error reading file: $e");
    }
  }

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
                                text = "COMPILED SUCCESSFULLY";
                                isCompiled = true;
                              }
                              else{
                                text = result.item2;
                                if(result.item1==true && result.item2.toLowerCase().contains("warning") && !result.item2.toLowerCase().contains("error")){
                                  isCompiled = true;
                                }
                                else{
                                  isCompiled = false;
                                }

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
                              Icon(Icons.play_arrow, color: codeExists && isCompiled ? Colors.green : Colors.grey.shade400,),
                              SizedBox(width: 6,),
                              Text("Generate Code", style: TextStyle(color: codeExists && isCompiled ? Colors.green: Colors.grey.shade400)
                              ),
                            ],
                          ),
                          onPressed: !codeExists && isCompiled ? null : (){
                            readCodeFile();
                          },
                          style: ButtonStyle(
                              backgroundColor: MaterialStateProperty.all(codeExists && isCompiled ? Colors.white: Colors.grey)
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
            child: Container(
              height: deviceHeight*8/12,
              padding: EdgeInsets.symmetric(horizontal: deviceWidth*0.06),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceAround,
                children: [
                  Container(
                    width: deviceWidth*0.7,
                    height: deviceHeight*8/12,
                    decoration: BoxDecoration(
                      color: Colors.white
                    ),
                    child: Actions(
                      actions: {InsertTabIntent: InsertTabAction()},
                      child: Shortcuts(
                        shortcuts: {
                          LogicalKeySet(LogicalKeyboardKey.tab):
                          InsertTabIntent(2, codeController)
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
                  SizedBox(width: deviceWidth*0.03,),
                  Container(
                    width: deviceWidth*0.15,
                    height: deviceHeight*8/12,
                    padding: EdgeInsets.symmetric(vertical: 10, horizontal: 5),
                    decoration: BoxDecoration(
                        color: Colors.white
                    ),
                    child: SingleChildScrollView(
                        child: Column(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            Text("Generated Code :", style: TextStyle(color: Colors.red, fontWeight: FontWeight.w600, fontSize: 16,),textAlign: TextAlign.center),
                            SizedBox(height: 5,),
                            Text(_fileContent , style: TextStyle(color: Colors.grey),),
                          ],
                        ),
                    ),
                  ),
                ],
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
                      width: deviceWidth,
                      height: deviceHeight*0.195,
                      color: Colors.white,
                      child: Padding(
                        padding: const EdgeInsets.only(top: 8.0, right: 8, left: 8),
                        child: RichText(
                          text: TextSpan(
                            children: [
                              TextSpan(text: text, style: TextStyle(color: result.item1? (result.item2.toLowerCase().contains("error") ? Colors.red: Colors.amber ): Colors.green ),),
                              if(result.item1==true && result.item2.toLowerCase().contains("warning") && !result.item2.toLowerCase().contains("error"))
                                TextSpan(text: "COMPILED SUCCESSFULLY", style: TextStyle(color: Colors.green)),
                            ],
                          ),
                        )
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