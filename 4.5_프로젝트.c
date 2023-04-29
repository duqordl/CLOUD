#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	// 프로젝트: 숫자 맞히기
	/*srand(time(NULL));
	int num = rand() % 100 + 1;
	int answer = 0;
	int chance = 5;

	while (1)
	{	// chance > 0
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞혀 보세요.(1~100) : ");
		scanf_s("%d", &answer);
		if (answer > num) {
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다!\n\n");
			break;
		}
		else
		{
			printf(" 알 수 없는 오류가 발생했어요.\n\n");
		}
		if (chance == 0) {
			printf("모든 기회를 사용했어요. 아쉽게도 실패했습니다.\n");
			printf("정답 : %d\n", num);
			break;
		}
	}*/

	// 셀프체크
	// 문제: 카페 메뉴의 가격을 계산하는 프로그램을 조건문으로 만들어 보세요.
	// 조건
	// 1. 커피 1잔의 가격은 4,500원입니다.
	// 2. 샌드위치 1개의 가격은 6,000원입니다.
	// 3. 샌드위치 구매 시 커피 가격이 할인되어 잔당 3,500원입니다.(수량 제한 없음).

	// 내가 짠 코드
	/*int c, s;
	printf("커피: ");
	scanf_s("%d", &c);
	printf("샌드위치: ");
	scanf_s("%d", &s);
	if (s == 0)
		printf("주문하신 메뉴의 총 금액은 %d원입니다.", 4500 * c);
	else if (c == 0)
		printf("주문하신 메뉴의 총 금액은 %d원입니다.", 6000 * s);
	else
		printf("주문하신 메뉴의 총 금액은 %d원입니다.", (3500 * c) + (6000 * s));*/

	// 책에 있는 답
	int coffee_count = 0;	// 커피 수량(값을 바꿔 실습하기)
	int sandwich_count = 0;	// 샌드위치 수량(값을 바꿔 실습하기)
	int total_price = 0;	// 총 금액
	printf("커피: ");
	scanf_s("%d", &coffee_count);
	printf("샌드위치: ");
	scanf_s("%d", &sandwich_count);
	// 샌드위치와 커피 모두 구매시 샌드위치 6,000원, 커피 3,500원(할인가)으로 계산
	if (sandwich_count > 0 && coffee_count > 0) {
		total_price = (sandwich_count * 6000) + (coffee_count * 3500);
	}
	else {	// 그 외의 경우 샌드위치 6,000원, 커피 4,500원으로 계산
		total_price = (sandwich_count * 6000) + (coffee_count * 4500);
	}
	printf("주문하신 메뉴의 총 금액은 % d원입니다.\n", total_price);

	return 0;
}