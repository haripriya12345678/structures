#include<stdio.h>
//void swap(struct pointer *a,struct pointer *b,struct  pointer *temp);
struct pointer
{
    int x,y;
};
void swap(struct pointer *a,struct pointer *b,struct  pointer *temp)
{
    temp->x=a->x;
    a->x=b->y;
    b->y=temp->x;
}
int main()
{
    struct pointer swap_value1,swap_value2,temp_value;
    printf("Enter the swap values:");
    scanf("%d\n %d\n ",&swap_value1.x,&swap_value2.y);
    printf(" before swap:first value %d\n:",swap_value1.x);
    printf("before swap:second value %d\n:",swap_value2.y);
    swap(&swap_value1,&swap_value2,&temp_value);
    printf("after swap %d %d\n:",swap_value1.x,swap_value2.y);
    return 0;
}
