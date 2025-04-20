#include<stdio.h>
#include<string.h>
typedef struct 
{
    int roll_no;
    char student_name[20];
    float student_marks;

}student;
typedef struct
{
     char college_name[20];
     student student_info;
     float student_percentage;
}details_student;
int main()
{
    details_student a;
    printf("Enter the college name:");
    scanf(" %s",a.college_name);
    printf("Enter the roll number:");
    scanf("%d",&a.student_info.roll_no);
    printf("Enter the student name:");
    scanf(" %s",a.student_info.student_name);
    printf("Enter the student marks:");
    scanf("%f",&a.student_info.student_marks);
    printf("Enter the student percentage:");
    scanf("%f",&a.student_percentage);
    printf("college name: %s\n",a.college_name);
    printf("student roll number: %d\n",a.student_info.roll_no);
    printf("student  name: %s\n",a.student_info.student_name);
    printf("student marks: %.2f\n",a.student_info.student_marks);
    printf("student percentage: %.2f\n",a.student_percentage);
    return 0;
}
