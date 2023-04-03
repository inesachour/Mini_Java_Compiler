
import 'dart:io';
import 'package:file_picker/file_picker.dart';
import 'package:tuple/tuple.dart';


String compilerBasePath = "D:\\Users\\Ines\\StudioProjects\\mini_java_compiler\\compiler";

Future<String?> readFile() async {
  FilePickerResult? result = await FilePicker.platform.pickFiles();
  if (result != null) {
    File file = File(result.files.single.path!);
    final contents = await file.readAsString();
    return contents;
  }
}

Future writeFile(String data) async {
  final file = File('$compilerBasePath\\code.txt');
  try{
    await file.writeAsString(data, mode: FileMode.write).then((value) => null, onError: (e)=> print(e));

  }
  catch(e){
    print(e);
  }
}

Future<Tuple2<bool, String>> compileCode() async{
  var result = await Process.run(
      '$compilerBasePath\\a.exe', ['<', '$compilerBasePath\\code.txt'],
      runInShell: true);

  String err = result.stderr;
  String out = result.stdout;
  bool isError = (err != "");
  return Tuple2(isError, isError ? err : out);
}