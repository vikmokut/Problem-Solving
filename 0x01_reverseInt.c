#include <stdio.h>
#include <string.h>
void reverseInt(int);

int main() {
	reverseInt(123456789);
}

void reverseInt(int number) {
	// convert integer to string
	char numberStr[20];
	sprintf(numberStr, "%d", number);
	
	int numberStrLen = strlen(numberStr);
	
	// print the reversed string
	while (numberStrLen != 0) {
		numberStrLen--;
		printf("%c", numberStr[numberStrLen]);
	}
	printf("\n");
}
