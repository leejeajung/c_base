#include <stdio.h>

int main()
{
//성적 을 입력 받아 학점 출력하기, (A 80점이상) (b 70점이상) (c 60 점이상) (60 점이하 f) 
	int grade;
	printf("성적을 입력하시오 \n");
	scanf("%d", &grade);                            //점수를 입력받습니다

	if (grade >= 80)                               //80이상인지 조건 검사를 합니다 80이상이면 printf문를 출력합니다
		printf("%d는 A학점입니다\n", grade);
	else if (80 > grade >= 70)
		printf("%d는 B학점입니다\n", grade);       //70이상인지 조건 검사를 합니다 70이상 80미만이면 printf문를 출력합니다
	else if (grade < 70 && grade >= 60)
		printf("%d는 C학점입니다\n", grade);       //60이상인지 조건 검사를 합니다 60이상 70미만이면 printf문를 출력합니다
	else
		printf("%d는 F학점입니다\n", grade);       //위의 조건에 맞지않으면 printf문을 출력합니다
	
	//printf("%d", grade);
	return 0;
}
//if 문으 조건에 따라 명령수행을 달리하고자 할때 사용하느 명령문입니다
//대등한 조건 이 하나가 아니라 여래 개 있는 경운 if ~ else if 문을 사용합니다
//if 문은 처음에한번 만 조건검사를 하지만 else if 문은 처음if문 이외의 조건을 설정할수있다
//다중 if 문은 중괄호{} 안에 넣어주면 됩니다