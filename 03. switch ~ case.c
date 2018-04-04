#include <stdio.h>

int main()
{//성적을 입력 받아 학점을 출력합니다 (80점이상 A)(70점이상 B)(60점 이상 C)(나머지 F)
	int grade;
	printf("성적을 입력하세요");
	scnaf("%d", &grade);

	switch (grade / 10)              
	{
	case 8:
		printf("%d 는 A학점", grade);
	case 7:
		printf("%d 는 B학점", grade);
	case 6:
		pritnf("%d 는 C학점", grade);
	default :
		printf("%d 는 F학점", grade);

	}
	return 0;
}
//switch문은 조건식을 먼저 평가 한 뒤 그 식의 값이 csse 상수와 일치하는 쪽으로 명령문을 수행한다
//일치하는 값이 없으면 default문을 수행한다( deault문은 꼭필요하지는 않습니다)
//조건식이 아니 다른값을 입력하면 오류는 발생하지 않지만 입력 범위를 벗어난 값을 처리하지
//않기 때문에 프로그램의 흐름이 매끄럽지 않습니다 
//그렇기때문에 default 문을 입력하는 것이 바람직합니다