 #include<stdio.h>
 #include<math.h>
 #include<limits.h>
 #define maxSize 1000

 int main()
 {
 	int arr[maxSize],i,size,SearchElement,ElementPos; //We can also use ElementPos instead of directly printing i.

 	printf("Define the Array size : ");
 	scanf("%d",&size);	

 	if(size>maxSize)
 		printf("Array size exceeded ! ");

 	else
 	{
	 	printf("Enter each individual element into the array one by one : ");
	 	for(i=1;i<=size;i++)
	 		scanf("%d",&arr[i]);

	 	printf("Enter the element to be searched through the array : ");
	 	scanf("%d",&SearchElement);

	 	for(i=1; i<=size; i++)	 	
	 		if(arr[i] == SearchElement)	 				 		
			 	printf("\n%d found ! \nAnd it is at %d index in the array! \n\n",SearchElement,i);	

	 }	 	

	 return 0;
 }