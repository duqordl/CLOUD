#include <stdio.h>

int main(void) {
	// 4.2 ���ǿ� ���� �б��ϱ�
	// 4.2.1 if-else ��
	/*int age = 15;
	if (age >= 20) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("û�ҳ��Դϴ�.\n");
	}*/
	// if �� �ܵ� ���
	/*int age = 15;
	if (age >= 20) {
		printf("�����Դϴ�.\n");
	}*/

	// 4.2.2 if-else if-else ��
	/*int age = 25;
	if (age >= 8 && age <= 13) {
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л��Դϴ�.\n");
	}
	else {
		printf("û�ҳ��� �ƴմϴ�.\n");
	}*/

	//4.2.3 AND�� OR ������
	// AND ������
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b && c == d) {
		printf("a�� b�� ���� c�� d�� �����ϴ�.\n");
	}
	else {
		printf("���� ���� �ٸ��ϴ�.\n");
	}*/

	// OR ������
	/*int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d) {
		printf("a�� b �Ǵ� c�� d�� ���� �����ϴ�.\n");
	}*/

	// 4.3 ���� �ߴ��ϱ�
	// 4.3.1 break ��
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������.\n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���.\n", i);
	}*/

	// 4.3.2 continue ��
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���.\n", i);
		}
	}
	return 0;
}