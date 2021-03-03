#include <stdio.h>
#include <iostream>


int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
int number = 10;
void QuickSort(int* data, int start, int end)
{
	if (start >= end) { return; }
	int pivot = start; // 피벗 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) // 엇갈릴 때까지 반복
	{
		while (data[i] <= data[pivot] && i <= end)//피벗값보다 큰 값을 만날때까지
		{
			i++;
		}
		while (data[j] >= data[pivot] && j > start) //피벗값보다 작은 값을 만날때까지
		{
			j--;
		}
		if (i > j) // 현재 엇갈린 상태면 피벗 값과 교체
		{
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else // 엇갈리지 않았다면 큰값과 작은값을 교체
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	QuickSort(data, start, j - 1);
	QuickSort(data, j + 1, end);
}
int main(int argc, char** argv)
{
	QuickSort(array, 0, number - 1);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]); //출력
	}
	return 0;
}