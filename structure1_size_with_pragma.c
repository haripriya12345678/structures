#include<stdio.h>
#pragma pack(1)//it is used for cannot increase the alignment of a member but rather can decrease the alignment
struct all_tag
{
    long double a;
    double b;
    float c;
    long int d;
    int e;
    char f;
    short int g;
}ALL_size;
struct structa
{
    long double a;
    double b;
    float c;
}struct_a;
struct structb
{
    long int d;
    int e;
    char f;
}struct_b;
struct structc
{
    char f;
    int e;
    float c;

}struct_c;
struct structd
{
    float c;
    short int g;
    long double a;
}struct_d;
struct structe
{
    char f;
    double d;
    int s;
}struct_e;
int main()
{
    printf("size of all_tag: %d\n",sizeof(ALL_size));//sizes for  all datatypes
    printf("size of structa: %d\n",sizeof(struct_a));
    printf("size of structb: %d\n",sizeof(struct_b));
    printf("size of structc: %d\n",sizeof(struct_c));
    printf("size of structd: %d\n",sizeof(struct_d));
   printf("size of structe: %d\n",sizeof(struct_e));
    //("size of all_tag: %d\n",sizeof(ALL_size));
    return 0;


}