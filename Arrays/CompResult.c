#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100

int main()
{	
	int N,Score[MAX_SIZE],i,maxScore,flag,contID,Draw[MAX_SIZE],drawCount;

	printf("Enter the array size : ");
	scanf("%d",&N);

	printf("Enter elements into the array : ");
	for(i=1; i<=N; i++)
		scanf("%d",&Score[i]);

	maxScore = 0;
	drawCount = 0;	
	for(i=1; i<=N; i++)
	{
		if(Score[i] > maxScore)
		{
			flag = 1;
			maxScore = Score[i];
			contID = Draw[1] = i;
			drawCount = 1;
		}

		else if(Score[i] == maxScore)
		{
			flag = 0;
			drawCount++;
			Draw[drawCount] = i;
		}
	}

	printf("Results are out and here! \n");
	for(i=1; i<=N; i++)
		printf("Contestant No. %d scores %d points \n",i,Score[i]);

	if(flag == 0)
	{
		if(drawCount == N)
			printf("The competition resulted in a draw between/amongst all the contestants, each scoring %d points.\n",maxScore);

		else
		{
			printf("The competition resulted in a draw between/amongst %d people, which are Contestant No. ",drawCount);
			for(i=1; i<=drawCount; i++)
				printf("%d, ",Draw[i]);
			
			printf("with %d points each. \n",maxScore);
		}	
	}

	else
		printf("Contestant No. %d is the clear winner with a score of %d points! \n",contID,maxScore);

	return 0;
}