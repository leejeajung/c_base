#include<stdio.h>

int main(void)
{/* while 문을 이용하여 프로그램 사용자로부터 정수를 하나 입력 받아서 
그 수만큼 "hello world!"를 출력하는 프로그램*/

	int number;                                            // 변수 number을 선언합니다
	printf("Hello world!를 출력하고싶은 수를 입력하시오 \n");
	scanf("%d", &number);                                  //Hello world를 출력하고 싶은 순자를 입력받습니다
	while (number > 0)                                     // 조건 검사를 합니다 입력받은 숫자가 0보다 크면 while 문을 실행합니다
	{
		printf("Hello world\n");                           //Hello world 를 출력합니다
		--number;                                          //number를 전위 감소해 주고 9번째줄로 돌아갑니다
	}
	return 0;
}

// while 문은 반복을 실행시키는 명령어입니다 
// while(1)을 하면 무한루프를 실행합니다  빠져 나오는 키는 ctrl + c 입니다
// do while 과  while 의 다른점은 do while 은 반복영역을 최소 한번 은실행한뒤 조건검사를합니다