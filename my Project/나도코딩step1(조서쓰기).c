#include <stdio.h>
int main_printfscanf(void) {

/*
int main(void) {
	printf("안녕 근혁아\n");
	return 0;
}
*/
	//정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);    */

	//실수형 변수에 대한 예제
	/*float f = 46.5;
	printf("%.1f\n", f);
	double d = 4.422;
	printf("%.3lf\n", d);*/

	/*const int year = 2000; // int 앞에 const는 상수로 값은 변경할 수 없게 함
	printf("태어난 년도는 : %d\n", year);  */

	//연산 printf
	//int add = 3 + 7; // 10
	//printf("3 + 7 = %d", add);
	//printf("%d x %d = %d", 300, 734, 300 * 734);

	//scanf
	//키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하시오 :");
	scanf_s("%d", &input);
	printf("입력한 값은 %d\n:", input);*/
	
	/*int one, two, three;
	printf("정수 3개를 넣으시오 :");
	scanf_s("%d %d %d", &one, &two, &three);

	printf("첫번째 정수 값은 :%d\n",one);
	printf("두번째 정수 값은 :%d\n",two);
	printf("세번째 정수 값은 :%d\n",three);*/
		
	/*int one, two;                 // 이건 내가 응용한 것.
	printf("정수 2개를 넣으면 합과 곱을 알려드립니다:");
	scanf_s("%d %d", &one, &two);

	printf("정수들의 합은:%d\n", one + two);
	printf("정수들의 곲은:%d\n", one * two);*/

	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n",c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/
		



	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름 나이 몸무게 키 범죄명


	// 중요한 거 한 가지만 말해본다  %뒤에 d 나오면 정수, f나오면 실수, s나오면 문자열
	//                                      c나오면 문자(한 글자) 라는 것 잊지마

	// 각 변수들 설명)   정수형 변수int(%d), 실수형 변수 float(%f), double(%lf) , char(%c), char[]은 (%s)
	//char name[256];
	//printf("이름이 뭐예요?");
	//scanf_s("%s", name, sizeof(name));

	//int age;
	//printf("몇살입니까?");
	//scanf_s("%d", &age);

	//float weigt;
	//printf("몸무게는 몇 키로나 나갑니까?");
	//scanf_s("%f", & weigt);

	//float height;
	//printf("키는 얼마나 나가나요?");
	//scanf_s("%f", &height);
	//

	//char what[256];
	//printf("뭔 잘못을 저질렀으면 이곳까지 온거야 대체!!!!!!?");
	//scanf_s("%s", what, sizeof(what));

	////여기까지가 조서에 필요한 내용이고, 이 밑으로는 쓴 조서의 내용을 출력하는 것임.
	//printf("\n\n\n-----범죄자 조서 정보------\n\n\n\n");
	//printf("이름: %s\n", name);
	//printf("나이: %d\n", age);
	//printf("몸무게: %f\n", weigt);
	//printf("키: %f\n", height);
	//printf("범죄명: %s\n", what);

	//return 0;
}