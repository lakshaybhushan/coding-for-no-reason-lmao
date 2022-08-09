#include <stdio.h>
/*
 1. Initialising the variable (START)
 2. Defining the end of loop (END)
 3. Condition for our loop like in the eg. i++ => incrementing value of i=i+1
*/
int main() {
    int number_array[]={1,2,3,4,5,6,7};
    int i;
    for(i=0;i<=6;i++){   //(START;END;CONDITION)
        printf("%d\n",number_array[i]);
    }

    return 0;
}