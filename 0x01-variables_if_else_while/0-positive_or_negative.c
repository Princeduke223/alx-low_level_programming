#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{	srand(time(NULL));
	int a = rand()%21-10;
	if(a > 0){printf("Our random number is %d and it is positive.\n", a);}
	else if(a == 0) {printf("Our random number is %d and it is zero.\n", a);}
	else {printf("Our random number is %d and it is negative.\n", a);}
	return 0;
}
