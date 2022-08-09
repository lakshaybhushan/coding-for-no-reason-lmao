#include <stdio.h>

void max(int n1,int n2, int n3){
    
    if (n1>=n2 && n1>=n3){ //and= &&
    printf("N1 is the greatest %d\n",n1);
    }
    else if(n2>=n1 && n2>=n3){
        printf("N2 is the greatest %d\n",n2);
    }
    else{
        printf("N3 is the greatest %d\n",n3);
    }

}

int main(){
   /* if (2>3||2<5){ //or
        max(11,10,1);
    }*/
    if(1!=2) {
        max(9,10,10);
    }
    else{
        printf("No no no\n");
    }
    return 0;
}