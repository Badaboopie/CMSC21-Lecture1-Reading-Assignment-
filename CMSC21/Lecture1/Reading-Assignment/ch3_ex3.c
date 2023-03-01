#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
//This statement declares the variables in which the inputs will be stored into.

	printf("Enter first fraction:");
	scanf("%d/%d", &num1, &denom1);

//After printf has told the use to enter the first fraction, scanf function will the utilize the placeholders to store data in variables num1 and denom1 for the first fraction.

	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

//This stament is for the second fraction and will do the same thing the first printf and scanf did except they will store the values in num2 and denom2. 

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

//This is where the computation will take place in which the code will find the common denominators through multiplication and then convert the numerators so that the addition of the encoded fractions be made possible. The solved value for the numerator will be stored at result_num while the new denominator will be stored at result_denom. 

	printf("the sum is %d/%d\n", result_num, result_denom);

//Once the values have been stored to their respective variables, printf will print the statement alongside the values of the arguments, thus, printing the result for the sum of the two fractions. 

	return 0;
}