#include <stdio.h>
// student ����ü�� �����ϰ� �����Է����� ���

struct student {                                          //student ����ü ���� 
	int number;           
	char name[20];
	char address[20];
};

int main()
{
	struct student st1 = { 23,"������","��⵵ ���ֽ�"}; // ����üst1�� ���𵿽ÿ� �ʱ�ȭ
	struct student st2;                                // ����ü st2�� ����


	printf("��ȣ�� �Է��ϼ���\n");                      // scanf�� ����Ͽ� ���� �Է¹���
	scanf("%d", &st2.number);
	printf("�̸��� �Է��ϼ���\n");
	scanf("%s", &st2.name);
	printf("�����ּҸ� �Է��ϼ���\n");
	scanf("%s", &st2.address);

	printf("���\n");                                // ���


	printf("%d %s %s \n", st1.number, st1.name, st1.address);
	printf("%d  ", st2.number);
	printf("%s  ", st2.name);
	printf("%s \n ", st2.address);


}
//����ü�� ����ڰ� �ǿ��� �پ��� �ڷ����� �ѹ��� ���� ���ִ� ����� ���� ���̴�
//struct (����ü �̸�){     };���� ���� �Ѵ�
//typedef�� �̿��Ͽ� �̸��� �� �ڷ����� �������ϸ� �ڷ��� ������ �� �� ���ϰ� �����Ҽ� �ִ� 
//�Լ��� ���ڸ� ������ �� ���� �����ϸ� �޸��� �̵��� ũ�� ������ �����͸� �̿��Ͽ� �ּҸ� �����ϴ� ���� ȿ�����̴�
//�������� ������ �ְ� ���ο� �� �� ������ �ִ� ����� ���� �ڷ����̴� 