#include <stdio.h>

int main()
{//입력받은 수만큼 "*" 출력
	int a=0;
	printf("*을 얼마나 출력할지 입력하시오\n");
	scanf("%d",&a);                            // (*)를 얼마나 출력할지 입력받습니다
	for (int i = 1; i <= a; ++i)               // 1(초기화)부터 입력받은수 a(조건식)까지 전위증가(증감식)를 합니다
	{
		printf("*");                           // 조건식이 참이면 *를 출력합니다
	}
	printf("\n");
	return 0;
}
//for 문은 명령문을 일정한 횟수만큼 반복시킵니다 조건식이 찹인 동안에만 명령문을 수행합니다
//for (int a=1(초기화); a<5(조건식); a++(증감식))
//중괄호{}를 이용하여 for 문중첩을 할수있습니다