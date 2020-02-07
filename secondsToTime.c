/*
 * Seconds to Readable Time Converter
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int in;
	printf("I Swear! \n");
	printf("Welcome to the Seconds to readable Time Converter! \n");
	printf("Please Enter Seconds :: ");
	scanf("%d", &in);
	int seconds = in % 60;
	in = (in-(in%60))/60;
	int minutes = in%60;
	in = (in-(in%60))/60;
	int hours = in % 24;
	in = (in-(in%24))/24;
	int days = in % 365;
	int years = (in-(in%365))/365;
	printf("That Converts to: %d years, %d days, %d hours, %d minutes, %d seconds! \n", years, days, minutes, hours, seconds);
	printf("Have a good day! \n");
	return in;
}

