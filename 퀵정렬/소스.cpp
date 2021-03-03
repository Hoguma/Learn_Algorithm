#include <stdio.h>
#include <iostream>


int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
int number = 10;
void QuickSort(int* data, int start, int end)
{
	if (start >= end) { return; }
	int pivot = start; // �ǹ� ù��° ����
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) // ������ ������ �ݺ�
	{
		while (data[i] <= data[pivot] && i <= end)//�ǹ������� ū ���� ����������
		{
			i++;
		}
		while (data[j] >= data[pivot] && j > start) //�ǹ������� ���� ���� ����������
		{
			j--;
		}
		if (i > j) // ���� ������ ���¸� �ǹ� ���� ��ü
		{
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else // �������� �ʾҴٸ� ū���� �������� ��ü
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
		printf("%d ", array[i]); //���
	}
	return 0;
}