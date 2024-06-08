tasks.json

"args": [
"-fcolor-diagnostics",
"-fansi-escape-codes",
"-g",
"\"${workspaceFolder}\"/*.cpp",
"\"${workspaceFolder}\"/src/*/*.cpp",
"-o",
"${fileDirname}/${fileBasenameNoExtension}"
],
