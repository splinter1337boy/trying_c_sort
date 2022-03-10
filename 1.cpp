// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "conio.h"


void insertion_sort(int* arr, int N) {
	int x;
	for(int i = 1; i < N; i++) {
		x = arr[i];
		int j = i - 1;
		while(x < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = x;
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

