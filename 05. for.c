#include <stdio.h>

int main()
{//�Է¹��� ����ŭ "*" ���
	int a=0;
	printf("*�� �󸶳� ������� �Է��Ͻÿ�\n");
	scanf("%d",&a);                            // (*)�� �󸶳� ������� �Է¹޽��ϴ�
	for (int i = 1; i <= a; ++i)               // 1(�ʱ�ȭ)���� �Է¹����� a(���ǽ�)���� ��������(������)�� �մϴ�
	{
		printf("*");                           // ���ǽ��� ���̸� *�� ����մϴ�
	}
	printf("\n");
	return 0;
}
//for ���� ���ɹ��� ������ Ƚ����ŭ �ݺ���ŵ�ϴ� ���ǽ��� ���� ���ȿ��� ���ɹ��� �����մϴ�
//for (int a=1(�ʱ�ȭ); a<5(���ǽ�); a++(������))
//�߰�ȣ{}�� �̿��Ͽ� for ����ø�� �Ҽ��ֽ��ϴ�