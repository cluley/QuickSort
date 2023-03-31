#include <iostream>
#include "qSort.h"
using namespace std;

int main(int argc, char** argv) {
	int arr1[10]{ 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };

	cout << "Исходный массив: ";
	for (int i = 0; i < 10; i++) {
		cout << arr1[i] << ' ';
	}

	quick_sort(arr1, 10);
	cout << "\nОтсортированный массив: ";
	for (int i = 0; i < 10; i++) {
		cout << arr1[i] << ' ';
	}
	cout << endl;

	int arr2[15]{ 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };

	cout << "\nИсходный массив: ";
	for (int i = 0; i < 15; i++) {
		cout << arr2[i] << ' ';
	}

	quick_sort(arr2, 15);
	cout << "\nОтсортированный массив: ";
	for (int i = 0; i < 15; i++) {
		cout << arr2[i] << ' ';
	}
	cout << endl;

	int arr3[18]{ 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62, };

	cout << "\nИсходный массив: ";
	for (int i = 0; i < 18; i++) {
		cout << arr3[i] << ' ';
	}

	quick_sort(arr3, 18);
	cout << "\nОтсортированный массив: ";
	for (int i = 0; i < 18; i++) {
		cout << arr3[i] << ' ';
	}
	cout << endl;

	return 0;
}