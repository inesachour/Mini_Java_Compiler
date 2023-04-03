
import 'dart:io';
import 'package:file_picker/file_picker.dart';
import 'package:tuple/tuple.dart';

Future<String?> read_file() async {
  FilePickerResult? result = await FilePicker.platform.pickFiles();
  if (result != null) {
    File file = File(result.files.single.path!);
    final contents = await file.readAsString();
    return contents;
  }
}

Future<Tuple2<bool, String>> compile_code() async{
  var result = await Process.run(
      'D:\\Users\\Ines\\StudioProjects\\mini_java_compiler\\lib\\compiler\\a.exe', ['<', 'D:\\Users\\Ines\\StudioProjects\\mini_java_compiler\\lib\\compiler\\code.txt'],
      runInShell: true);

  String err = result.stderr;
  String out = result.stdout;
  bool isError = (err != "");
  return Tuple2(isError, isError ? err : out);
}