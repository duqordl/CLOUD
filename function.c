#include <stdio.h>

void p(int num);

int main(void) {
	// 5.2.1 사칙연산하기
	/*int num = 2;
	printf("num은 %d입니다.\n", num);	// 2
	// 2 + 3은?
	num = num + 3;	// num += 3;
	printf("num은 %d입니다.\n", num);	// 5
	// 5 - 1은?
	num = num - 1;	// num -= 1;
	printf("num은 %d입니다.\n", num);	// 4
	// 4 * 3은?
	num = num * 3;	// num *= 3;
	printf("num은 %d입니다.\n", num);	// 12
	// 12 / 6은?
	num = num / 6;	// num /= 6;
	printf("num은 %d입니다.\n", num);	// 2*/

	// 5.2.2 함수로 사칙연산하기
	// 함수 정의
	int num = 2;
	// printf("num은 %d입니다.\n", num);	// 2
	p(num);
	num = num + 3;	
	// printf("num은 %d입니다.\n", num);	// 5
	p(num);
	num = num - 1;	
	// printf("num은 %d입니다.\n", num);	// 4
	p(num);
	num = num * 3;	
	// printf("num은 %d입니다.\n", num);	// 12
	p(num);
	num = num / 6;	
	// printf("num은 %d입니다.\n", num);	// 2
	p(num);
	
	return 0;
}

void p(int num) {
	printf("num은 %d입니다.\n", num);
}