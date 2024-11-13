#include <stdio.h>
#include <stdlib.h>

// Program converts total time received in seconds to h:m:s format:
// Pseudocode:
// START
// DECLARE totalTimeInSecs
// READ totalTimeInSecs
// INIT & COMPUTE timeInHours to totalTimeInSecs/3600
// INIT & COMPUTE remainingTime to (totalTimeInSecs-(3600*timeInHours))
// INIT & COMPUTE timeInMins to remainingTime/60
// INIT & COMPUTE timeInSecs to remainingTime%60
// PRINT time in the format HR:MINS:SECS
// END

int main () {
	int totalTimeInSecs;
	printf("Enter the time in seconds: \n");
	scanf("%d", &totalTimeInSecs);
	
	int timeInHours = totalTimeInSecs/3600;
	int remainingTime = (totalTimeInSecs-(3600*timeInHours));
	int timeInMins = remainingTime/60;
	int timeInSecs = remainingTime%60;

	printf("The time breakdown is %d:%d:%d", timeInHours, timeInMins, timeInSecs);

	return 0;
}
