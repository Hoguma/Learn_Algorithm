#include <stdio.h>

//삽입정렬 : 각 숫자를 적절한 위치에 삽입하는 정렬 방법
int main(int argc, char** argv)
{
	int j, temp;
	int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
	for (int i = 0; i < 9; i++)
	{
		j = i;
		while (array[j] > array[j + 1]) // j가 다음 숫자보다 클때 j를 빼며 반복
		{
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			//스왑
			j--;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]); //출력
	}

	return 0;
}