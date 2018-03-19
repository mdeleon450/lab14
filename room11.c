#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	int numChoice;
	puts("a damp room, mostly empty, three boxes lay on the floor");
	puts("you feel the urge to look through them");
	puts("pick one of the boxes");
	scanf("%d",numChoice);
	switch(numChoice)
	{
		case 1:
			puts("box #%d was empty",numChoice);	
			break;
		case 2:
			puts("box #%d was empty",numChoice);
			break;
		case 3:
			puts("box #%d was empty",numChoice);
			break;
	}

	
}
