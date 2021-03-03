#include <stdio.h>

//선택정렬 : 가장 작은 수를 앞으로 보내는 정렬방법
int main(int argc, char** argv)
{
	int i, j, min, index, temp;
	//min : 최소값을 담아둘 변수. index : 최소값의 주소를 담아둘 변수. temp : 옮길때 잠깐 둘 장소
	int array[10] = { 1, 10, 5, 8, 7, 6, 3, 2, 9, 4 };
	for (i = 0; i < 10; i++)
	{
		min = 100; //정렬할 배열중 가장 큰 수보다 큰 수
		for (j = i; j < 10; j++)
		{
			if (min > array[j]) //현재 가장 작은 수와 비교
			{
				min = array[j]; //더 작은수로 바꾸어줌
				index = j; //주소를 저장
			}
		}
		temp = array[i]; //맨 앞에 원소 -> temp
		array[i] = array[index]; //가장 작은 수를 맨앞
		array[index] = temp; //가장 작은 수가 있던 곳 <- temp
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]); //출력
	}
	return 0;
}