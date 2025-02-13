all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeadd.exe:
	gcc safeint.c safeadd.c -o safeadd.exe

safesubtract.exe:
	gcc safeint.c safesubtract.c -o safesubtract.exe

safemultiply.exe:
	gcc safeint.c safemultiply.c -o safemultiply.exe

safedivide.exe:
	gcc safeint.c safedivide.c -o safedivide.exe

clean:
	del *.o *.exe


