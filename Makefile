all: vxm.reset.exe

VxmDriver.o:
	g++.exe -c .\VxmDriver.cpp -o VxmDriver.o

vxm.reset.o:
	g++.exe -c .\vxm.reset.cpp -o vxm.reset.o

vxm.reset.exe: VxmDriver.o vxm.reset.o
	g++.exe vxm.reset.o .\VxmDriver.o -o vxm.reset.exe
	
