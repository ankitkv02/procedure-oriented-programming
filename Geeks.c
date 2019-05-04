#include<stdio.h>
#define MAX 100 

void findSubArray(int arr[],int len,int sum);

int main(){

	int test,len,sum;
	int arr[MAX];

//	printf("How many tests do you wish to perform? ");
	scanf("%d",&test);

	while(test){
//		printf("Define array size : ");
		scanf("%d",&len);

//		printf("Enter the value of sum you're looking for in a sub-array? ");
		scanf("%d",&sum);

//		printf("Enter each individual element into the array one by one - \n");
		for(int i=0; i<len; i++){
			scanf("%d",&arr[i]);
		}
		
		findSubArray(arr,len,sum);

		test--;
	}

	return 0;
}

void findSubArray(int arr[],int len,int sum){

	int tempSum,i,startIndex,endIndex;

	for(i=0; i<len; i++){
		startIndex = endIndex = i;
		tempSum = 0;
		while(endIndex < len){
			tempSum += arr[endIndex];
			if(tempSum == sum){
				startIndex++;
				endIndex++;
	//			printf("The sub-array resulting to a sum of %d ranges from position %d - %d \n",sum,startIndex,endIndex);
				printf("%d %d \n",startIndex,endIndex);
				return;
			}
			endIndex++;
		}
		
	}

//	printf("There is no sub-array which sums upto %d \n",sum);
	printf("1 \n");

}
