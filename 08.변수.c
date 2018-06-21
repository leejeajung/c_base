#include <stdio.h>
//입력 받은 값의 팩토리얼을 구하고 함수를 사용한 횟수를 출력하는 프로그램
int number = 0;                               //지역변수 number 선언 factorial 함수를 사용한 횟수를 입력함
int factorial(int a);                         //factorial함수 선언
int main()
{
	int fac_num,factorialsum;
	printf("값을 입력하시오\n");             
	scanf("%d",&fac_num);                     //값을 입력받음
	factorialsum=factorial(fac_num);          //함수로 값을 넘겨줌
	printf("횟수 출력 %d", number);
	printf("출력%d\n", factorialsum);
	


	return 0;
}
int factorial(int a)
{
	number += 1;                             //지역변수로 함수가 실행 될때마다 +1을 해줌
if (a <= 1)
	return 1;
	else
		return (a * factorial(a - 1));       //재귀함수로 팩토리얼실행
}


//지역변수는 함수의 중괄호{}안에있는 변수이다 중괄호를 벗어나면 효력이없다 같은이름의 변수라도 함수가 다르면 그 기능은 별개이다
//전역변수는 모든 함수블록에서 사용할수있는함수이다 메모리가 시작되고 끝날때까지 효력이 전체에 걸쳐서 있다
//전역변수는 어느파일에서나 접근할 수 있으므로 주의해서 사용해야한다
//변수의 우선순위는 지역변수>전역변수 이다
//정적변수는프로그램의 실행이 끝날 때까지 메모리에 계속 보존 되는 변수이다
//자료형앞에 static 을 붙여 사용한다 함수외부에서사용하는것을 외부 전적변수 내부에서 사용하는 것을 내부 전적변수라고 하고