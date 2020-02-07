/*
 * Homework 3 Part 2
 */

#include <stdio.h>
#include <stdbool.h>

int euclid(int a, int b);
int main(void) {
	int a,b;
	a = b = 0;
	do {
		printf("Enter Int A: ");
		scanf("%d", &a);
		if (a <= 0) {
			printf("ERROR :: 404 \nEnter an Integer Greater than 0 \n");
		}
	} while (a <= 0);

	do {
                printf("Enter Int B: ");
                scanf("%d", &b);
                if (b <= 0) {
                	printf("ERROR :: 404 \nEnter an Integer Greater than 0 \n");
                }
        } while (b <= 0);
	
	printf("GCD = %d \n", euclid(a,b));
	return 0;
}

int euclid(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return euclid(b, a % b);
	}
}
