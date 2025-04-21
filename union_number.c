#include<stdio.h>
union number
{
    char ch;
    int i;
    
}x;
int main()
{
    union number x;/*In union the memory location will be same
     in above union definition we declering the two different datatypes 
     int and char both types occupies the same memory space*/
    x.i=100;
    x.ch='A';
    printf("ch=%c,i=%d",x.ch,x.i);//printing the output
    /*the output is i=65,ch=A*/
    
}