#define p printf(
b;main(a){for(;;){p"\e[2J");for(a=0;a<628;)p"\e[%.f;%.ff#",20*sin(.03*a)+30,40*cos(a++/50.+b/20.)+60),p"\n");usleep(60000);++b;}}
