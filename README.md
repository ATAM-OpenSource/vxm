# VXM
32 bit executables for [Velmex Rotary Step Motor Control](https://www.velmex.com/Products/Controls/VXM_Controller.html) Commands to control [PK264-03A](https://catalog.orientalmotor.com/item/all-categories-legacy-products/tegories-pk-series-2-phase-stepping-motors-legacy-/pk264-03a) with [Velmex Rotary Table](https://www.velmex.com/Products/Rotary_Tables/Motorized-Rotary-Tables.html)

* Please run Makefile with make in current directory on Windows to compile all executables. Should compile on g++ version 4.8 or higher. Tested with MinGW g++ v8.1.0

## Build on Windows
### MSVC
``` 
cl.exe /c .\VxmDriver.cpp
cl.exe /c <command.cpp> /EHsc
link <command.obj> VxmDrive.obj user32.lib  
```
### Mingw
```
make
```


### PDF links:
* [Start Guide](https://github.com/ATAM-Anten/vxm/blob/main/docs/Quick%20Start%20Guide.pdf)
* [Stepper Motor](https://github.com/ATAM-Anten/vxm/blob/main/docs/PK264-03A_StepperMotor.pdf)
* [Rotary Table Specs](https://github.com/ATAM-Anten/vxm/blob/main/docs/Rotary%20Tables%20Spec%20Overview.pdf)
* [VXM User Manual](https://github.com/ATAM-Anten/vxm/blob/main/docs/vxm2_users_man.pdf)


```
████████╗██╗   ██╗██████╗ ██╗████████╗ █████╗ ██╗  ██╗    ██████╗ ██╗██╗      ██████╗ ███████╗███╗   ███╗     █████╗ ████████╗ █████╗ ███╗   ███╗
╚══██╔══╝██║   ██║██╔══██╗██║╚══██╔══╝██╔══██╗██║ ██╔╝    ██╔══██╗██║██║     ██╔════╝ ██╔════╝████╗ ████║    ██╔══██╗╚══██╔══╝██╔══██╗████╗ ████║
   ██║   ██║   ██║██████╔╝██║   ██║   ███████║█████╔╝     ██████╔╝██║██║     ██║  ███╗█████╗  ██╔████╔██║    ███████║   ██║   ███████║██╔████╔██║
   ██║   ██║   ██║██╔══██╗██║   ██║   ██╔══██║██╔═██╗     ██╔══██╗██║██║     ██║   ██║██╔══╝  ██║╚██╔╝██║    ██╔══██║   ██║   ██╔══██║██║╚██╔╝██║
   ██║   ╚██████╔╝██████╔╝██║   ██║   ██║  ██║██║  ██╗    ██████╔╝██║███████╗╚██████╔╝███████╗██║ ╚═╝ ██║    ██║  ██║   ██║   ██║  ██║██║ ╚═╝ ██║
   ╚═╝    ╚═════╝ ╚═════╝ ╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝    ╚═════╝ ╚═╝╚══════╝ ╚═════╝ ╚══════╝╚═╝     ╚═╝    ╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝     ╚═╝
```
