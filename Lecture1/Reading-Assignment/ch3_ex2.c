#include <stdio.h>
int main(void)
{
	int i; 
// This statement declares the variable i which is associated with an integer for its data type and will be later be given the value 40.
	float x;
// This statement declares the variable x, associating it as a float and wil be later given the value 839.21
	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

// In these printf functions, printf was utilized to formtat he numbers based on various specifications. For instance, in the first printf function, the outputs resulted in numbers with spaces that make up the specified amount of characters indicated, specific amount of digits after the period, and the option to specify which side the spaces for the characters woud begin. 
// In the second printf function, various specifiers were utilized such as f, e, and g. f displays numbers in a fixed decimal format, while e displays numbers in the scientific notation, and finally g displays numbers in either exponential or fixed decimal format. 
	return 0;

}	