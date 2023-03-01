#include <stdio.h>

int main(void){
	
	int i, j;
	float x, y;

	// These statements declared the variables i and j as integers and the variables x and y as floats so that they may be given individual values and be later on utilized in the print function.

	i = 10;
	j = 20;
	x = 43.2982f;
	y = 5527.0f; 
	
	printf(" i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);


	// In the printf function, the function takes four arguments namely, i,j,x, and y. %d and %f can also be utilized as placeholders for the corresponding values of the four arguments while specifying printf to convert those values to either an integer or a float. 
}