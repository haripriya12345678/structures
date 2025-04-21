#include<stdio.h>
/*here using structure and union for what is the difference between
 both the main difference is memoryspace in structure it allocated 
 different memory location but in uion ti allocate same memory locatio*/
struct s_tag{
    char c;
    int i;
    float f;
};
union u_tag
{
    char c;
    int i;
    float f;

};
int main(void)
{
    union u_tag u_var;
    struct s_tag s_var;
    printf("size of s_var =%u\n",sizeof(s_var));//size for structure
    printf("address of s_var: %p\t",&s_var);
    printf("address of member : %p %p %p\n",&s_var.c,&s_var.i,&s_var.f);//different memory location
    printf("size of u_var = %u\n",sizeof(u_var));//size for union
    printf("address of u_var: %p\t",&s_var);
    printf("address of member : %p %p %p\n",&u_var.c,&u_var.i,&u_var.f);//same memory space in union
    return 0;
}