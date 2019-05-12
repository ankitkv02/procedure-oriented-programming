#include<stdio.h>
#include<stdlib.h>

struct Person{

	char name[20];
	int age;
	float weight;
};

int main(){

	struct Person* p1;

	p1 = (struct Person*)malloc(sizeof(struct Person));

	if(p1 == NULL){
		printf("No memory available! \n");
	}

	else{

		printf("Enter person's details : \n");

		printf("Person's name? : ");
		scanf("%s",p1->name);   //scanf("%s",(*p1).name);

		printf("Person's age? : ");
		scanf("%d",&p1->age);  //scanf("%d",&(*p1).age);

		printf("Person's weight? : ");
		scanf("%f",&p1->weight);

		printf("Name1 : %s\nAge : %d\nWeight : %.2f\n",p1->name,p1->age,p1->weight);

	}

	return 0;
}