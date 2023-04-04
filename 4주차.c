#include <stdio.h>
int main(void) {
	// 3.4 이중 반복문 사용하기(2023-04-05)
	/*for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    두 번째 반복문 : %d\n", j);
		}
	}*/

	// 실습 1: 구구단 출력하기
	/*for (int i = 2; i <= 9; i++) {
		printf("%d단 출력\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}*/

	// 실습 2: 별표 출력하기
	// 내가 짠 코드(2023-04-05)
	/*for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	// 책에 있는 코드
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 실습 3: 오른쪽 정렬로 별표 출력하기
	// 내가 짠 코드(2023-04-05)
	/*for (int i = 1; i <= 5; i++) {
		for (int j = 5; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/
	// 책에 있는 코드
	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf("S");	// printf(" ");		
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 3.5 프로젝트: 피라미드를 쌓아라(2023-04-05)
	/*int floor;
	printf("몇 층으로 쌓겠습니까?(5~100) ");
	scanf_s("%d", &floor);
	// 책에 있는 코드
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf("S");	// printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	// 내가 짠 코드(2023-04-05)
	for (int i = 1; i <= floor; i++) {
		for (int j = i; j <= floor - 1; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (i - 1) * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/


	// 마무리(2023-04-05)
	// 셀프체크
	// 내가 짠 코드(2023-04-05)
	/*for (int i = 5; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}*/
	// 내가 짠 코드(3주차)
	/*for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		for (int k = 0; k <= i; k++) {
			printf(" ");
		}	// 이 for문은 생략 가능!!
		printf("\n");
	}*/
	//책에 있는 답
	for (int i = 5; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}