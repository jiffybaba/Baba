#include<stdio.h>
#include<stdlib.h>

struct Node {
	int coeff;
	int power;
	struct Node* next;
};

typedef struct Node snode;
snode *poly1, *poly2, *poly, *ptr, *temp, *temp1, *temp2, *temp3;


void insert1(int a,int i) {
	temp = (snode*)malloc(sizeof(snode));
	temp->coeff = a;
	temp->power = i;
	temp->next = poly1;
	poly1 = temp;

}

void display1() {
	struct Node* temp = poly1;
	while(temp != NULL) {
		printf("%dx^%d",(*temp).coeff,(*temp).power);
		temp = (*temp).next;
		if(temp != NULL)
			printf(" + ");
	}

}

void createList1() {
	printf("Enter number of terms: ");
	int x;
	scanf("%d",&x);
	int i;
	for(i=0;i<x;i++) {
		printf("Coefficient of x power %d: ",i);
		int c;
		scanf("%d",&c);
		insert1(c,i);
	}

}

void insert2(int a,int i) {
	temp = (snode*)malloc(sizeof(snode));
	temp->coeff = a;
	temp->power = i;
	temp->next = poly2;
	poly2 = temp;

}

void display2() {
	struct Node* temp = poly2;
	while(temp != NULL) {
		printf("%dx^%d",(*temp).coeff,(*temp).power);
		temp = (*temp).next;
		if(temp != NULL)
			printf(" + ");
	}

}

void createList2() {
	printf("Enter number of terms: ");
	int x;
	scanf("%d",&x);
	int i;
	for(i=0;i<x;i++) {
		printf("Coefficient of x power %d: ",i);
		int c;
		scanf("%d",&c);
		insert2(c,i);
	}

}

void addBoth() {
	temp1 = poly1;
	temp2 = poly2;
	poly = (snode*)malloc(sizeof(snode));
	temp3 = poly;


	while(temp1 && temp2) {
		if(temp1->power>temp2->power) {
			temp3->coeff = temp1->coeff;
			temp3->power = temp1->power;
			temp1 = temp1->next; 
		}
		else if(temp2->power>temp1->power) {
			temp3->coeff = temp2->coeff;
			temp3->power = temp2->power;
			temp2 = temp2->next;

		}
		else {
			temp3->power = temp1->power;
			temp3->coeff = temp1->coeff + temp2->coeff;
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		printf("%d",temp3->coeff);

		if(temp1 != NULL) {
		temp3->next = (snode*)malloc(sizeof(snode));
		temp3 = temp3->next;
		temp3->next = NULL;
	}



	}
}

void display3() {

	struct Node* temp = poly;
	while(temp != NULL) {
		printf("%dx^%d",(*temp).coeff,(*temp).power);
		temp = (*temp).next;

		if(temp != NULL)
			printf(" + ");
		
	}


}




int main() {
	while(1) {
	printf("\n1. Create First Polynomial.\n2. Display First Polynomial.\n3. Create Second Polynomial.\n4. Display Second Polynomial.\n5. Add above polynomials.\n6. Display Resultant Polynomial.\n7. Exit.\n");
	
	printf("\n");
	printf("Enter Choice: ");
	int x;
	scanf("%d",&x);
	if(x==1) 
		createList1();
	if(x==2)
		display1();
	if(x==3)
		createList2();
	if(x==4)
		display2();
	if(x==5)
		addBoth();
	if(x==6)
		display3();
	if(x==7)
		break;	

}
}