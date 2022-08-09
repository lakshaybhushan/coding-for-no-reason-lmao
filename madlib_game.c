// makibg a text based game, we have to fill
#include <stdio.h>
int main() {

    char yourname [20];
    char favthing[20];
    char imf[20];
    char iml[20];


    printf ("Enter a your name: ");
    scanf("%s", yourname);
    printf ("Enter your fav thing: ") ;
    scanf ("%s", favthing);
    printf("What you are: ");
    scanf ("%s%s", imf,iml) ;

    printf ("You are %s\n", yourname);
    printf ("%s are my fav\n", favthing);
    printf ("I am %s %s\n", imf,iml); // way to print out space sep I/O


   return 0;

}
