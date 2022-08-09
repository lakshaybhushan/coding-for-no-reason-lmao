#include <stdio.h>
#include <stdlib.h>

int main() {

    //factorial of a number
    int n;
    int i; 
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; n>=i; i++) { //(start, end, increment)
        fact = fact * i; 
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}