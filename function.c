#include <stdio.h>

void p(int num);

int main(void) {
	// 5.2.1 ��Ģ�����ϱ�
	/*int num = 2;
	printf("num�� %d�Դϴ�.\n", num);	// 2
	// 2 + 3��?
	num = num + 3;	// num += 3;
	printf("num�� %d�Դϴ�.\n", num);	// 5
	// 5 - 1��?
	num = num - 1;	// num -= 1;
	printf("num�� %d�Դϴ�.\n", num);	// 4
	// 4 * 3��?
	num = num * 3;	// num *= 3;
	printf("num�� %d�Դϴ�.\n", num);	// 12
	// 12 / 6��?
	num = num / 6;	// num /= 6;
	printf("num�� %d�Դϴ�.\n", num);	// 2*/

	// 5.2.2 �Լ��� ��Ģ�����ϱ�
	// �Լ� ����
	int num = 2;
	// printf("num�� %d�Դϴ�.\n", num);	// 2
	p(num);
	num = num + 3;	
	// printf("num�� %d�Դϴ�.\n", num);	// 5
	p(num);
	num = num - 1;	
	// printf("num�� %d�Դϴ�.\n", num);	// 4
	p(num);
	num = num * 3;	
	// printf("num�� %d�Դϴ�.\n", num);	// 12
	p(num);
	num = num / 6;	
	// printf("num�� %d�Դϴ�.\n", num);	// 2
	p(num);
	
	return 0;
}

void p(int num) {
	printf("num�� %d�Դϴ�.\n", num);
}