#include <stdio.h>

// It means that we can return anything besides void also

double cube (double num) ; // signature - to write function below main !!

int main () {
    printf ("Answer: %f", cube (7.0)) ;
    return 0;
}

double cube (double num) {
    return num*num*num;
}