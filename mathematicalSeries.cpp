#include <conio.h>
#include <stdio.h>
//Various mathematical series implemented.
//Fibonacci Series is when each number is the sum of the two preceding numbers.
//Power of 2 series is a series where 2 is raised to a undefined value n.
//Sum up to N numbers, adding N to sum of previous values.
//N factorial series, multiply N to the current N.
int main() {
	int userChoice, userLimit;
	printf("Enter the Series you want to display :\n");
	printf("1. Fibonacci Series\n");
	printf("2. Power of 2 Series\n");
	printf("3. Sum up to N Numbers\n");
	printf("4. N factorial series\n");
	scanf("%d", &userChoice);
	printf("Please set the limit of how many terms to calculate to?: ");
	scanf("%d", &userLimit);
//Fibonacci Series
	if (userChoice == 1) {
		int a = 0, b = 1;
		printf("0, 1");
		for (int i = 3; i <= userLimit; i++) {
			if (a < b)
				printf(", %d", a = a + b);
			else
				printf(", %d", b = a + b);
		}
	}
//Power of 2 series
	else if (userChoice == 2) {
		int x = 2;
		printf(" 2");
		for (int i = 2; i <= userLimit; i++)
			printf(", %d", x *= 2);
	}
//Sum up to N numbers
	else if (userChoice == 3) {
		int sum = 1;
		printf(" 1");
		for (int i = 2; i <= userLimit; i++)
			printf(", %d", sum += i);
	}
//N factorial Series
	else if (userChoice == 4) {
		long int temp = 1;
		printf(" 1");
		for (int i = 2; i <= userLimit; i++)
			printf(", %d", temp *= i);
	}
	else {
		printf("\n ~ INVALID CHOICE ~");
	}
}