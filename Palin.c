#include <stdio.h>
#include <math.h>

void Palin(int num){
  int sum=0;
  int rem=0;
 // int num=0;
  int temp_var;

  temp_var=num;
  while(num>0){
  rem=num%10;
  sum=(sum*10)+rem;
  num/=10;
 }
 if(temp_var==sum) { 
 printf("Yes\n");
 }
 else{
     printf("No\n");
 }
}
int main() {
    int num;
    //printf("Enter the Number:");
    scanf("%d",&num);
    Palin(num);
    return 0;

}