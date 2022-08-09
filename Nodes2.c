#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	struct Node* next ;
};


struct Node* head; //global variable


// Finding a number in a list using linked list
struct Node* get(int pos){
	struct Node *current = head;

	int i;
	for (i=0;i<pos;i++){
		current=current->next;
	}

	return current;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}


int main(){

	head = 0;
	insert(0, 1);
	insert(1, 2);
	insert(2, 3);
	insert(3, 4);
	insert(0, 5);
	insert (0, 6);
	display();
	printf("\n");
	delete(0);
	delete(2);
	display();
	destroy();
	return 0;
}