#include <stdio.h>

int main(void) {
	/*// 이름
	char name[265];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	// 나이
	int age;
	printf("몇 살이에요? ");
	scanf_s("%d", &age);

	// 몸무게
	float weight;
	printf("몸무게는 몇 kg이에요? ");
	scanf_s("%f", &weight);

	// 키
	double height;
	printf("키는 몇 cm예요? ");
	scanf_s("%lf", &height);

	// 범죄명
	char what[265];
	printf("어떤 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름	:%s\n", name);
	printf("나이	:%d\n", age);
	printf("몸무게	:%.1f\n", weight);
	printf("키	:%.1lf\n", height);
	printf("범죄명	:%s\n", what);*/

	// 셀프체크(신발 쇼핑몰의 회원 가입 프로그램 만들기)
	// 이름
	char name[265];
	printf("이름을 입력해주세요: ");
	scanf_s("%s", name, 265);

	// 아이디
	char id[265];
	printf("아이디를 입력해주세요: ");
	scanf_s("%s", id, 265);

	// 나이
	int age;
	printf("나이를 입렵해주세요: ");
	scanf_s("%d", &age);

	// 생일
	char bd[265];
	printf("생일을 입력해주세요: ");
	scanf_s("%s", bd, 265);

	// 신발 크기
	float size;
	printf("신발 크기를 입력해주세요: ");
	scanf_s("%f", &size);

	// 회원 정보 출력
	printf("\n\n--- 회원정보 ---\n\n");
	printf("이름	 : %s\n", name);
	printf("아이디	 : %s\n", id);
	printf("나이	 : %d\n", age);
	printf("생일	 : %s\n", bd);
	printf("신발 크기: %.1f\n", size);

	return 0;
}