@del C:\GameScriptNative\game.dll

@if not exist C:\GameScriptNative\libgamescriptnative.o (
  @C:\GameScriptNative\clang++.exe -c -g -O2 -w -std=c++14 C:\GameScriptNative\libgamescriptnative.cpp -o C:\GameScriptNative\libgamescriptnative.o
)

@if not exist C:\GameScriptNative\libgamescriptnative.h.pch (
  @C:\GameScriptNative\clang++.exe -O2 -x c++-header libgamescriptnative.h -Xclang -emit-pch -o libgamescriptnative.h.pch
)

@C:\GameScriptNative\clang++.exe -g -O2 -w -std=c++14 -shared -include C:/GameScriptNative/libgamescriptnative.h C:/GameScriptNative/game.cpp C:/GameScriptNative/gamescript.dll.lib C:/GameScriptNative/libgamescriptnative.o -o C:/GameScriptNative/game.dll
