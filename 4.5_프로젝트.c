#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	// ������Ʈ: ���� ������
	/*srand(time(NULL));
	int num = rand() % 100 + 1;
	int answer = 0;
	int chance = 5;

	while (1)
	{	// chance > 0
		printf("���� ��ȸ %d��\n", chance--);
		printf("���ڸ� ���� ������.(1~100) : ");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�!\n\n");
			break;
		}
		else
		{
			printf(" �� �� ���� ������ �߻��߾��.\n\n");
		}
		if (chance == 0) {
			printf("��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.\n");
			printf("���� : %d\n", num);
			break;
		}
	}*/

	// ����üũ
	// ����: ī�� �޴��� ������ ����ϴ� ���α׷��� ���ǹ����� ����� ������.
	// ����
	// 1. Ŀ�� 1���� ������ 4,500���Դϴ�.
	// 2. ������ġ 1���� ������ 6,000���Դϴ�.
	// 3. ������ġ ���� �� Ŀ�� ������ ���εǾ� �ܴ� 3,500���Դϴ�.(���� ���� ����).

	// ���� § �ڵ�
	/*int c, s;
	printf("Ŀ��: ");
	scanf_s("%d", &c);
	printf("������ġ: ");
	scanf_s("%d", &s);
	if (s == 0)
		printf("�ֹ��Ͻ� �޴��� �� �ݾ��� %d���Դϴ�.", 4500 * c);
	else if (c == 0)
		printf("�ֹ��Ͻ� �޴��� �� �ݾ��� %d���Դϴ�.", 6000 * s);
	else
		printf("�ֹ��Ͻ� �޴��� �� �ݾ��� %d���Դϴ�.", (3500 * c) + (6000 * s));*/

	// å�� �ִ� ��
	int coffee_count = 0;	// Ŀ�� ����(���� �ٲ� �ǽ��ϱ�)
	int sandwich_count = 0;	// ������ġ ����(���� �ٲ� �ǽ��ϱ�)
	int total_price = 0;	// �� �ݾ�
	printf("Ŀ��: ");
	scanf_s("%d", &coffee_count);
	printf("������ġ: ");
	scanf_s("%d", &sandwich_count);
	// ������ġ�� Ŀ�� ��� ���Ž� ������ġ 6,000��, Ŀ�� 3,500��(���ΰ�)���� ���
	if (sandwich_count > 0 && coffee_count > 0) {
		total_price = (sandwich_count * 6000) + (coffee_count * 3500);
	}
	else {	// �� ���� ��� ������ġ 6,000��, Ŀ�� 4,500������ ���
		total_price = (sandwich_count * 6000) + (coffee_count * 4500);
	}
	printf("�ֹ��Ͻ� �޴��� �� �ݾ��� % d���Դϴ�.\n", total_price);

	return 0;
}