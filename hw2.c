/*
 * homework stuff
 */
#include <stdio.h>
#include <stdbool.h>

int absol(int x);
int absol(int x) {
	if (x < 0) {
		return -x;
	} else {
		return x;
	}
}

int main(void) {
	printf("I Swear!\nPart A: \n");
	printf("Files are attached, it did work for me. \nPart B: \n");
	int a, b, c, d;
	a = b = c = d = 0;
	printf("a = %d \nb = %d \nc = %d \nd = %d \n", a, b, c, d);
	printf("Part C: \n|-13| = %d \n", absol(-13));
	printf("Part D: \nYes, I have seen recursion before\n");
	printf("Part E: \nBecause each function operates on a different data type");
	return 0;
}
