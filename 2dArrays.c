#include <stdio.h>
//The 1st [] refers to number of arrays in an array
//The 2nd [] refers to number of elements in array
int main() {
//Creating a 2D Array!!
    int array[4][2]={ 
        {2,4},     //0th element     
        {1,6},    //1th element
        {5,9},   //2th element
        {3,8}   //3th element
    };
    printf("%d\n",array[3][0]);
    /*                  ^  ^
                        Which array to access ...
                           which element to access ...
    */
    return 0;

}