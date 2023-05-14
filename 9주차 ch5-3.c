#include <stdio.h>

void function_without_return();	// 함수 선언

int function_with_return();	// 함수 선언
void p(int num);	// 함수 선언

void function_without_params();	// 함수 선언

void function_with_params(int num1, int num2, int num3);	// 함수 선언

int apple(int total, int ate);

int main(void) {
	// 5.3.1 반환값이 없는 함수
	// function_without_return();	// 반환값이 없는 함수 호출

	// 5.3.2 반환값이 있는 함수
	/*int ret;
	ret = function_with_return();	// 반환값이 있는 함수 호출
	// int ret = function_with_return();
	// printf("%d", ret);
	p(ret);	// 함수 호출*/

	// 5.3.3 전달값이 없는 함수
	// function_without_params();	// 전달값이 없는 함수 호출 

	// 5.3.4 전달값이 있는 함수
	// function_with_params(1, 2, 3);	// 전달값이 있는 함수 호출

	// 5.3.5 반환값과 전달값이 있는 함수
	/*int ret = apple(5, 2);
	printf("사과 5개 중에서 2개를 먹으면 %d개가 남습니다.\n", ret);*/
	printf("사과 %d개 중에서 %d개를 먹으면 %d개가 남습니다.\n", 10, 4, apple(10, 4));

	return 0;
}

void function_without_return() {	// 함수 정의
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return() {	// 함수 정의
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}
void p(int num) {	// 함수 정의
	printf("num은 %d입니다.\n", num);
}

void function_without_params() {	// 함수 정의
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3) {	// 함수 정의
	printf("전달값이 있는 함수이고, 전달값은 %d, %d, %d입니다.\n", num1, num2, num3);
}

int apple(int total, int ate) {
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}