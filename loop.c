#include <stdio.h>
int main(void) {
	/*int a = 10;
	printf("a�� %d\n", a);
	//a = a + 1;
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);*/

	/*int b = 20;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);*/

	/*printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");
	printf("Hello World \n");*/

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	//for��
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}*/

	//while��
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
		//i++;
	}*/

	//do-while��
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	//���� �ݺ���
	/*for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    �� ��° �ݺ��� : %d\n", j);
		}
	}*/

	//�ǽ� 1: ������ ����ϱ�
	/*for (int i = 2; i <= 9; i++) {
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9 ; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}*/

	//�ǽ� 2: ��ǥ ����ϱ�
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*"); 
		}
		printf("\n");
	}*/

	//�ǽ� 3: ������ ���ķ� ��ǥ ����ϱ�
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf("S"); //printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}