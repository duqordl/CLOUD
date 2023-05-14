#include <stdio.h>

void function_without_return();	// �Լ� ����

int function_with_return();	// �Լ� ����
void p(int num);	// �Լ� ����

void function_without_params();	// �Լ� ����

void function_with_params(int num1, int num2, int num3);	// �Լ� ����

int apple(int total, int ate);

int main(void) {
	// 5.3.1 ��ȯ���� ���� �Լ�
	// function_without_return();	// ��ȯ���� ���� �Լ� ȣ��

	// 5.3.2 ��ȯ���� �ִ� �Լ�
	/*int ret;
	ret = function_with_return();	// ��ȯ���� �ִ� �Լ� ȣ��
	// int ret = function_with_return();
	// printf("%d", ret);
	p(ret);	// �Լ� ȣ��*/

	// 5.3.3 ���ް��� ���� �Լ�
	// function_without_params();	// ���ް��� ���� �Լ� ȣ�� 

	// 5.3.4 ���ް��� �ִ� �Լ�
	// function_with_params(1, 2, 3);	// ���ް��� �ִ� �Լ� ȣ��

	// 5.3.5 ��ȯ���� ���ް��� �ִ� �Լ�
	/*int ret = apple(5, 2);
	printf("��� 5�� �߿��� 2���� ������ %d���� �����ϴ�.\n", ret);*/
	printf("��� %d�� �߿��� %d���� ������ %d���� �����ϴ�.\n", 10, 4, apple(10, 4));

	return 0;
}

void function_without_return() {	// �Լ� ����
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {	// �Լ� ����
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}
void p(int num) {	// �Լ� ����
	printf("num�� %d�Դϴ�.\n", num);
}

void function_without_params() {	// �Լ� ����
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3) {	// �Լ� ����
	printf("���ް��� �ִ� �Լ��̰�, ���ް��� %d, %d, %d�Դϴ�.\n", num1, num2, num3);
}

int apple(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}