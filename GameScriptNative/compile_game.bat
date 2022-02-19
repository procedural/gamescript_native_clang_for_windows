@del C:\GameScriptNative\game.dll

@if not exist C:\GameScriptNative\libgamescriptnative.o (
  @C:\GameScriptNative\clang++.exe -c -g -O2 -w -std=c++14 C:\GameScriptNative\libgamescriptnative.cpp -o C:\GameScriptNative\libgamescriptnative.o 2>&1
)

@if not exist C:\GameScriptNative\libgamescriptnative.h.pch (
  @C:\GameScriptNative\clang++.exe -O2 -x c++-header C:/GameScriptNative/libgamescriptnative.h -Xclang -emit-pch -o C:/GameScriptNative/libgamescriptnative.h.pch 2>&1
)

@C:\GameScriptNative\clang++.exe -g -O2 -w -std=c++14 -shared -include C:/GameScriptNative/libgamescriptnative.h C:/GameScriptNative/game.cpp C:/GameScriptNative/gamescript.dll.lib C:/GameScriptNative/libgamescriptnative.o -o C:/GameScriptNative/game.dll 2>&1
