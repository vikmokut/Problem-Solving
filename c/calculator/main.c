#include <stdio.h>

int main() {
	int numbers[100];
	char ops[100];

	int i = 0;
	while (1){
		printf("Enter a number: ");
		scanf("%d", &numbers[i]);
		getchar();
		printf("Enter an operator: ");
		scanf("%c", &ops[i]);
		getchar();
		if (ops[i] == 61) {
			break;
		}
		i++;
	}

	for (int j = 0; ops[j] != '\0'; j++) {
		printf("%c\n", ops[j]);
	}

	return 0;
}



