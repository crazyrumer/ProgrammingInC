@ECHO OFF
SUBST P: "D:\Projects\Programming in C"
call "D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x64
set path=p:\utilities;%path%
