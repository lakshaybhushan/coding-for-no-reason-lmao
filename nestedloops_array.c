#include <stdio.h>
int main() {
    int array[4][2]={ 
        {2,4},          
        {1,6},    
        {5,9},   
        {3,8}   
    };
    int i,j;
    for (i=0;i<4;i++){
        for (j=0;j<2;j++){
            printf("%d,",array[i][j]); //using to , to separate two no's.
        }
        printf("\n");
    }
    return 0;

}