#include <stdio.h>

// ���� ���� : ���� �ִ� ���� ���Ͽ� �� ���� ���� �ݺ������� ������ ������ ���� ���
int main(int argc, char** argv)
{
	int temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++) // ���Ұ� �ϳ��� �پ��� �ݺ�
		{
			if (array[j] > array[j + 1]) // ���� ���ڰ� ������ ���ں��� Ŭ�� ����
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