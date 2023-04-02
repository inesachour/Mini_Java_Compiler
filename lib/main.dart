import 'package:flutter/material.dart';
import 'package:mini_java_compiler/services/file_service.dart';

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
  TextEditingController controller = TextEditingController();

  @override
  @override
  Widget build(BuildContext context) {

    double deviceHeight = MediaQuery.of(context).size.height;
    double deviceWidth = MediaQuery.of(context).size.width;

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
                        String? fileContent = await read_file();
                        if(fileContent != null){
                          setState(() async {
                            code = fileContent!;
                            controller.text = code;
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
                              Icon(Icons.code, color: Colors.red,),
                              SizedBox(width: 6,),
                              Text("Compile", style: TextStyle(color: Colors.red)
                              ),
                            ],
                          ),
                          onPressed: (){
                          },
                          style: ButtonStyle(
                              backgroundColor: MaterialStateProperty.all(Colors.white)
                          ),
                        ),
                        SizedBox(width: deviceWidth*0.01,),
                        ElevatedButton(
                          child: Row(
                            mainAxisAlignment: MainAxisAlignment.center,
                            children: [
                              Icon(Icons.play_arrow, color: Colors.green,),
                              SizedBox(width: 6,),
                              Text("Run", style: TextStyle(color: Colors.green)
                              ),
                            ],
                          ),
                          onPressed: (){
                          },
                          style: ButtonStyle(
                              backgroundColor: MaterialStateProperty.all(Colors.white)
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
                child: TextField(
                  controller: controller,
                  keyboardType: TextInputType.multiline,
                  cursorColor: Colors.grey,
                  maxLines: null,
                  decoration: InputDecoration(
                    border: OutlineInputBorder(
                      borderSide: BorderSide.none,
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
                          controller: TextEditingController(text: "test"),
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

