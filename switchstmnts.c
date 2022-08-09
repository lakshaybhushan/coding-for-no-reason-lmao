#include <stdio.h>
int main() {
    char grade;
    printf("Enter your grade:");
    scanf("%c",&grade);

    switch (grade) {
    case 'A':
        printf ("You did great!\n") ;    //kinda like if elif
        break;
    case 'B':
        printf ("You did alright!\n");
        break;
    case 'C':
        printf ("You did poorly\n") ;
        break;
    case 'D':
        printf ("You did very bad\n") ;
        break;
    case 'F':
        printf ("You Failed!\n");
        break;
    default:                            //works like else
        printf("Invalid Grade\n") ;
    }

   return 0;

}