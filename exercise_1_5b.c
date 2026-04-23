/*
 * -- Exercise 1.5.B -- 
 *  Modify the temperature conversion program to print the table in reverse order 
 *  that is from 300 degrees to 0.
 *  */

#include <stdio.h>

int main() {

	// Conversion for Celsius to Fahrenheit 

	// variable declaration 
	float fahr, celsius;
	int upper_limit, lower_limit, step_size;

	// variable initialization 
	lower_limit = 0;	// lower limit 
	upper_limit = 300;	// upper limit 
	step_size = 20;		// step size 

	// print table heading 
	printf("Celsius -> Fahrenheit\n");

	// set fahr equals to upper_limit 
	celsius = upper_limit;

	// looping to convert and print results to the terminal 
	while (celsius >= lower_limit) {
		fahr = (9.0/5.0)*celsius + 32.0;
		printf("%.1f°C -> %.1f°F\n", celsius, fahr);
		celsius = celsius - step_size;
	}

	return 0;
}
