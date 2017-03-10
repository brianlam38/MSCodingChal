#include <stdio.h>
#include <stdlib.h>

#define MAX 240
#define WALKING 10

// Time Complexity = O(t*n) --> Slightly more efficient by breaking early once currSum > MAX is found.
// Space = 2n
int main(int argc, char *argv[]) {
	// input weeks
	int t;
	scanf("%d", &t);
	for (int k = 0; k < t; k++) {
		// input numfriends attending
		int n;
		scanf("%d", &n);
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
			// Keep tracking of slowest friend
			if (currSum > maxSum) {
				maxSum = currSum;
			}
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