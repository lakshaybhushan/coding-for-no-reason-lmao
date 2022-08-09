#include <stdio.h>

struct Node{

	int value;
	struct Node* next;

};
int main() {

	struct Node third={3,0};
	struct Node second={2, &third};
	struct Node first={1, &second};
 

	printf("First is %d\n", first.value);
	printf("Second is %d\n", second.value);
	printf("Third is %d\n", third.value);

	printf("Item1 is %d\n", first.value);
	printf("Item2 is %d\n", first.next->value);
	printf("Item3 is %d\n", first.next->next->value); // how to go to next lists
	
	return 0;
}

