/* -- Exercise 1.13 --
 * Write a program to print a histogram of lengths of words in its input.
 * It is easy to draw the histograms with bars horizontal;
 * A vertical orientation is more challanging.
 * */

#include <stdio.h>

#define MAX_LENGTH 10

int main() {
	
	int wordLengths[MAX_LENGTH] = { 0 };
	int c;
	
	int currentLength = 0;

	while ((c=getchar()) != EOF) {

		if (c == '\n'|| c == ' ' || c == '\t') {	// '||' means 'or'
			if (currentLength > 0 && currentLength < MAX_LENGTH) {	// '&&' means 'or'
				++wordLengths[currentLength];
			}
			currentLength = 0;
		}

		else {
			++currentLength;
		}
	}

	for (int i = 1; i < MAX_LENGTH; ++i) {
		printf("==> Number of Words with length %d :: ", i);
		for (int j = 0; j < wordLengths[i]; ++j) {
			printf("*");
		}
		printf("\n");
	}		

	return 0;
} 
