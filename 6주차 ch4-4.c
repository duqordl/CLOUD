#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	// 4.4.1 ���� �����ϱ�
	/*printf("���� �ʱ�ȭ ����... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));	// ���� �ʱ�ȭ
	printf("\n\n���� �ʱ�ȭ ����... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}*/

	/*srand(time(NULL));
	int i = rand() % 3;	// 0~2 ��ȯ
	if (i == 0) {
		printf("����\n");
	}
	else if (i == 1) {
		printf("����\n");
	}
	else if (i == 2) {
		printf("��\n");
	}
	else {
		printf("�����\n");
	}*/

	// 4.4.2 swith ��
	/*srand(time(NULL));
	int i = rand() % 3;	// 0~2 ��ȯ;
	switch (i)
	{case 0:
		printf("����\n");
		break;
	 case 1:
		printf("����\n");
		break;
	 case 2:
		printf("��\n");
		break;
	 default:
		printf("�����\b");
	}*/

	// 4.4.3 �ǽ�: û�ҳ� ���� �����ϱ�
	int age = 9;
	switch (age)
	{case 8:
	 case 9:
	 case 10:
	 case 11:
	 case 12:
	 case 13:
		 printf("�ʵ��л��Դϴ�.\n");
		 break;
	 case 14:
	 case 15:
	 case 16:
		 printf("���л��Դϴ�.\n");
		 break;
	 case 17:
	 case 18:
	 case 19:
		 printf("����л��Դϴ�.\n");
		 break;
	default:
		printf("û�ҳ��� �ƴմϴ�.\n");
	}

	return 0;
}