
import 'dart:io';

import 'package:file_picker/file_picker.dart';

Future<String?> read_file() async {
  FilePickerResult? result = await FilePicker.platform.pickFiles();
  if (result != null) {
    File file = File(result.files.single.path!);
    final contents = await file.readAsString();
    return contents;
  }
}