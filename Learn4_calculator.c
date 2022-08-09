#include <stdio.h>
int main() {

    double num1;
    double num2;
    printf("Enter your first number: ");
    scanf("%lf",&num1); // to scan a floating point number
    printf("Enter your second number: ");
    scanf("%lf",&num2);

    double sub=num1-num2;
    printf("Answer:%f\n",sub);

   return 0;

}