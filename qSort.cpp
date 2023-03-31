#include "qSort.h"

void quick_sort(int* arr, int size) {
	int left = 0;
	int right = size - 1;
	int pivot = size / 2;

	do {
		while (arr[left] < arr[pivot]) left++;
		while (arr[right] > arr[pivot]) right--;

		if (left <= right) {
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;

			left++;
			right--;
		}
	} while (left <= right);

	if (left < size) {
		quick_sort(&arr[left], size - left);
	}

	if (right > 0) {
		quick_sort(arr, right + 1);
	}
}