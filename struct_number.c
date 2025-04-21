#include<stdio.h>
struct number
{
    char ch;
    int i;
    
}x;
int main()
{
    struct number x;
    x.i=100;
    x.ch='A';
    printf("ch=%c,i=%d",x.ch,x.i);
    
}