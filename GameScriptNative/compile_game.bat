@del C:\GameScriptNative\game.dll

@C:\GameScriptNative\clang++.exe -g -O2 -w -std=c++14 -shared -include C:/GameScriptNative/libgamescriptnative.cpp C:/GameScriptNative/game.cpp C:/GameScriptNative/gamescript.dll.lib -o C:/GameScriptNative/game.dll
