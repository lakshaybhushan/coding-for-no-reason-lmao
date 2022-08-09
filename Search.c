#include <stdio.h>
#include <math.h>

int linearSearch(int arr[], int size ,int element){
    for (int i=0; i<size; i++ )
    {
        if (arr[i]==element){
            return i;
        }
    return -1;
    }

}

int main() {

    int arr[] ={1,3,2,6,7,85,12,56};
    int size = sizeof(arr)/sizeof(int);
    int search_Index = linearSearch(arr,size,4);


    return 0;

}