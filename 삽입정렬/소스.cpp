#include <stdio.h>

//�������� : �� ���ڸ� ������ ��ġ�� �����ϴ� ���� ���
int main(int argc, char** argv)
{
	int j, temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
	for (int i = 0; i < 9; i++)
	{
		j = i;
		while (array[j] > array[j + 1]) // j�� ���� ���ں��� Ŭ�� j�� ���� �ݺ�
		{
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			//����
			j--;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]); //���
	}

	return 0;
}