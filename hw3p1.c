/*
 * Homework 3 Question 1
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int a, b, c;
	a = b = c = 0;
	bool ba, bb, bc;
	ba = bb = bc = false;

	printf("Enter Int A: ");
	scanf("%d", &a);
	printf("Enter Int B: ");
        scanf("%d", &b);
	printf("Enter Int C: ");
        scanf("%d", &c);
	do {
		// A Print
		if ((a <= b || bb) && (a <= c || bc) && !ba) {
			printf("%d \n", a);
			ba = true;
		}
		// B Print
		if ((b <= a || ba) && (b <= c || bc) && !bb) {
			printf("%d \n", b);
			bb = true;
		}
		// C Print
		if ((c <= a || ba) && (c <= b || bb) && !bc) {
			printf("%d \n", c);
			bc = true;
		}
	} while (!ba || !bb || !bc);
	return 0;
}
