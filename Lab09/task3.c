#include <stdio.h>

int addInt(int a , int b){return a+b;}
float addFloat(float a , float b){return a+b;}
float areaCircle(float r){return 3.14 * r *r;}
float areaRectangle (float l , float w){return l*w;}
float factorial( int n ){
	if(n <=1) {return 1;}
	return n* factorial(n-1);
}

int main(){

	printf("Sum of 2 int a+b = %d \n", addInt(4,7));
	printf("Sum of 2 float a+b = %.2f\n", addFloat(3.1,5));
	printf("area of the circle 3.14 * 5^2 = %.2f \n",areaCircle(5));
	printf("area of rectangle length * widght = %.2f\n",areaRectangle(4.5,7));
	printf("Factorial of 9 = %.2f\n", factorial(9));
	return 0;
}
