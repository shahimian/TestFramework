@echo off
setlocal
set TF=TestFramework
g++ -c Exception.cpp %TF%.cpp
g++ -shared -o %TF%.dll Exception.o %TF%.o -Wl,--out-implib,TestFramework.a
g++ -o main.exe Exception.o %TF%.o
del *.a *.o
