#include<stdio.h>
#include<string.h>

struct student
{
    char student_name[20];
    char r;
    double roll_no;
    int student_marks;
    float student_percentage;
} ;
int main()
{
    struct student size;
    printf("Size of the total structure: %ld\n",sizeof(size));
    printf("Size of the char  array in structure: %d\n",sizeof(size.student_name));
    printf("Size of the char in structure: %d\n",sizeof(size.r));
    printf("Size of the double in structure: %d\n",sizeof(size.roll_no));
    printf("Size of the int in structure: %d\n",sizeof(size.student_marks));
    printf("Size of the float in structure: %d\n",sizeof(size.student_percentage));
    return 0;
}