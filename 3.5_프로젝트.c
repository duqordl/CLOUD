#include <stdio.h>
int main(void) {
	//������Ʈ: �Ƕ�̵带 �׾ƶ�
	/*int floor;
	printf("�� ������ �װڽ��ϱ�?(5~100) ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf("S"); //printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	//����üũ
	
	//���� § �ڵ�
	/*for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		for (int k = 0; k <= i; k++) {
			printf(" ");
		}
		printf("\n");
	}*/

	//å�� �ִ� ��
	for (int i = 5; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}