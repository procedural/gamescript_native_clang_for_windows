@if not exist C:\GameScriptNative\libgamescriptnative.o (
  @C:\GameScriptNative\clang++.exe -c -g -O2 -w -std=c++14 C:\GameScriptNative\libgamescriptnative.cpp -o C:\GameScriptNative\libgamescriptnative.o
)

@if not exist C:\GameScriptNative\libgamescriptnative.h.pch (
  @C:\GameScriptNative\clang++.exe -O2 -x c++-header libgamescriptnative.h -Xclang -emit-pch -o libgamescriptnative.h.pch
)

@"C:\Program Files\Git\bin\bash.exe" C:\GameScriptNative\clang_autocomplete_windows.sh C:/GameScriptNative/f1.cpp -O2 -include C:/GameScriptNative/libgamescriptnative.h
