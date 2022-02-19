@del C:\GameScriptNative\thread2.dll

@if not exist C:\GameScriptNative\libgamescriptnative.o (
  @C:\GameScriptNative\clang++.exe -c -g -O1 -w -std=c++14 C:\GameScriptNative\libgamescriptnative.cpp -o C:\GameScriptNative\libgamescriptnative.o
)

@if not exist C:\GameScriptNative\libgamescriptnative.h.pch (
  @C:\GameScriptNative\clang++.exe -O1 -x c++-header C:/GameScriptNative/libgamescriptnative.h -Xclang -emit-pch -o C:/GameScriptNative/libgamescriptnative.h.pch
)

@C:\GameScriptNative\clang++.exe -g -O1 -w -std=c++14 -shared -include C:/GameScriptNative/libgamescriptnative.h C:/GameScriptNative/thread2.cpp C:/GameScriptNative/gamescript.dll.lib C:/GameScriptNative/libgamescriptnative.o -o C:/GameScriptNative/thread2.dll
