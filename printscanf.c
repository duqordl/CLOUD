#include <stdio.h>

int main(void) {
	//printf("Hello World\n");

	// ���� �� �ּ� ó���� /* */
	/*int age = 20;
	printf("%d\n", age);
	age = 21;
	printf("%d\n", age);
	printf("1\n");	
	// printf("2\n");	// �� �� �ּ� ó���� //
	printf("3\n");*/

	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// 1�� ����(������� �Ҽ��� ���� �¤� �ڸ������� ���)
	/*float f = 2121.1020f;
	printf("%.3f\n", f);*/

	/*const int YEAR = 1972;	// ���
	printf("C �� ��ǥ�� ���� : %d\n", YEAR);
	YEAR = 1973;	// ����� ������ ���� �ٲٴ� �ڵ带 ������ ������ �߻��ϰ� ������ ���� ����*/

	//int add = 3 + 7;
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 3, 7, 3 + 7);
	//printf("%d + %d = %d\n", 30, 79, 30 + 79);
	//printf("%d + %d = %d\n", 30, 79, 30 * 79);

	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	/*int one, two, three;
	printf("���� 3���� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° �� : %d\n", one);
	printf("�� ��° �� : %d\n", two);
	printf("�� ��° �� : %d\n", three);*/

	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[265];
	scanf_s("%s", str, sizeof(str));
	//scanf_s("%s", str, (unsigned int)sizeof(str));	// ����ȯ
	//// �Ǵ�
	//scanf_s("%s", str, 265);	// ������ ���� ũ�� ���� �Է�
	printf("%s\n", str);*/

	// 1�� ����(���ڿ� 2���� �Է¹޾� ����ϴ� �ڵ带 �ۼ��� ������.)
	char s1[265], s2[265];
	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", s1, (unsigned)sizeof(s1));
	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", s2, 265);
	printf("ù ��° ���ڿ� : %s\n", s1);
	printf("�� ��° ���ڿ� : %s\n", s2);

	return 0;	
}
