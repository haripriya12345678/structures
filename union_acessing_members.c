#include<stdio.h>
int main(void)
{
    union result
    {
        int marks;
        char grade;
        float per;

    }res;
    res.marks=90;
    printf("marks : %d\n",res.marks);
    res.grade='A';
    printf("Grade : %c\n",res.grade);
    res.per=85.5;
    printf("percentage : %f\n",res.per);
    return 0;
}