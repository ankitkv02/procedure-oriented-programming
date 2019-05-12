#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100

int main()
{
	int N,i,j,Lower[MAX_SIZE],Upper[MAX_SIZE],Score[MAX_SIZE],Draw[MAX_SIZE],maxScore,contID,flag,drawCount;

	printf("Enter the number of Contestants : ");
	scanf("%d",&N);

	for(i=1; i<=N; i++)
	{
		printf("Enter the Lower and Upper singing-pitch of Contestant No. %d : ",i);
		scanf("%d%d",&Lower[i],&Upper[i]);
	}

	for(i=1; i<=N; i++)
	{
		if(Lower[i] > Upper[i])
			printf("Invalid limits inserted of Contestant No. %d ! \n",i);

		else
			Score[i] = 0;
	}

	for(i=1; i<=N; i++)
	{
		for(j=i+1; j<=N; j++)
		{
			if((Lower[j] == Lower[i] && Upper[j] > Upper[i]) || (Upper[j] == Upper[i] && Lower[j] < Lower[i]) || (Lower[j] < Lower[i] && Upper[j] > Upper[i]))
				Score[j] += 2;

			else if((Lower[i] == Lower[j] && Upper[i] > Upper[j]) || (Upper[i] == Upper[j] && Lower[i] < Lower[j]) || (Lower[i] < Lower[j] && Upper[i] > Upper[j]))
				Score[i] += 2;

			else
			{
				Score[i] += 1;
				Score[j] += 1;
			}	 
		}
	}

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
			printf("The competition resulted in a draw amongst all the contestants, each scoring %d points.\n",maxScore);

		else
		{
			printf("The competition resulted in a draw between/amongst %d people, which are Contestant No. ",drawCount);
			for(i=1; i<=drawCount; i++)
				printf("%d, ",Draw[i]);
			
			printf("with %d points each. \n",maxScore);
		}	
	}

	else
		printf("Contestant No. %d is the clear winner with the highest score of %d points! \n",contID,maxScore);

	return 0;
}