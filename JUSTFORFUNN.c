#include <stdio.h>
/*
 1. Initialising the variable (START)
 2. Defining the end of loop (END)
 3. Condition for our loop like in the eg. i++ => incrementing value of i=i+1
*/
int main() {
    char character_array[]="LAKSHAY BHUSHAN\n";
    int i;
    for(i=0;i<=18;i++){   //(START;END;CONDITION)
        printf("%c",character_array[i]);
    }

    return 0;

} 

//--- ERROR IN CODE...TP something EXTRA PRINT ---