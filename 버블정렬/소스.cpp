#include <stdio.h>

// 버블 정렬 : 옆에 있는 값과 비교하여 더 작은 값을 반복적으로 앞으로 보내는 정렬 방법
int main(int argc, char** argv)
{
	int temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++) // 원소가 하나씩 줄어들며 반복
		{
			if (array[j] > array[j + 1]) // 왼쪽 숫자가 오른쪽 숫자보다 클시 스왑
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}