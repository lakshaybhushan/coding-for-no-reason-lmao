#include <stdio.h>
#include<string.h> // more important
struct Panda //capital letter in struct first name
{
    char Name[40];
    int age;
    double gpa;
};

int main() {

    struct Panda stu1;
    stu1.age =21;
    //stu1.Name="Andres"; -  can't do this way need to use strcpy
    stu1.gpa=8.9;
    //using strcpy means string copy beacause we can't write string in C..
    strcpy(stu1.Name,"Andres"); // also need to declare #include<string.h>
    
    struct Panda stu2;
    stu2.age =23;
    stu2.gpa=9.1;
    strcpy(stu2.Name,"Kimberly");

    printf("Student 1 Name is %s, Gpa is %f\n",stu1.Name,stu1.gpa);
    printf("Student 2 Name is %s, Age is %d\n",stu2.Name,stu2.age);

    return 0;

}