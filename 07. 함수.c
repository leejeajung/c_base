#include <stdio.h>
//함수를 사용하여 10보다 큰값만 더하는 기능을 실행

int sum(int a[], int b);           //함수정의
int main()
{
	int a[] = { 20,10,5,8,28 };   //배열선언

	int b=sum(a, 5);              //함수로값을 보내줌

	 printf("%d\n", b);           //sum 함수에서 반환한 값을 출력

	return 0;
}
int sum(int a[], int b)           //10보다 큰값만 더하고 값을 반환하는 함수
{
	int result = 0;
	for (int i = 0; i < b; i++)
	{
		if (a[i] > 10)           //10보다큰지 검사
		{
			result += a[i];
		}
	}
	return result;               //더한값을 반환
}
//함수는 특별한 기능을 수행하는 것을 말합니다 
//자료형 함수명(){기능 return } 으로 사용합니다
//사용자 자신이 원하는 기능을 직접 만들어 사용하는 함수를 사용자 정의 함수라고합니다
//재귀함수는 함수의 정의 부분에 자기 자신을 호출하는경우에 사용합니다