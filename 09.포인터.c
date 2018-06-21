#include <stdio.h>
//포인터를 이용하여 두수 바꾸는 프로그램
void swap(int *a,int *b);                         //두수를 바꿔주는 swap함수 선언
int main()
{
	int x = 10 ,y = 5;                            //값입력
	printf("x = %d\t y = %d\n", x, y);
	printf("두수를 바꿉니다\n\n");
	swap(&x,&y);                                  //&를 이용하여 x 와 y 의 주소값을 swap함수에 넘겨줌
	printf("결과 \n x = %d\t y = %d\n", x, y);    //결과 출력


	return 0;
}
void swap(int *a, int *b)                         // *를 이용하여 a에 x 의 주소값 b에 y의 주소값에 저장된 값을 읽음
{
	int c=0;                                     // swap 실행
	c = *a;
	*a = *b;
	*b = c;
	
}
//주소연산자&는 일반 변수명에 사용하고 해당 변수의 메모리주소를 가르킨다
//간접연산자 *는 포인터 변수명에 사용하고 주소가 저장되어 있는 메모리 위치를 가르킨다
//*터가 붙으면 자료형에 상관없이 크기는 4바이트가 됀다
//(*)가 하나면 1차원 포인터