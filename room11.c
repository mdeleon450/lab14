#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	int numChoice=0;
	int boxNum=0;
	int i=0;
	puts("you entered room #11");
	puts("a damp room, mostly empty, three boxes lay on the floor");
	puts("you feel the urge to look through them");
	puts("how many would you like to look through?");
	scanf("%d",&numChoice);
	if(numChoice>3||numChoice==0)
	{
		printf("why? just leave\n");
	}
	else
	{
		for(i=0;i<numChoice;i++)
		{
			printf("which box would you like to look in?\n");
			scanf("%d",&boxNum);
			switch(boxNum)
			{
				case 1:
					printf("box #%d was empty\n",boxNum);
					break;
				case 2:
					printf("box #%d was empty\n",boxNum);
					break;
				case 3:
					printf("box #%d was empty\n",boxNum);
					break;
			}
		}
	}
	if(numChoice==3)
	{
		printf("you wasted your time here, you leave now\n");
	}

	
}
