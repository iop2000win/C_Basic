#include <stdio.h>

/*
int main(void)
{
	printf("hello world\n");
	printf("What's going on?\n");

	return 0;
}
*/


// int main(void)
// {
// 	printf("%d x %d = %d\n", 5, 1, 5 * 1);
// 	printf("%d x %d = %d\n", 5, 2, 5 * 2);
// 	printf("%d x %d = %d\n", 5, 3, 5 * 3);
// 	printf("%d x %d = %d\n", 5, 4, 5 * 4);
// 	printf("%d x %d = %d\n", 5, 5, 5 * 5);

// 	return 0;
// }

// %d >>> ����
// int main(void)
// {
// 	printf("%d x %d = %2d\n", 5, 1, 5 * 1);
// 	printf("%d x %d = %2d\n", 5, 2, 5 * 2);
// 	printf("%d x %d = %2d\n", 5, 3, 5 * 3);
// 	printf("%d x %d = %2d\n", 5, 4, 5 * 4);
// 	printf("%d x %d = %2d\n", 5, 5, 5 * 5);
// }

// %lf >>> �Ǽ�
// int main(void)
// {
// 	printf("%lf x %2d = %5.2lf\n", 3.14, 1, 3.14 * 1);
// 	printf("%lf x %2d = %5.3lf\n", 3.14, 5, 3.14 * 5);
// 	printf("%lf x %2d = %5.4lf\n", 3.14, 10, 3.14 * 10);
// }

// int main(void)
// {
// 	printf("%5.2lf x %2d = %5.2lf \n", 3.14, 1, 3.14 * 1);
// 	printf("%5.2lf x %2d = %5.2lf \n", 3.14, 5, 3.14 * 5);
// 	printf("%5.2lf x %2d = %5.2lf \n", 3.14, 10, 3.14 * 10);

// 	return 0;
// }

// %s >>> ���ڿ�
// int main(void)
// {
// 	printf("%s\n", "hello world");

// 	return 0;
// }


// ���� ����
// ���� ����� ������ �̸��� ���亪(��ҹ��� ����) | ���� | ����� �θ� ����
// ������ ������ ���ڷ� ������ ���� ����.
// int main(void)
// {
// 	int num1, num2; // ���� num1, num2 ����
// 	int num3 = 30, num4 = 40; // ���� num3, num4 ���� �� �ʱ�ȭ

// 	printf("num1: %d, num2: %d, num3: %d, num4: %d \n", num1, num2, num3, num4);

// 	num1 = 10; // ���� num1 �ʱ�ȭ (�ʱ�ȭ ������ ���� �����Ͱ� ������ �ԷµǾ� �ִ�.)
// 	num2 = 20; // ���� num2 �ʱ�ȭ

// 	printf("num1: %d, num2: %d, num3: %d, num4: %d \n", num1, num2, num3, num4);

// 	return 0;
// }

// int main(void)
// {
// 	int Num = 0, num = 1;

// 	printf("Num: %d, num: %d \n", Num, num);

// 	return 0;
// }


// scan
// int main(void)
// {
// 	int result;
// 	int num1, num2, num3;
// 	scanf("%d %d %d", &num1, &num2, &num3);

// 	result = num1 + num2 + num3;

// 	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
// 	return 0;
// }

int main(void)
{
	int a;

	printf("���� �Է�: ");
	scanf("%d", &a);
	printf("%d�� ����: %d\n", a, a*a);

	return 0;
}