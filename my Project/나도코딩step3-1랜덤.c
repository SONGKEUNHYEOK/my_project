//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main(void)
//{
	//srand(time(NULL));  // 난수 초기화
	//int num = rand() % 3 + 1; // 1~3
	//printf("%d\n", num); 


	//printf("난수초기화 이전임\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d  ", rand() % 10);
	//}

	//srand(time(NULL));// 난수 초기화

	//printf("\n\n\n난수초기화 이후임\n");
	//for (int i = 0; i < 10; i++)    //알고 있겠지만 여기서 i는 0, 그리고 10 이하인데, 이게 값이 아닌
	//{                                //  선택 가지수라는 걸 잊지 말아야함
	//	printf("%d  ", rand() % 10 );
	//}



	// 복습

	//printf("난수 초기화 이전 값\n");
	//for (int num = 1;num <= 5; num++) // 여기서 선언,조건,증감 => 반복될 가짓수
	//{
	//	printf("%d  ", rand() % 10); // 여기의 % 뒤 숫자는 => 임의로 정해질 한 값의 경우 (0~9로 정해짐)
	//}

	//printf("\n\n난수 초기화 이후 값\n");
	//srand(time(NULL));
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d  ", rand() % 10);
	//}


	//가위 바위 보 랜덤 프로그램 만들어 보기.  가위 0 바위 1 보 2

	//srand(time(NULL));
	//for (int i = 0; i < 3; i++)    // 이게 잘못된 이유는반복문이라 처음부터 시작할 수밖에 없음. 즉 랜덤이 아님..
	//{
	//	if (i == 0)
	//	{
	//		printf("가위"); break;

	//	}
	//	else if (i == 1)
	//	{
	//		printf("바위"); break;
	//	}
	//	else if (i == 2)
	//	{
	//		printf("보"); break;
	//	}
	//	else
	//	{
	//		printf("몰라요 저는"); break;
	//	}
	//}

	//srand(time(NULL));
	//int i = rand() % 3;  // % 뒤에 2가 아닌 3인 이유는 3=> 0~2 총 세개이기에
	//if (i == 0)
	//{
	//	printf("가위");

	//}
	//else if (i == 1)
	//{
	//	printf("바위"); 
	//}
	//else if (i == 2)
	//{
	//	printf("보"); 
	//}
	//else
	//{
	//	printf("몰라요 저는");
	//}

	//                  switch 문을 배워보자
	//srand(time(NULL));
	//int i = rand() % 3;  // 0~2 반환
	//switch (i)
	//{
	//case 0:printf("가위\n");break; // 각 문장에서 브레이크 문을 넣어야 한 값만 구할 수 있음. 안 하면 이어서 다 나옴
	//case 1:printf("바위\n");break; // case 뒤에는 공백 후 숫자 입력할 것.
	//case 2:printf("보\n");break;
	//default:printf("몰라요\n");break;
	//}



	//srand(time(NULL));
	//int i = rand() % 3 ;
	//switch (i)
	//{
	//case 0:printf("가위");break; // case 뒤에는 공백 후 숫자 입력할 것.
	//case 1:printf("보");break;
	//case 2:printf("바위");break;
	//default:printf("몰라요");break;
	//}


//  나도 코딩 step 3에 나온 거 활용해보기

//int age = 15;
//switch (age)
//{
//case 8:
//case 9:
//case 10:
//case 11:
//case 12:
//case 13:
//	printf("%d살은 초등학생입니다.", age); break;
//case 14:
//case 15:
//case 16:
//	printf("%d살은 중학생입니다.", age); break;
//case 17:
//case 18:
//case 19:
//	printf("%d살은 고등학생입니다.", age); break;
//
//default:printf("학생이 아닌데요?");
//	break;
//}


// 드디어 본 프로젝트  
//               up and down 프로젝트 만들기

//srand(time(NULL));
//int num = rand() % 100 + 1; // 랜덤으로 정해질 수 (1~100까지 중)
//printf("비밀 : %d\n\n", num);
//int answer = 0; // 정답 , 정답은 맞추면 끝
//int change = 5; // 기회
//
//while (change > 0)
//{
//	printf("\n1~100까지 중에 정해진 숫자를 맞춰보세요\n");
//	printf("\n남은 기회는 %2d 번\n", change--);
//	scanf_s("%d", &answer);
//
//	if (answer > num)
//	{
//		printf("아닙니다 그 수는 더 작아요~!");
//	}
//	else if (answer < num)
//	{
//		printf("아닙니다 그 수는 더 커요~!");
//	}
//	else if (answer = num)
//	{
//		printf("축하합니다 맞추셨어요!!\n\n\n\n"); 
//		break;
//	}
//	else
//	{
//		printf("? 뭘하면 오류가 발생하지 ... 죄송합니다");
//	}
//
//	if (change == 0)
//	{
//		printf("\n\n\n\n\n\n모든 기회가 소진되었습니다. 숫자맞추기에 실패하셨어요.....\n\n\n\n");
//		break;
//	}
//}


                //복습할 시간  
//srand(time(NULL));
//
//int anwser = rand() % 100 + 1; // 1 부터 100까지 중에 랜덤으로 뽑힐 하나의 수
//int num = 0;  // 내가 예상해보는 수  
//int change = 5;   // 남은 기회
//printf("\n\n이 게임은 1부터 100 중 랜덤으로 뽑힌 수를 맞추는 게임입니다!\n\n");
//while (change > 0 )  // 참 이면 가능한 것임
//{
//	printf("\n 남은 기회는 %d 번 남았습니다\n", change--);
//
//	scanf_s(" %d", &num);
//
//
//	if (anwser < num)
//	{
//		printf("\n정답은 그 수보다 작아요 \n ");
//	}
//	else if (anwser > num)
//	{
//		printf("\n정답은 그 수보다 커요 \n ");
//	}
//	else if (anwser == num)
//	{
//		printf("\n축하합니다 정답을 맞추셨어요!!\n\n");
//		break;
//	}
//
//	if (change < 1)
//	{
//		printf("\n 아쉽지만 모든기회를 모두 소진하셨습니다.\n");
//		printf("\n 정답은 %d였습니다...ㅜㅜ\n", anwser);
//		break;
//
//	}
//
//}

	/*return 0;
}*/


















