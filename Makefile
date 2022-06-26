all: vxm.reset.exe vxm.position.exe vxm.move.abs.exe  vxm.move.inc.exe vxm.speed.set.exe \
	vxm.zero.set.exe vxm.acceleration.set.exe vxm.speed.get.exe vxm.speed.limit.exe \
	vxm.weight.check.exe vxm.weight.limit.exe vxm.moment.limit.exe vxm.moment.check.exe

vxm.moment.check.exe:

VxmDriver.o:
	g++ -c VxmDriver.cpp -o VxmDriver.o

vxm.reset.o:
	g++ -c vxm.reset.cpp -o vxm.reset.o

vxm.position.o:
	g++ -c vxm.position.cpp -o vxm.position.o

vxm.move.abs.o:
	g++ -c vxm.move.abs.cpp -o vxm.move.abs.o

vxm.move.inc.o:
	g++ -c vxm.move.inc.cpp -o vxm.move.inc.o

vxm.speed.set.o:
	g++ -c vxm.speed.set.cpp -o vxm.speed.set.o

vxm.zero.set.o:
	g++ -c vxm.zero.set.cpp -o vxm.zero.set.o

vxm.acceleration.set.o:
	g++ -c vxm.acceleration.set.cpp -o vxm.acceleration.set.o

vxm.speed.get.o:
	g++ -c vxm.speed.get.cpp -o vxm.speed.get.o



vxm.speed.limit.exe:
	g++ vxm.speed.limit.cpp -o vxm.speed.limit.exe

vxm.weight.check.exe:
	g++ vxm.weight.check.cpp -o vxm.weight.check.exe

vxm.weight.limit.exe:
	g++ vxm.weight.limit.cpp -o vxm.weight.limit.exe

vxm.moment.limit.exe:
	g++ vxm.moment.limit.cpp -o vxm.moment.limit.exe

vxm.moment.check.exe:
	g++ vxm.moment.check.cpp -o vxm.moment.check.exe
	
	

vxm.reset.exe: VxmDriver.o vxm.reset.o
	g++ vxm.reset.o VxmDriver.o -o vxm.reset.exe

vxm.position.exe: VxmDriver.o vxm.position.o
	g++ vxm.position.o VxmDriver.o -o vxm.position.exe

vxm.move.abs.exe: VxmDriver.o vxm.move.abs.o
	g++ vxm.move.abs.o VxmDriver.o -o vxm.move.abs.exe

vxm.move.inc.exe: VxmDriver.o vxm.move.inc.o
	g++ vxm.move.inc.o VxmDriver.o -o vxm.move.inc.exe

vxm.speed.set.exe: VxmDriver.o vxm.speed.set.o
	g++ vxm.speed.set.o VxmDriver.o -o vxm.speed.set.exe

vxm.zero.set.exe: VxmDriver.o vxm.zero.set.o
	g++ vxm.zero.set.o VxmDriver.o -o vxm.zero.set.exe

vxm.acceleration.set.exe: VxmDriver.o vxm.acceleration.set.o
	g++ vxm.acceleration.set.o VxmDriver.o -o vxm.acceleration.set.exe

vxm.speed.get.exe: VxmDriver.o vxm.speed.get.o
	g++ vxm.speed.get.o VxmDriver.o -o vxm.speed.get.exe


	
clean:
	del /Q /S *.o *.exe