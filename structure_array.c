#include<stdio.h>
#include<string.h>
struct  array
{
    int arr[10];

};
int main()
{
    int i;
    int sum=0;
    struct array  a;
    printf("Enter the array value:");
    for(i=0;i<10;i++)
    {
           scanf("%d",&a.arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum+=a.arr[i];
    }
        printf("%d",sum);

    return 0;
}