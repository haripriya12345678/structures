#include <stdio.h>
#include <string.h>
struct student_info //structure definition
{
    char student_name[20];
    int roll_no;
    float student_cgpa;
};
// Function to read student details
void read_student_details(struct student_info *details, int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", details[i].student_name);
        printf("Enter student %d roll no: ", i + 1);
        scanf("%d", &details[i].roll_no);
        printf("Enter student %d CGPA: ", i + 1);
        scanf("%f", &details[i].student_cgpa);
    }
}
// Function to search student by name
struct student_info search_student_by_name(struct student_info *details, int n, char *name) 
{
    struct student_info not_found;
    not_found.student_name[0] = '\0';
    for (int i = 0; i < n; i++) {
        if (strcmp(details[i].student_name, name) == 0)//comparison for search name is found or not in the given name 
        {
            return details[i];//if name is found
        }
    }
    return not_found;//if name is not found
}
// Function to search student by roll no
struct student_info search_student_by_roll_no(struct student_info *details, int n, int roll_no) 
{
    struct student_info not_found;
    not_found.student_name[0] = '\0';
    for (int i = 0; i < n; i++) 
    {
        if (details[i].roll_no == roll_no)//checking whether the rollnumber is find or not in the user  given input details
        {
            return details[i];//if rollnumber is find
        }
    }
    return not_found;//if rollnumber is not find
}
// Function to print students with CGPA > x
void print_students_with_cgpa_greater_than_x(struct student_info *details, int n, float x) {
    printf("Students with CGPA > %f:\n", x);
    for (int i = 0; i < n; i++) {
        if (details[i].student_cgpa > x) //checking the cgpa is found or not in the given  user input details
        {
            printf("Name: %s, Roll No: %d, CGPA: %f\n", details[i].student_name, details[i].roll_no, details[i].student_cgpa);
        }
    }
}
int main() {
    struct student_info students[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);//user input how many students want
    read_student_details(students, n);
    char name[20];
    printf("Enter name to search: ");
    scanf("%s", name);//user input for student name
    struct student_info student = search_student_by_name(students, n, name);//function calling for searching student name
    if (student.student_name[0] != '\0') //checking the student  name is upto  null character
    {
    printf("Student found: Name: %s, Roll No: %d, CGPA: %f\n", student.student_name, student.roll_no, student.student_cgpa);
    } else 
    {
        printf("Student not found\n");
    }
    int roll_no;
    printf("Enter roll no to search: ");
    scanf("%d", &roll_no);//user input for rollnumber
    student = search_student_by_roll_no(students, n, roll_no);//function calling for searching for rollnumber in the given input
    if (student.student_name[0] != '\0') {
        printf("Student found: Name: %s, Roll No: %d, CGPA: %f\n", student.student_name, student.roll_no, student.student_cgpa);
    } else
    {
        printf("Student not found\n");
    }
    float x;
    printf("Enter CGPA to filter students: ");
    scanf("%f", &x);//user input for cgpa
    print_students_with_cgpa_greater_than_x(students, n, x);//function calling for the cgpa greater then to x
    return 0;
}