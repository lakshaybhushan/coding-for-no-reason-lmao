#include <stdio.h>
int main() {
/*
    int i=0;
    while(i<=5){
        printf("%d\n",i);
        i++; //same as i=i+1
    }
*/

// if we want that our condt. will print first then,
    int i=10;
    do{
        printf("%d\n",i);
        i++; //same as i=i+1
    }
    while(i<=5);

   return 0;
}



