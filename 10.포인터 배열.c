#include <stdio.h>
//배열 값을 인자로 받아서 내림차순으로 정렬하는 함수
void swap(int *a,int *b);
int main()
{
	int a[] = { 10,20,60,30};                 //배열선언
	int *p = a;                               
	
	for (int i = 0; i<4; ++i)
	{
		printf(" %d", *(p + i));
	}
	printf(" 을내림차순으로 정렬 \n\n");

	for (int i = 0; i < 3; ++i)               //내림차순 으로 정렬
    {
		for (int i = 0; i < 4; ++i)
		{
			if (*(p + i) < *(p + i + 1))      //값비교
			{
				swap(p + i, p + i + 1);       
			}
		}
    }

	printf("결과\n");
	for (int i = 0; i<4; ++i)
	{
		printf("%d\t", *(p + i));
	}
	printf("\n");

	return 0;
}
void swap(int *a,int*b)
{
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
//배열명은 해당 데이터가 있는 시작 주소를 의미하는 포인터 상수다.
//배열명은 첫번 재 원소의 주소를 나타내므로 1차원 포인터의 초깃값으로 1차원 배열명을 쓸수있다
//포인터는 변수이므로 포인터에 증감 연산자등을 이용하여 값을 바꿔 줄수있다 int *p = a 이면 p=p+1같은 연산이 가능하다
