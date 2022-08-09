#include <stdio.h>
#include <stdlib.h>

struct Node{
	int val;
	struct Node* next ;
	
};


void Display(struct Node* first){
    struct Node* p=first;
    while(p!=NULL){
            printf("%d ",p->val);
            p=p->next;
    }
    printf("\n");
}

int delete

int main(){
    int n;
    scanf("%d",&n);
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    scanf("%d",&head->val);
    head->next=NULL;
    struct Node *last=head;
    struct Node *t;
    for(int i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d",&t->val);
        last->next=t;
        t->next=NULL;
        last=t;
    }
    Display(head);


}


