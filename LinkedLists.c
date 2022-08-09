#include <stdio.h>
// defining our node
struct Node {
	int value;
	struct Node* next;
};

struct Node* head; // a global variable

// Finding an element in a list using linked lists

struct Node* get(int pos) {
	struct Node *current = head;
	
	int i;
	for (i=0; i<pos; i++) {
		current = current->next;
	}
	
	return current;
}

// INSERTION 

void insert(int pos, int value) {
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->value = value;
	newNode->next = 0;
	
	if (pos == 0) {
		newNode->next = head;
		head = newNode;
	}
	else {
		struct Node *prev = get(pos-1);
		struct Node *curr = prev->next;

		newNode->next = curr;
		prev->next = newNode;
	}
}

// DELETION

void delete(int pos) {
	if (pos == 0) {
		struct Node *toDelete = head;
		head = toDelete->next;
		free(toDelete);
	}
	else {
		struct Node *prev = get(pos-1);
		struct Node *toDelete = prev->next;
		
		prev->next = toDelete->next;
		free(toDelete);
	}
}

// 

void destroy() {
	struct Node *current = head;
	struct Node *prev;
	while (current != 0) {
		prev = current;
		current = current->next;
		free(prev);
	}
}

void display() {
	struct Node *current = head;
	while (current != 0) {
		printf("Address: %p, Value: %d\n", current, current->value);
		current = current->next;
	}
}

int main() {
	head = 0;
	insert(0, 1);
	insert(1, 2);
	insert(2, 3);
	insert(3, 4);
	insert(0, 5);
	insert(0, 6);
	
	display();
	printf("\n");
	
	delete(0);
	delete(2);
	display();
	
	destroy();
}
