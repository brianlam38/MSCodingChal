#include <stdio.h>
#include <stdlib.h>

#define MAX 240
#define WALKING 10

int main(int argc, char *argv[]) {
	// input weeks
	int t;
	scanf("%d", &t);
	// input serving (S) and eating (C) time
	for (int k = 0; k < t; k++) {
		// input people
		int n;
		scanf("%d", &n);

		//printf("week = %d\n", k);
		int maxSum = 0;
		int *serve = malloc(sizeof(int) * n);
		int *eat = malloc(sizeof(int) * n);

		for (int i = 0; i < n; i++) {
			//printf("friend = %d\n", i);
			int currSum = 0;
			scanf("%d", &serve[i]);
			currSum += serve[i];
			scanf("%d", &eat[i]);
			currSum += eat[i];
			currSum += WALKING;
			// Keep tracking of highest
			if (currSum > maxSum) {
				maxSum = currSum;
			}
			//printf("maxSum = %d\n", maxSum);
		}
		// Not enough time to bowl at all
		if (maxSum > MAX) {
			printf("0\n");
			continue;
		}
		printf("%d\n", MAX - maxSum);
	}

	return EXIT_SUCCESS;
}