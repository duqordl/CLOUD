#include <stdio.h>
int main(void) {
	// 3.4 ���� �ݺ��� ����ϱ�(2023-04-05)
	/*for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    �� ��° �ݺ��� : %d\n", j);
		}
	}*/

	// �ǽ� 1: ������ ����ϱ�
	/*for (int i = 2; i <= 9; i++) {
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}*/

	// �ǽ� 2: ��ǥ ����ϱ�
	// ���� § �ڵ�(2023-04-05)
	/*for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	// å�� �ִ� �ڵ�
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	// �ǽ� 3: ������ ���ķ� ��ǥ ����ϱ�
	// ���� § �ڵ�(2023-04-05)
	/*for (int i = 1; i <= 5; i++) {
		for (int j = 5; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/
	// å�� �ִ� �ڵ�
	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf("S");	// printf(" ");		
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 3.5 ������Ʈ: �Ƕ�̵带 �׾ƶ�(2023-04-05)
	/*int floor;
	printf("�� ������ �װڽ��ϱ�?(5~100) ");
	scanf_s("%d", &floor);
	// å�� �ִ� �ڵ�
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf("S");	// printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	// ���� § �ڵ�(2023-04-05)
	for (int i = 1; i <= floor; i++) {
		for (int j = i; j <= floor - 1; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (i - 1) * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/


	// ������(2023-04-05)
	// ����üũ
	// ���� § �ڵ�(2023-04-05)
	/*for (int i = 5; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}*/
	// ���� § �ڵ�(3����)
	/*for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		for (int k = 0; k <= i; k++) {
			printf(" ");
		}	// �� for���� ���� ����!!
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