//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int main(void)
//{
	//srand(time(NULL));  // ���� �ʱ�ȭ
	//int num = rand() % 3 + 1; // 1~3
	//printf("%d\n", num); 


	//printf("�����ʱ�ȭ ������\n");
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d  ", rand() % 10);
	//}

	//srand(time(NULL));// ���� �ʱ�ȭ

	//printf("\n\n\n�����ʱ�ȭ ������\n");
	//for (int i = 0; i < 10; i++)    //�˰� �ְ����� ���⼭ i�� 0, �׸��� 10 �����ε�, �̰� ���� �ƴ�
	//{                                //  ���� ��������� �� ���� ���ƾ���
	//	printf("%d  ", rand() % 10 );
	//}



	// ����

	//printf("���� �ʱ�ȭ ���� ��\n");
	//for (int num = 1;num <= 5; num++) // ���⼭ ����,����,���� => �ݺ��� ������
	//{
	//	printf("%d  ", rand() % 10); // ������ % �� ���ڴ� => ���Ƿ� ������ �� ���� ��� (0~9�� ������)
	//}

	//printf("\n\n���� �ʱ�ȭ ���� ��\n");
	//srand(time(NULL));
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d  ", rand() % 10);
	//}


	//���� ���� �� ���� ���α׷� ����� ����.  ���� 0 ���� 1 �� 2

	//srand(time(NULL));
	//for (int i = 0; i < 3; i++)    // �̰� �߸��� �����¹ݺ����̶� ó������ ������ ���ۿ� ����. �� ������ �ƴ�..
	//{
	//	if (i == 0)
	//	{
	//		printf("����"); break;

	//	}
	//	else if (i == 1)
	//	{
	//		printf("����"); break;
	//	}
	//	else if (i == 2)
	//	{
	//		printf("��"); break;
	//	}
	//	else
	//	{
	//		printf("����� ����"); break;
	//	}
	//}

	//srand(time(NULL));
	//int i = rand() % 3;  // % �ڿ� 2�� �ƴ� 3�� ������ 3=> 0~2 �� �����̱⿡
	//if (i == 0)
	//{
	//	printf("����");

	//}
	//else if (i == 1)
	//{
	//	printf("����"); 
	//}
	//else if (i == 2)
	//{
	//	printf("��"); 
	//}
	//else
	//{
	//	printf("����� ����");
	//}

	//                  switch ���� �������
	//srand(time(NULL));
	//int i = rand() % 3;  // 0~2 ��ȯ
	//switch (i)
	//{
	//case 0:printf("����\n");break; // �� ���忡�� �극��ũ ���� �־�� �� ���� ���� �� ����. �� �ϸ� �̾ �� ����
	//case 1:printf("����\n");break; // case �ڿ��� ���� �� ���� �Է��� ��.
	//case 2:printf("��\n");break;
	//default:printf("�����\n");break;
	//}



	//srand(time(NULL));
	//int i = rand() % 3 ;
	//switch (i)
	//{
	//case 0:printf("����");break; // case �ڿ��� ���� �� ���� �Է��� ��.
	//case 1:printf("��");break;
	//case 2:printf("����");break;
	//default:printf("�����");break;
	//}


//  ���� �ڵ� step 3�� ���� �� Ȱ���غ���

//int age = 15;
//switch (age)
//{
//case 8:
//case 9:
//case 10:
//case 11:
//case 12:
//case 13:
//	printf("%d���� �ʵ��л��Դϴ�.", age); break;
//case 14:
//case 15:
//case 16:
//	printf("%d���� ���л��Դϴ�.", age); break;
//case 17:
//case 18:
//case 19:
//	printf("%d���� ����л��Դϴ�.", age); break;
//
//default:printf("�л��� �ƴѵ���?");
//	break;
//}


// ���� �� ������Ʈ  
//               up and down ������Ʈ �����

//srand(time(NULL));
//int num = rand() % 100 + 1; // �������� ������ �� (1~100���� ��)
//printf("��� : %d\n\n", num);
//int answer = 0; // ���� , ������ ���߸� ��
//int change = 5; // ��ȸ
//
//while (change > 0)
//{
//	printf("\n1~100���� �߿� ������ ���ڸ� ���纸����\n");
//	printf("\n���� ��ȸ�� %2d ��\n", change--);
//	scanf_s("%d", &answer);
//
//	if (answer > num)
//	{
//		printf("�ƴմϴ� �� ���� �� �۾ƿ�~!");
//	}
//	else if (answer < num)
//	{
//		printf("�ƴմϴ� �� ���� �� Ŀ��~!");
//	}
//	else if (answer = num)
//	{
//		printf("�����մϴ� ���߼̾��!!\n\n\n\n"); 
//		break;
//	}
//	else
//	{
//		printf("? ���ϸ� ������ �߻����� ... �˼��մϴ�");
//	}
//
//	if (change == 0)
//	{
//		printf("\n\n\n\n\n\n��� ��ȸ�� �����Ǿ����ϴ�. ���ڸ��߱⿡ �����ϼ̾��.....\n\n\n\n");
//		break;
//	}
//}


                //������ �ð�  
//srand(time(NULL));
//
//int anwser = rand() % 100 + 1; // 1 ���� 100���� �߿� �������� ���� �ϳ��� ��
//int num = 0;  // ���� �����غ��� ��  
//int change = 5;   // ���� ��ȸ
//printf("\n\n�� ������ 1���� 100 �� �������� ���� ���� ���ߴ� �����Դϴ�!\n\n");
//while (change > 0 )  // �� �̸� ������ ����
//{
//	printf("\n ���� ��ȸ�� %d �� ���ҽ��ϴ�\n", change--);
//
//	scanf_s(" %d", &num);
//
//
//	if (anwser < num)
//	{
//		printf("\n������ �� ������ �۾ƿ� \n ");
//	}
//	else if (anwser > num)
//	{
//		printf("\n������ �� ������ Ŀ�� \n ");
//	}
//	else if (anwser == num)
//	{
//		printf("\n�����մϴ� ������ ���߼̾��!!\n\n");
//		break;
//	}
//
//	if (change < 1)
//	{
//		printf("\n �ƽ����� ����ȸ�� ��� �����ϼ̽��ϴ�.\n");
//		printf("\n ������ %d�����ϴ�...�̤�\n", anwser);
//		break;
//
//	}
//
//}

	/*return 0;
}*/


















