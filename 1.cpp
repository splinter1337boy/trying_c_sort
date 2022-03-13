// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "conio.h"


void selection_sort(int* a, int N) {
	int k;
	int x;
	for(int i = 0; i < N; i++) {
		k = i;
		x = a[i];
		for(int j = i + 1; j < N; j++) {
			if(a[j] < x) {
				k = j;
				x = a[j];
			}
		}

		a[k] = a[i];
		a[i] = x;
	}
}


void insertion_sort(int* arr, int N) {
	int x;
	for(int i = 1; i < N; i++) {
		x = arr[i];
		int j = i - 1;
		while(j >= 0 && x < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = x;
	}

}

void bubble_sort(int* a, int N) {
	for(int i = 0; i < N - 1; i++) {
		bool changed = false;
		for(int j = 0; j < N - i - 1; j++) {
			if(a[j] > a[j + 1]) {
				int b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
				changed = true;
			}
		}
		if(!changed) {
			break;
		}
	}


}

void print(int* arr, int N) {
	for(int i = 0; i < N; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	const int N = 5;

	int arr[N] = {3, 2, 4, 1, 5};

	print(arr, N);

	insertion_sort(arr, N);

	print(arr, N);

	getch();
	return 0;
}

