#include <stdio.h>

// ����            // �Լ��� ���� ������ ���� �����ϴ��� �ý����� �����س����� ������ ���Ը��ϸ� �� �� �ֱ� ������
void p(int num);

void function_without_return();  //��ȯ�� ���� �̰� ������ �־ ������ �� �Ǵ� ��
int function_with_return();    //��ȯ�� �ִ�
void function_without_params();// ���ް��� ����  �̰� ������ ���� ������ ���� ��
void function_with_params(int num1, int num2, int num3); // ���ް��� �ִ�
int apple(int total, int ate); // ��ü total ������ ate ���� �԰� ���� ���� ��ȯ
int add(int num1, int num2);  // ���� ���� ����

int my(int a, int b); // ����
int mult(int a1, int a2);// ����
int main(void)
{
	//function �Լ���� ��
	//����

	//int num = 2;
	////printf("num�� %d�Դϴ�\n", num);  //2
	//	p(num);
	//// 2 + 3 ��? 
	//	num += 3;       // num = num + 3; �� ���� ����
	//	//printf("num�� %d�Դϴ�\n", num); //5
	//	p(num);
	////5 ���ϱ� - 2��?
	//	num *= -2;
	//	//printf("num�� %d�Դϴ�\n", num);   // - 10
	//	p(num);
	//// -10 ������ -5��
	//	num /= -5;
	//	//printf("num�� %d�Դϴ�\n", num);   // 2
	//	p(num);

	//////////////�Լ� ����//// �Լ� ����//// �Լ�����///////�Լ� ����/////////////////

	//��ȯ���� ���� �Լ� 
	//function_without_return();  // 

	//��ȯ���� �ִ� �Լ�
	//int ret = function_with_return();
	//p(ret);

	// �Ķ����(���ް�)�� ���� �Լ�
	//function_without_params();

	//�Ķ���Ͱ� �ִ� �Լ�
	//function_with_params(1, 2, 3);
	
	//�Ķ����(���ް�)�� �ް� ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); //5���� ��� �߿� 2���� �Ծ����
	//printf("��� 5�� �߿� 2���� ������? %d���� ���ƿ�\n", ret);
	//  ������ ����
	//printf("��� %d ���߿� %d ���� ������? %d ���� ���ƿ� \n",10, 7, apple(10,7)); //�ϳ��ε� ���� ���� ����

	
	// ���� �Լ�
	/*int num = 2;
	num = add(num, 3);
	p(num);*/

	// ���� �Լ� �����غ���
	int num = 5;
	num = my(num, 4);
	p(num);

	printf("num�� % d�Դϴ�\n", my(5, 4));

	//printf(" %d-%d = %d", 5, 1, my(5, 1));

	//*printf(" % d * %d = % d\n", 10, 20, mult(10,20));
	return 0;
}
// ����
void p(int num)  // p�� �̸� ()���� ���� ��
{
	printf("num�� %d�Դϴ�\n", num);
}
//���ް� : 36    �Լ� : �� + 4   ��ȯ��(��°�) : ?
//��ȯ�� �Լ��̸�(���ް�)
//{
//}
//ex) void �Լ��̸�(int num1, int num2, char c, float f)
// {
//}
void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}
int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return 10;
}
void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�\n");
}
void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ���, ���� %d, %d, %d �Դϴ�.\n", num1, num2, num3);
}
int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�\n");
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