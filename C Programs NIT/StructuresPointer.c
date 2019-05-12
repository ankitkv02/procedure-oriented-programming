#include<stdio.h>

struct Person{

	char name[20];
	int age;
	float weight;
};

int main(){
	
	struct Person* person1;

	printf("Enter the person's name : ");
	scanf("%s",person1->name);

	printf("Enter the person's age : ");
	scanf("%d",&person1->age);

	printf("Enter the person's weight : ");
	scanf("%f",&person1->weight);

	printf("Name : %s \n",person1->name);
	printf("Age : %d \n",person1->age);
	printf("Weight : %f \n",person1->weight);

	return 0;
}