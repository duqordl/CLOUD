#include <stdio.h>
int main(void) {
	//프로젝트: 피라미드를 쌓아라
	/*int floor;
	printf("몇 층으로 쌓겠습니까?(5~100) ");
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

	//셀프체크
	
	//내가 짠 코드
	/*for (int i = 0; i < 5; i++) {
		for (int j = 5; j > i; j--) {
			printf("*");
		}
		for (int k = 0; k <= i; k++) {
			printf(" ");
		}
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