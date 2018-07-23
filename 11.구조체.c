#include <stdio.h>
// student 구조체를 선언하고 값을입력한후 출력

struct student {                                          //student 구조체 선언 
	int number;           
	char name[20];
	char address[20];
};

int main()
{
	struct student st1 = { 23,"이재정","경기도 양주시"}; // 구조체st1을 선언동시에 초기화
	struct student st2;                                // 구조체 st2을 선언


	printf("번호를 입력하세요\n");                      // scanf를 사용하여 값을 입력받음
	scanf("%d", &st2.number);
	printf("이름을 입력하세요\n");
	scanf("%s", &st2.name);
	printf("나이주소를 입력하세요\n");
	scanf("%s", &st2.address);

	printf("출력\n");                                // 출력


	printf("%d %s %s \n", st1.number, st1.name, st1.address);
	printf("%d  ", st2.number);
	printf("%s  ", st2.name);
	printf("%s \n ", st2.address);


}
//구조체는 사용자가 피요한 다양한 자료형을 한번에 묶을 수있는 사용자 정의 형이다
//struct (구조체 이름){     };으로 정의 한다
//typedef를 이용하여 이름이 긴 자료형을 재정의하며 자료형 변수를 좀 더 편리하게 선언할수 있다 
//함수의 인자를 전달하 때 값을 전달하면 메모리의 이동이 크기 때문에 포인터를 이용하여 주소를 전달하는 것이 효과적이다
//열거형은 순서가 있고 새로운 값 을 가질수 있는 사용자 정의 자료형이다 