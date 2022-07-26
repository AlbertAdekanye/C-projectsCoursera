#include<stdio.h>
#include<math.h>

int main()
{
	double sinValue, x;
	printf("Please Enter the Value to calculate Sine: ");
	scanf("%lf", &x);
	
	sinValue = sin(x);
	
	printf("\nThe Sine value of %lf", x, sinValue);
	
	return 0;
}
