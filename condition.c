#include <stdio.h>

int main(void) {
	// 4.2 조건에 따라 분기하기
	// 4.2.1 if-else 문
	/*int age = 15;
	if (age >= 20) {
		printf("성년입니다.\n");
	}
	else {
		printf("청소년입니다.\n");
	}*/
	// if 문 단독 사용
	/*int age = 15;
	if (age >= 20) {
		printf("성년입니다.\n");
	}*/

	// 4.2.2 if-else if-else 문
	/*int age = 25;
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생입니다.\n");
	}
	else {
		printf("청소년이 아닙니다.\n");
	}*/

	//4.2.3 AND와 OR 연산자
	// AND 연산자
	/*int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b && c == d) {
		printf("a와 b가 같고 c와 d도 같습니다.\n");
	}
	else {
		printf("값이 서로 다릅니다.\n");
	}*/

	// OR 연산자
	/*int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;
	if (a == b || c == d) {
		printf("a와 b 또는 c와 d의 값이 같습니다.\n");
	}*/

	// 4.3 실행 중단하기
	// 4.3.1 break 문
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
	}*/

	// 4.3.2 continue 문
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
		}
	}
	return 0;
}