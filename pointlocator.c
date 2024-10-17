#include <stdio.h>
#include <math.h>

int main()
{
    int c1,c2,co1,co2;
    float radius,sumofsquare,distcentre;

    printf("enter the coordinates of circle centre");
    scanf("%d \t %d",&c1,&c2);

    radius=5;

    printf("enter the coordinates of desired point");
    scanf("%d\t%d",&co1,&co2);

    sumofsquare=(co1-c1)*(co1-c1) + (co2-c2)*(co2-c2);

    distcentre=pow(sumofsquare,0.5);

    if (distcentre==radius)
        printf("the point lies on circle");

    else if(distcentre<radius)
        printf("the point lies inside the circle");   
    else
        printf("the point lies outside the circle");


return 0;

}