#include <stdio.h>
#include <stdlib.h>

// #####################
// Solution is INCORRECT
// #####################

void func(int n);

int main(int argc, char *argv[]) {
	// n lights
	// n people

	// lights = l1 , l2 , l3 ... ln
	// people = p1 , p2 , p3 ... pn

	// Each line = +ve int n, representing lights/people

	// P1 turns on all lights
	// P2 turns on every 2nd
	// P3 turns on every 3rd
	// Pn turns on every nth
	int n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &n);
		func(n);
	}
	return EXIT_SUCCESS;
}

void func(int n) {
	// Parse in n
	// Counter for sqrt of square numb
	int counter = 0;
	//int sqCounter = 0;
	for (int i = 0; i*i < n ; i++) {
    	counter = i;
	}
	printf("%d\n", n - counter);
}



