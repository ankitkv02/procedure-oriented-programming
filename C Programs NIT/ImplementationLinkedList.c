#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}node;

void append(int);
void addAtBegin(int);
void addAfter(int,int);
int listLength(void);
void swapConsecutiveNodes(int);
void displayList(void);
void delete(int);

node *root;
int length;

int main(){

	int opt;
	int data,ref,len;

	while(1){
		
		printf("\n1. Append \n");
		printf("2. Add at begin \n");
		printf("3. Add after \n");
		printf("4. List length \n");
		printf("5. Swap consecutive nodes \n");
		printf("6. Display/Traverse list \n");
		printf("7. Delete \n");
		printf("8. Quit \n");

		printf("Choose an operation - ");
		scanf("%d",&opt);

		switch(opt){
			case 1:
				printf("Enter the element to append to the list : ");
				scanf("%d",&data);
				append(data);
				break;

			case 2:
				printf("Enter the element to add : ");
				scanf("%d",&data);
				addAtBegin(data);
				break;

			case 3:
				printf("Enter the element to add : ");
				scanf("%d",&data);
				printf("After which element do you want to add %d? ",data);
				scanf("%d",&ref);
				addAfter(data,ref);
				break;

			case 4:
				len = listLength();
				printf("The current list is %d nodes long! \n",len);
				break;

			case 5:
				printf("Enter the node data you want to swap : ");
				scanf("%d",&data);
				swapConsecutiveNodes(data);	

			case 6:
				displayList();
				break;

			case 7:
				printf("Which element do you want to delete? ");
				scanf("%d",&data);
				delete(data);
				break;

			case 8:
				exit(1);

			default :
				printf("Invalid command! \n");

		}
	}

	return 0;
}

void append(int x){

	node *temp,*ptr;

	temp = (node*)malloc(sizeof(node));
	temp->data = x;
	temp->link = NULL;

	if(root == NULL){
		root = temp;
	} else{
		ptr = root;
		while(ptr->link != NULL){
			ptr = ptr->link;
		}

		ptr->link = temp;
	}
	printf("%d appended to the list successfully! \n",x);
}

void addAtBegin(int x){

	node *temp;

	temp = (node*)malloc(sizeof(node));
	temp->data = x;
	temp->link = NULL;

	if(root == NULL){
		root = temp;
	} else{
		temp->link = root;
		root = temp;
	}
	printf("%d added at the beginning of the list successfully! \n",x);
}

void addAfter(int ele,int ref){

	node *ptr;

	if(root == NULL){
		printf("The list is empty! So we are appending %d to the list. \n",ele);
		append(ele);
		return;
	}

	ptr = root;
	while(ptr != NULL){
		if(ptr->data == ref){
			node *temp = (node*)malloc(sizeof(node));
			temp->data = ele;			
			temp->link = NULL;			//Node formation.
			
			temp->link = ptr->link;		//Connection.
			ptr->link = temp;

			printf("%d added after %d successfully! \n",ele,ref);
			return;
		}
		ptr = ptr->link;
	}

	printf("%d doesn't exist in the list. \n",ref);	
}

int listLength(void){

	node *ptr;

	length = 0;
	ptr = root;
	while(ptr != NULL){
		length++;
		ptr = ptr->link;
	}

	return length;
}

void swapConsecutiveNodes(int x){

	node *ptr = root;

	while(ptr != NULL){
		if(ptr->link->data == x){
			ptr->link->link = ptr->link->link->link;
			ptr->link = ptr->link->link;
			ptr->link->link->link = ptr->link;
			return;
		}
		ptr = ptr->link;
	}

}

void displayList(void){

	node *ptr = root;

	if(ptr == NULL){
		printf("The list is empty.! \n");
	} else{
		printf("The current list looks like - \n");
		while(ptr != NULL){
			printf("%d-->",ptr->data);
			ptr = ptr->link;
		}
		printf("NULL\n");
	}	

}

void delete(int x){

	node *ptr = root;

	if(root == NULL){
		printf("The list is empty! \n");
		return;
	} else if(ptr->data == x){
		root = ptr->link;
		ptr->link = NULL;
		free(ptr);
		printf("%d deleted from the list successfully! \n",x);
		return;
	} else{
		while(ptr->link != NULL){
			if(ptr->link->data == x){
				ptr->link = ptr->link->link;
//				ptr->link->link = NULL;
				free(ptr->link);
				printf("%d deleted from the list successfully! \n",x);
				return;
			}
			ptr = ptr->link;
		}	
	}

	printf("%d doesn't exist in the list. \n",x);
}