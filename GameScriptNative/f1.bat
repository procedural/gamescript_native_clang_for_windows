@if not exist C:\GameScriptNative\libgamescriptnative.o (
  @C:\GameScriptNative\clang++.exe -c -g -O1 -w -std=c++14 C:\GameScriptNative\libgamescriptnative.cpp -o C:\GameScriptNative\libgamescriptnative.o
)

@if not exist C:\GameScriptNative\libgamescriptnative.h.pch (
  @C:\GameScriptNative\clang++.exe -O1 -x c++-header C:/GameScriptNative/libgamescriptnative.h -Xclang -emit-pch -o C:/GameScriptNative/libgamescriptnative.h.pch
)

@"C:\Program Files\Git\bin\bash.exe" C:\GameScriptNative\clang_autocomplete_windows.sh C:/GameScriptNative/f1.cpp -O1 -include C:/GameScriptNative/libgamescriptnative.h
