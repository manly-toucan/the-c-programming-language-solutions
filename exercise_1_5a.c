/*
 * -- Exercise 1.5.A -- 
 *  Modify the temperature conversion program to print the table in reverse order 
 *  that is from 300 degrees to 0.
 *  */

#include <stdio.h>

int main() {

	// Conversion for Fahrenheit to Celsius 

	// variable declaration 
	float celsius, fahr;
	int upper_limit, lower_limit, step_size;

	// variable initialization 
	lower_limit = 0;	// lower limit 
	upper_limit = 300;	// upper limit 
	step_size = 20;		// step size 

	// print table heading 
	printf("Fahrenheit -> Celsius\n");

	// set fahr equals to upper_limit 
	fahr = upper_limit;

	// looping to convert and print results to the terminal 
	while (fahr >= lower_limit) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%.1f°F -> %.1f°C\n", fahr, celsius);
		fahr = fahr - step_size;
	}

	return 0;
}
