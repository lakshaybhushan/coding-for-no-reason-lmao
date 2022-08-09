/*#include <stdio.h>;

// user function
void hello_world() {
    printf("Hello!!..How are you ??\n");
}

int main() {

    hello_world(); // functions are called line by line 

   return 0;

}
*/

#include <stdio.h>
void Hello(char character_name[],int character_age[]){
    printf("Hello %s welcome, You are % years old\n",character_name,character_age);

}

int main() {

    Hello("Oscar",18);
    Hello("Panda",10);
    Hello("Air",14);

   return 0;

}