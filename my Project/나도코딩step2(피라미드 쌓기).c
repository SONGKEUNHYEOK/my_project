#include <stdio.h>

int main_loop(void)
{
	//printf("hello 근혁\n그리고 안녕이란 뜻");

	// ++ 뿔뿔
	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);*/



	/*int b = 20;

	// b = b + 1;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	//++b는 플러스를 하고 문장을 끝내는 반면에, b++은 문장을 수행한 후에 다음 문장 넘어갈때 1을 더함
	//    !!!!!!!!!!!!!!!!!!!!!!!!!쉽게 말해서 플플이 먼저 오면 수행을 바로 한 값
	//                              플플이 뒤에 오면 다음 문장에 그것을 처리하게 됨
	printf("b는 %d\n", b);

	*/

	/*int i = 1;
	printf("안녕 근혁아%d\n", i++);   //10번 복사함 최초값은1
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	printf("안녕 근혁아%d\n", i++);
	*/

	//반복문!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
	// for,   while,    do while

	////////////////////////////////////////////////////////////for(선언;조건;증감){}

	/*for (int i = 1; i <= 10; i++)
	{
		printf("안녕 근혁아-- %d\n", i);
	}
	*/


	////////////////////////////////////////////////////////while(조건) {}
	/*  먼저 와일 반복문을 만들기 전에 선언을 해야함

	int i = 1;
	while (i<= 10)
	{
		printf("안녕 근혁아-- %d\n", i++);
	}
	*/


	////////////////////////////////////////////////////////do {   } while (조건);

	/*int i = 1;
	do {
		printf("안녕 근혁아-- %d\n", i++);


	} while (i<= 10);*/

	//2종 반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 :%d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("    두 번째 반복문 :%d\n", j);
		}

	}*/


	// 구구단 프로그램 만들기

	//2단부터 9단까지 ㄱㄱ

	/*for (int i = 2;i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1;j <= 9; j++)
		{
			printf(" %d x %d = %d\n", i, j, i * j);
		}

	}*/

	// 내가 만든 구구단!
	/*for (int a = 5; a <= 10; a++)
	{
		printf("%d 단계 구구단\n", a);
		for (int b = 1; b <= 10; b++)
		{
			printf("    %d x %d = %d\n", a, b, a * b);
		}
	}*/

	//*
	//**
	//***
	//****
	//*****           를 만들어볼 것이다.

	// for을 가지고만 만든 이중 반복문
		/*for (int i = 0; i <= 5;i++)
	{
		printf("\n");
			for (int j = 0; j <= i; j++)
			{
				printf("*");
			}
	}*/
	// for과 while을 이용해서 만든 이중 반복문
		/*for (int a = 0; a <= 5; a++)
		{
			int b = 0;
			while (b <= a)
			{
				printf("*", b++);
			}
			printf("\n");

		}*/
		//  for과 do while을 이용해서 만든 이중 반복문 
			/*for (int a = 0; a <= 5; a++)
		{
			int b = 0;
			do
			{
				printf("*", b++);
			} while (b <= a);
			printf("\n");
		}*/
		// 다른 종류를 이용한 이중 반복문
			/*for (int a = 2; a <= 10; a++)
		{
			printf("%d단 \n",a);
			int b = 1;
			{

				while (b <= 10)
				{
					printf("%d x %d = %d\n", a, b, a * b);
					b++;

				}
			}

		}*/

		/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");


	}*/




	//for (int i = 0; i < 5; i++)       //만든 것은 오른쪽부터 커지는 형식의 별 쌓기임
	//{
	//	for (int one = 0; one < 5-1-i ; one++) // 내가 틀린 이유 i변수가 회차마다 값이 달라지니
	//{                                    // 밑에 변수 one도 회차마다 변수값이 커서 조건에
	//	printf(" ");          // 맞을 거라 생각함 i보다 1을 낮춰서 총5개일때4개 4일때 3을 생각함
	//}                         // 그런데 다음회차가 되면 변수one초기화가 되어 고정됨 0~3 즉, 4개로
	//	for (int two = 0; two <= i; two++)
	//{
	//	printf("*");
	//}

	//printf("\n");
	//





// 드디어 본 게임 : 피라미드를 쌓아라. 프로젝트 (나도코딩1:08:00)

//int floor;
//printf("몇층으로 쌓을 것이냐?");
//scanf_s("%d", &floor);
//
//for (int i = 0;i < floor; i++)
//{
//	for (int s = 0; s < floor - 1 - i; s++)
//		printf("s");
//	for (int p = 0; p < 2 * i + 1; p++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//  프로그램을 만들기 전에 먼저 내가 만드려고 하는 프로그램의 결과 값을 생각해보고 하길 .
int floor;
printf("몇층까지 쌓을 것이냐?");
scanf_s("%d", &floor);
for (int i = 0; i < floor; i++)
{
	for (int a = 0; a < floor - 1 - i; a++)
	{
		printf(" ");
	}
	for (int s = 0;s < 2 * i + 1; s++)
	{
		printf("*");
	}
	printf("\n");
}


	return 0;
}
