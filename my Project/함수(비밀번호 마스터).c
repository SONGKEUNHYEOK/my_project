#include <stdio.h>

// 선언            // 함수를 쓰는 이유는 식이 복잡하더라도 시스템을 구성해놓으면 앞으로 대입만하면 쓸 수 있기 때문에
void p(int num);

void function_without_return();  //반환값 없는 이건 내용이 있어도 배출이 안 되는 것
int function_with_return();    //반환값 있는
void function_without_params();// 전달값이 없는  이건 내용을 넣을 수조차 없는 것
void function_with_params(int num1, int num2, int num3); // 전달값이 있는
int apple(int total, int ate); // 전체 total 개에서 ate 개를 먹고 남은 수를 반환
int add(int num1, int num2);  // 둘이 더할 거임
int sub(int num1, int num2);



int my(int a, int b); // 뺄셈
int mult(int a1, int a2);// 곱셈
int main_function(void)
{
	//function 함수라는 뜻
	//계산기

	//int num = 2;
	////printf("num는 %d입니다\n", num);  //2
	//	p(num);
	//// 2 + 3 은? 
	//	num += 3;       // num = num + 3; 과 같은 뜻임
	//	//printf("num는 %d입니다\n", num); //5
	//	p(num);
	////5 곱하기 - 2는?
	//	num *= -2;
	//	//printf("num는 %d입니다\n", num);   // - 10
	//	p(num);
	//// -10 나누기 -5는
	//	num /= -5;
	//	//printf("num는 %d입니다\n", num);   // 2
	//	p(num);

	//////////////함수 종류//// 함수 종류//// 함수종류///////함수 종류/////////////////

	//반환값이 없는 함수 
	//function_without_return();  // 

	//반환값이 있는 함수
	//int ret = function_with_return();
	//p(ret);

	// 파라미터(전달값)가 없는 함수
	//function_without_params();

	//파라미터가 있는 함수
	//function_with_params(1, 2, 3);

	//파라미터(전달값)도 받고 반환값도 있는 함수
	//int ret = apple(5, 2); //5개의 사과 중에 2개를 먹었어요
	//printf("사과 5개 중에 2개를 먹으면? %d개가 남아요\n", ret);
	//  동일한 문장
	//printf("사과 %d 개중에 %d 개를 먹음면? %d 개가 남아요 \n",10, 7, apple(10,7)); //하나로도 같은 문장 ㅇㅋ


	// 계산기 함수
	/*int num = 2;
	num = add(num, 3);   // 후에 정의하는 add( 넘버1에는 num, 넘버2에는3)이 들어가는 것임.
	p(num);*/

	// 계산기 함수 복습해보자
	int num = 5;
	//num = my(num, 4);
	//p(num);

	
	num = sub(num, 1);
	p(num);


	printf(" 프린트에프로 만든 num은 % d입니다\n", my(5, 4));

	//printf(" %d-%d = %d", 5, 1, my(5, 1));

	//*printf(" % d * %d = % d\n", 10, 20, mult(10,20));
	return 0;
}
// 정의
void p(int num)  // p는 이름 ()안은 전달 값
{
	printf("num은 %d입니다\n", num);
}
//전달값 : 36    함수 : ㅁ + 4   반환형(출력값) : ?
//반환형 함수이름(전달값)
//{
//}
//ex) void 함수이름(int num1, int num2, char c, float f)
// {
//}
void function_without_return()
{
	printf("반환값이 없는 함수입니다\n");
}
int function_with_return()
{
	printf("반환값이 있는 함수입니다\n");
	return 10;
}
void function_without_params()
{
	printf("전달값이 없는 함수입니다\n");
}
void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수고, 값은 %d, %d, %d 입니다.\n", num1, num2, num3);
}
int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다\n");
	return total - ate;
}
int add(int num1, int num2)
{
	return num1 + num2;
}
int my(int a, int b)
{
	return a - b;
}
int mult(int a1, int a2)
{
	return a1 * a2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}
