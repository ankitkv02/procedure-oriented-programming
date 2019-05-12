#include<stdio.h>
#include<stdlib.h>

int isPrime(int);
int isEve(int);

int main(){

  FILE *fsrc,
  *feve,
  *fodd,
  *fprime;
  int num,success;

  fsrc = fopen("file1.txt","r");
  feve = fopen("fileEve.txt","a");
  fodd = fopen("fileOdd.txt","a");
  fprime = fopen("filePrime.txt","a");

  if(fsrc == NULL || feve == NULL || fodd == NULL || fprime == NULL){
    printf("Unable to perform this operation. \n");
  }

  printf("File opened successfully! Reading integers from file. \n");

  do{
    success = fscanf(fsrc,"%d",&num);

    if(isPrime(num)){
      fprintf(fprime,"%d, ",num);
    } else if(isEve(num)){
      fprintf(feve,"%d, ",num);
    } else{
      fprintf(fodd,"%d, ",num);
    }
  } while(success != -1);

  fclose(fsrc);
  fclose(feve);
  fclose(fodd);
  fclose(fprime);

  printf("Data written to files successfully. \n");

  return 0;
}

int isPrime(int x){

  if(x < 0){
    return 0;
  }

  for(int i=2; i<=x/2; i++){
    if(x%i == 0){
      return 0;
    }
  }

  return 1;
}

int isEve(int n){

  return !(n & 1);
}