#include<stdio.h>
#include<math.h>//library function for performing common mathematical operations
struct co_system//structure definition
{
    int x1,x2,y1,y2;
    int p1,p2,p3,p4;
    double a,b,c;

};
double distance_points( struct co_system *math)//function definition for  distance of two points
{
    double distance;//decleration
    int x=(math->x2-math->x1);//subtract the two values and intilize
    int y=(math->y2-math->y1);
    distance = sqrt((x*x)+(y*y));//using  square root to find the distance between the two points
    //printf(" distance between two given points:%f\n",distance);
    return distance;
}
double  line_segment(struct co_system *math)//function definition for midddle point of line segment
{
    double x_avg,y_avg;
    x_avg=(math->p1+math->p2)/2;//adding the two values and divided using 2 and find the average intilize 
    y_avg=(math->p3+math->p4)/2;
    printf("middle point of line segment joining of two given points:%f\t %f\n",x_avg,y_avg);//printing the values
    //return (x_avg,y_avg);
}
double area_triangle(struct co_system *math)//function decfintion for area of triangle for three values
{
    double area=math->a*(math->b-math->c)+math->b*(math->c-math->a)+math->c*(math->a-math->b);
     area=fabs(area/2);//returns the floating value of a floating point number
     printf("Area of triangle: %lf\n",area);//printing the area
     return area;
}
int main()
{
    struct co_system math ;//structure variable
    printf("Enter the two distance points:");//user input for two points for distance
    scanf("%d %d %d %d",&math.x1,&math.x2,&math.y1,&math.y2) ;
    printf("Enter the two given points:");//user input for two points for middle point
    scanf("%d %d %d %d",&math.p1,&math.p2,&math.p3,&math.p4) ;
    printf("Enter the three  given points:");//user input for three values for area of triangle
    scanf("%lf %lf %lf",&math.a,&math.b,&math.c) ;
   double distance= distance_points(&math);//function calling for distance
   printf(" distance between two points:%lf\n",distance);//printing distance
    line_segment(&math);//function calling for middlepoint
    area_triangle(&math);//function calling for area of triangle
    return 0;

}