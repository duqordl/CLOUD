#include <stdio.h>

int main(void) {
	/*// �̸�
	char name[265];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	// ����
	int age;
	printf("�� ���̿���? ");
	scanf_s("%d", &age);

	// ������
	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf_s("%f", &weight);

	// Ű
	double height;
	printf("Ű�� �� cm����? ");
	scanf_s("%lf", &height);

	// ���˸�
	char what[265];
	printf("� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));

	// ���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�	:%s\n", name);
	printf("����	:%d\n", age);
	printf("������	:%.1f\n", weight);
	printf("Ű	:%.1lf\n", height);
	printf("���˸�	:%s\n", what);*/

	// ����üũ(�Ź� ���θ��� ȸ�� ���� ���α׷� �����)
	// �̸�
	char name[265];
	printf("�̸��� �Է����ּ���: ");
	scanf_s("%s", name, 265);

	// ���̵�
	char id[265];
	printf("���̵� �Է����ּ���: ");
	scanf_s("%s", id, 265);

	// ����
	int age;
	printf("���̸� �Է����ּ���: ");
	scanf_s("%d", &age);

	// ����
	char bd[265];
	printf("������ �Է����ּ���: ");
	scanf_s("%s", bd, 265);

	// �Ź� ũ��
	float size;
	printf("�Ź� ũ�⸦ �Է����ּ���: ");
	scanf_s("%f", &size);

	// ȸ�� ���� ���
	printf("\n\n--- ȸ������ ---\n\n");
	printf("�̸�	 : %s\n", name);
	printf("���̵�	 : %s\n", id);
	printf("����	 : %d\n", age);
	printf("����	 : %s\n", bd);
	printf("�Ź� ũ��: %.1f\n", size);

	return 0;
}