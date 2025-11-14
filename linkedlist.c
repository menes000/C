#include <stdio.h>
#include <stdlib.h>

void addtotop();
void showlist();

struct node{
int value;
struct node* next;
};
		
struct node* head = NULL; 

int main (){
	int a = 1;
	printf("0:cikis 1:showlist 2:addtotop");
	while(1){
		printf("yapmak istediginiz eylemi secin:");
		scanf("%d",&a);
		if(a==0)break;
		switch(a){
			case 1:
				showlist();
				break;
			case 2:
				addtotop();
				break;
	
		}	
	}

	return 0;
}

void pop(){
	


}

void addtotop(){
	int n;
	scanf("%d", &n);
	struct node* newnodeaddr = malloc(sizeof(struct node));
	newnodeaddr->value = n;
	newnodeaddr->next= head;
	head = newnodeaddr;
	printf("%d listenin en basina eklendi\n", n);	
	
}

void showlist(){	
	if(head == NULL){
		printf("liste bos");
		return;
	}	
	struct node current = *head;

	while(1){
		
		printf("%d", current.value);
		if(current.next == NULL)break;
		printf(" - ");
		current = *(current.next);
	}
	printf("\n");
}
