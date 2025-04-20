#include<stdio.h>
#include<string.h>
typedef struct
{
    int multiply;
}tables;
tables  mul(tables n)
{
    tables mul_table;
    for(int i=1;i<=10;i++)
    {
        printf("%d *%d=%d\n",n.multiply,i,n.multiply*i);
      mul_table.multiply=n.multiply*10;
    }
    return mul_table;
    
}
int main()
{
     tables x;
      tables y;
    printf("Enter the value:");
    scanf("%d",&x);
    y= mul(x);
   // printf("%d\n, %d\n",x,y.multiply);
    return 0;
}