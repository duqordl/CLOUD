#include <stdio.h>

int main(void) {
	//printf("Hello World\n");

	// 여러 줄 주석 처리는 /* */
	/*int age = 20;
	printf("%d\n", age);
	age = 21;
	printf("%d\n", age);
	printf("1\n");	
	// printf("2\n");	// 한 줄 주석 처리는 //
	printf("3\n");*/

	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// 1분 퀴즈(결과값을 소수점 이하 셋쨰 자리까지만 출력)
	/*float f = 2121.1020f;
	printf("%.3f\n", f);*/

	/*const int YEAR = 1972;	// 상수
	printf("C 언어가 발표된 연도 : %d\n", YEAR);
	YEAR = 1973;	// 상수로 지정한 값을 바꾸는 코드를 넣으면 오류가 발생하고 실행이 되지 않음*/

	//int add = 3 + 7;
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 3, 7, 3 + 7);
	//printf("%d + %d = %d\n", 30, 79, 30 + 79);
	//printf("%d + %d = %d\n", 30, 79, 30 * 79);

	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three;
	printf("정수 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);*/

	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[265];
	scanf_s("%s", str, sizeof(str));
	//scanf_s("%s", str, (unsigned int)sizeof(str));	// 형변환
	//// 또는
	//scanf_s("%s", str, 265);	// 문자형 변수 크기 직접 입력
	printf("%s\n", str);*/

	// 1분 퀴즈(문자열 2개를 입력받아 출력하는 코드를 작성해 보세요.)
	char s1[265], s2[265];
	printf("첫 번째 문자열을 입력하세요 : ");
	scanf_s("%s", s1, (unsigned)sizeof(s1));
	printf("두 번째 문자열을 입력하세요 : ");
	scanf_s("%s", s2, 265);
	printf("첫 번째 문자열 : %s\n", s1);
	printf("두 번째 문자열 : %s\n", s2);

	return 0;	
}
