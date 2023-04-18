#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	// 4.4.1 난수 생성하기
	/*printf("난수 초기화 이전... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));	// 난수 초기화
	printf("\n\n난수 초기화 이후... \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}*/

	/*srand(time(NULL));
	int i = rand() % 3;	// 0~2 반환
	if (i == 0) {
		printf("가위\n");
	}
	else if (i == 1) {
		printf("바위\n");
	}
	else if (i == 2) {
		printf("보\n");
	}
	else {
		printf("몰라요\n");
	}*/

	// 4.4.2 swith 문
	/*srand(time(NULL));
	int i = rand() % 3;	// 0~2 반환;
	switch (i)
	{case 0:
		printf("가위\n");
		break;
	 case 1:
		printf("바위\n");
		break;
	 case 2:
		printf("보\n");
		break;
	 default:
		printf("몰라요\b");
	}*/

	// 4.4.3 실습: 청소년 나이 구분하기
	int age = 9;
	switch (age)
	{case 8:
	 case 9:
	 case 10:
	 case 11:
	 case 12:
	 case 13:
		 printf("초등학생입니다.\n");
		 break;
	 case 14:
	 case 15:
	 case 16:
		 printf("중학생입니다.\n");
		 break;
	 case 17:
	 case 18:
	 case 19:
		 printf("고등학생입니다.\n");
		 break;
	default:
		printf("청소년이 아닙니다.\n");
	}

	return 0;
}