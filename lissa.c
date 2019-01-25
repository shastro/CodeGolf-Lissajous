#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>


void movecursor(int x, int y)
{
	printf("\033[%d;%df", y, x);
	fflush(stdout);
}

int main(int arc, char **args){

	if(args[1] == NULL || args[2] == NULL){
		printf("Missing Required Args\n\tUsage: lissa a b\n");
		exit(1);
	}

	int freq1 = atoi(args[1]);
	int freq2 = atoi(args[2]);


	for(int i = 0; i < 300; i++){
		putc('\n',stdout);
	}
	printf("\033[H"); //Cursor at Corner of Screen

	float x = 0;
	float y = 0;
	float angle = 0;

	float beta = 0.0;

	//Frame Loop
	while(1){

		//Curve Draw Loop

		for(angle = 0; angle < 2 * M_PI; angle += 0.01){
			movecursor(x, y);
			x = 40*cos(freq1*angle + beta) + 60;
			y = 20*sin(freq2*angle) + 30;

			printf("#");
		}
		angle = 0;
		usleep(60* 1000); //Refresh Rate
		beta += 0.05;
		
		printf("\033[2J");
		fflush(stdout);

	}

	return 0;

}