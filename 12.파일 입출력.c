#include <stdio.h>
#include <stdlib.h>



int main()
{
	FILE* fp;           
	char ch;


	if ((fp = fopen("basic.txt", "w")) == NULL)  //������ ���ų� �뷮�� ������ �˻��մϴ�
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	printf("�����ϳ��� �Է��ϼ���.\n");      //���ڸ� �Է¹޽��ϴ�
	ch = getchar();
	while (ch !='q')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	printf("���� �Է��� ����Ǿ����ϴ�\n"); 


	return 0;
}
//���Ͽ��� �����͸� ����� �Ҷ� ����Ѵ� ����������, ó���ϰ� , �ݴ� ������ ��ģ��
//������ ������ fopen �Լ��ο��� fclose�Լ��� �ݴ´�
//������ ���� ��ġ�� ���Ƿ� �����Ͽ� �������� ���� ���� ���� �� ���� fseek,fgetpos,fsetpos���� �ִ�
//�ݺ����� ������Ҷ��� ��ũ�θ� ����