# CodeGolf-Lissajous
A simple repo with a ungolfed C terminal lissajous plotter, and a 148 byte golfed version.

This is a simple place to store the code.

If you compile and run lissa.c it takes two command line arguments corresponding to the frequency ratios of the lissajous curves.

The Golfed version (lissagolf.c) does not have this functionality.

See the golfed code below:

#define p printf(
b;main(a){for(;;){p"\e[2J");for(a=0;a<628;)p"\e[%.f;%.ff#",20*sin(.03*a)+30,40*cos(a++/50.+b/20.)+60),p"\n");usleep(60000);++b;}}
