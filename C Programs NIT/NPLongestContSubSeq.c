#include<stdio.h>

int main(){

	int cur,prev,len=0,maxlen=0;

	printf("Enter a value : ");
	scanf("%d",&prev);

	if(!(prev == -1)){
		len = 1;
		maxlen = 1;
		scanf("%d",&cur);

		while(cur != -1){
			if(prev < cur){
				len++;
			} else{
				if(maxlen < len){
					maxlen = len;
				}
				len = 1;
			}
			prev = cur;
			scanf("%d",&cur);
		}
		if(maxlen < len){
			maxlen = len;
		}	
		
	}
	printf("The length of longest contiguous increasing sub-sequence is : %d \n",maxlen);

	return 0;
}