#include<stdio.h>
//PI=3.14159 

int main()
{
    float area = 0.0, radius= 0.0, PI=3.14159;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("radius of %lf meters; areae is %lf sq. meters\n", radius, area);

    return 0;
}
