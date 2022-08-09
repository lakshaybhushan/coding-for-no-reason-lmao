/*
#include <stdio.h>
int main() {
    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade); //using %lf is input is double
    printf("Your grade is %c\n",grade);

   return 0;

}
*/
//getting a character sequence as input
#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name: ");
    fgets(name,20,stdin); //con: can't store its value, prints a new line everytime
    //scanf("%s",name); // con: Can't get a space separated input
    printf("Your name is %s",name); // don't use \n here
    // to the issue of getting a space separated input, we use fgets(var,lenght,stdin)
   return 0;

}