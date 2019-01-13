@echo off
setlocal
set TF=TestFramework
g++ -c Exception.cpp %TF%.cpp main.cpp
g++ -shared -o %TF%.dll Exception.o %TF%.o -Wl,--out-implib,TestFramework.a
g++ -o main.exe Exception.o %TF%.o main.o
del *.a *.o
