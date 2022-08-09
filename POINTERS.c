#include <stdio.h>
int main() {
    int a=76;
    //printf("Enter the value of a:");
    int* p=&a;
    printf("Value address is %x\n",p);
    printf("Value entered is %d\n",*p);
    printf("Value entered is %p\n",*p);
    return 0;

}

