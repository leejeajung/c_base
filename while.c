#include<stdio.h>

int main(void)
{/* while ���� �̿��Ͽ� ���α׷� ����ڷκ��� ������ �ϳ� �Է� �޾Ƽ� 
�� ����ŭ "hello world!"�� ����ϴ� ���α׷�*/

	int number;                                            // ���� number�� �����մϴ�
	printf("Hello world!�� ����ϰ���� ���� �Է��Ͻÿ� \n");
	scanf("%d", &number);                                  //Hello world�� ����ϰ� ���� ���ڸ� �Է¹޽��ϴ�
	while (number > 0)                                     // ���� �˻縦 �մϴ� �Է¹��� ���ڰ� 0���� ũ�� while ���� �����մϴ�
	{
		printf("Hello world\n");                           //Hello world �� ����մϴ�
		--number;                                          //number�� ���� ������ �ְ� 9��°�ٷ� ���ư��ϴ�
	}
	return 0;
}

// while ���� �ݺ��� �����Ű�� ��ɾ��Դϴ� 
// while(1)�� �ϸ� ���ѷ����� �����մϴ�  ���� ������ Ű�� ctrl + c �Դϴ�
// do while ��  while �� �ٸ����� do while �� �ݺ������� �ּ� �ѹ� �������ѵ� ���ǰ˻縦�մϴ�