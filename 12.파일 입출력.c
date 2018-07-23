#include <stdio.h>
#include <stdlib.h>



int main()
{
	FILE* fp;           
	char ch;


	if ((fp = fopen("basic.txt", "w")) == NULL)  //파일이 없거나 용량이 없는지 검사합니다
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	printf("문자하나를 입력하세요.\n");      //문자를 입력받습니다
	ch = getchar();
	while (ch !='q')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	printf("파일 입력이 종료되었습니다\n"); 


	return 0;
}
//파일에서 데이터를 입출력 할때 사용한다 파일을열고, 처리하고 , 닫는 순서를 거친다
//파일을 열때는 fopen 함수로열고 fclose함수로 닫는다
//파일의 접을 위치를 임의로 설정하여 일을때는 파일 임의 접근 을 쓴다 fseek,fgetpos,fsetpos등이 있다
//반복적인 명령을할때는 매크로를 쓴다