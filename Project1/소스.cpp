#include <stdio.h>

//�������� : ���� ���� ���� ������ ������ ���Ĺ��
int main(int argc, char** argv)
{
	int i, j, min, index, temp;
	//min : �ּҰ��� ��Ƶ� ����. index : �ּҰ��� �ּҸ� ��Ƶ� ����. temp : �ű涧 ��� �� ���
	int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
	for (i = 0; i < 10; i++)
	{
		min = 100; //������ �迭�� ���� ū ������ ū ��
		for (j = i; j < 10; j++)
		{
			if (min > array[j]) //���� ���� ���� ���� ��
			{
				min = array[j]; //�� �������� �ٲپ���
				index = j; //�ּҸ� ����
			}
		}
		temp = array[i]; //�� �տ� ���� -> temp
		array[i] = array[index]; //���� ���� ���� �Ǿ�
		array[index] = temp; //���� ���� ���� �ִ� �� <- temp
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]); //���
	}
	return 0;
}