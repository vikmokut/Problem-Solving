// bubble sort an array form lowest to highest
void bubbleSort(int* arr, int arrLen) {
	int maxValue;
	int count = 0;

	while (count < arrLen) {
		for (int i = 0; i < arrLen; i++) {
			if (i == (arrLen - 1))
				break;
			if (*(arr + i) > *((arr + i) + 1)) {
				maxValue = *(arr + i);
				*(arr + i) = *((arr + i) + 1);
				*((arr + i) + 1) = maxValue;
			}
		}
		count++;
	}
}
