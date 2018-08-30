#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

typedef struct Node snode;
snode *first, *second, *third, *temp, *ptr;

void push(snode** header, int a) {
	temp = (snode*)malloc(sizeof(snode));
	temp->data = a;
	temp->next = *header;
	*header = temp;
	//printf("%d",**header->data);
}

void printList(snode** head) {

	temp = *head;
	printf("The List is: ");
	while(temp!=NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void pop(snode** header) {
	temp = *header;
	*header = (**header).next;
	free(temp);
}

int top(snode** header) {
	if(*header!=NULL)
		return (**header).data;
	else 
		return -1;
}

void towerOfHanoi(int n, snode** first, snode** second, snode** third) 
{ 
    if (n == 1) 
    { 
        push(second,top(first));
        pop(first);
        printList(first);
		printList(second);
		printList(third);


    } 
    towerOfHanoi(n-1, first, third, second); 
    push(second,top(first));
    pop(first);
    printList(first);
		printList(second);
		printList(third);
    towerOfHanoi(n-1, third, second, first); 
} 
  


int main() {
	int x,i;
	scanf("%d",&x);
	for(i=x;i>=1;i--) {
		push(&first,i);
		
	}
	printList(&first);
	printList(&second);
	printList(&third);
	towerOfHanoi(x, &first, &second, &third);
	printList(&first);
	printList(&second);
	printList(&third);

	
}