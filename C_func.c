#include <stdio.h>

/*
1. �Լ�
*/

int prinf_func(void)
{
    int num1, num2;

    num1 = printf("12345 \n");
    num2 = printf("I like sports \n");

    // num1 ��ü�� printf �Լ��� ��� ���̴�.
    // �� ���, printf�� ��� �۾� �ܿ� ���� ������ ����� ���ڿ��� ���̸� ��ȯ�Ѵ�.
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);

    return 0;
}


/*
2. �Լ��� ����
    - ���� ����(O) > ��ȯ ��(O)
    - ���� ����(O) > ��ȯ ��(X)
    - ���� ����(X) > ��ȯ ��(O)
    - ���� ����(X) > ��ȯ ��(X)
*/

// �Լ��� ���� 1. ���� ����(O) > ��ȯ ��(O)
// ���� + ������ ����� ������ ������ ���̹Ƿ� �Լ��� ���ؼ� int �ڷ����� �ο��Ѵ�.
int Add(int num1, int num2)
{
    return num1 + num2;
}

// �Լ��� ���� 2. ���� ����(O) > ��ȯ ��(X)
// ���� ���� ���� �Լ��̹Ƿ� void Ÿ���� �ο��Ѵ�.
void show_add_result(int num)
{
    printf("���� ��� ���: %d \n", num);
}

// �Լ��� ���� 3. ���� ����(X) > ��ȯ ��(O)
int read_num(void)
{
    int num;
    scanf("%d", &num); // scanf �Լ��� �۵� ��Ŀ� ���� ���� ���� �ƴ�, ���� ���� ����Ǿ� �ִ� �ּҸ� �����ؾ��Ѵ�.

    return num;
}

// �Լ��� ���� 4. ���� ����(X) > ��ȯ ��(X)
void explain(void)
{
    printf("�� ���� ���� �Է�: ");
}


int f1(void)
{
    int num1, num2, sum;
    explain();

    num1 = read_num(), num2 = read_num();
    sum = Add(num1, num2);
    show_add_result(sum);

    return 0;
}

/*
3. �Լ��� ����

�⺻�����δ� ������ �Ʒ���, �Լ��� ��ġ�ؾ� �Ѵ�.
������� ���� �Լ��� ���� ������ �� ��� ������ �߻��ϱ� �����̴�.

������ ������ �̸� �Լ��� �������ָ� �ڿ� ���� �Լ��� �̸� ��ġ�� �� �ְ� �ȴ�.
*/

int number_compare(int num1, int num2); // ���� ��ġ���� ���� �Լ������� �̸� ���� (�Ű��������� ���� ����)
int abs_compare(int, int);
int get_abs_val(int);

int f2(void)
{
    printf("3�� 8 �߿��� ū ���� %d �̴�. \n", number_compare(3, 8));
    printf("7�� 4 �߿��� ū ���� %d �̴�. \n", number_compare(7, 4));

    int num1, num2;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &num1, &num2);
    printf("%d �� %d �� ���밪�� ū ����: %d \n", num1, num2, abs_compare(num1, num2));

    return 0;
}

int number_compare(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int abs_compare(int num1, int num2)
{
    if (get_abs_val(num1) > get_abs_val(num2))
        return num1;
    else
        return num2;
}

int get_abs_val(int num)
{
    if (num < 0)
        return num * (-1);
    else
        return num;    
}


/*
4. �ǽ�
*/
// ��� ��
int val_compare(int, int, int);

int f3(void)
{
    int num1, num2, num3;
    printf("�� ���� ���� �Է�: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d %d \n", val_compare(num1, num2, num3));

    return 0;
}

int val_compare(int num1, int num2, int num3)
{
    int large_num, small_num;

    large_num = num1;
    if (large_num < num2)
        large_num = num2;
    if (large_num < num3)
        large_num = num3;

    small_num = num1;
    if (small_num > num2)
        small_num = num2;
    if (small_num > num3)
        small_num = num3;

    return large_num, small_num;
    
}


// �Ǻ���ġ  ����
void fibo(int num)
{
    int f0 = 0, f1 = 1, f2;
    int i = 0;
    
    while (i != num)
    {
        printf("%d ", f0);

        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;

        i++;
    }
    printf("\n");
}

int f4(void)
{
    int n;

    printf("����ϰ��� �ϴ� �Ǻ���ġ ���� ����: ");
    scanf("%d", &n);

    fibo(n);

    return 0;
}


/*
5. ���� ���� & ���� ����

- for ���� �߰�ȣ �ȿ��� ����� ������ ���� �����̴�. 
*/
int simple_func_1(void);
int simple_func_2(void);

int f5(void)
{
    // f5 ������ ����� num ������, simple_func_1 �Լ� ������ ����� num ����
	int num = 10;
	simple_func_1();
	simple_func_2();
	
	printf("main num: %d\n", num);
	
	return 0;
}

int simple_func_1(void)
{
	int num = 20;
	num++;
	
	printf("simple_func_1 num: %d\n", num);
	
	return 0;
}

int simple_func_2(void)
{
	int num1 = 30, num2 = 40;
	num1++, num2--;
	
	printf("num1 & num2: %d %d\n", num1, num2);
	
	return 0;
}


int f6(void)
{
    int num = 1;

    if (num == 1)
    {
        int num = 7;
        num += 10;

        printf("if �� �� ���� ���� num: %d\n", num);
    }

    printf("f6 �Լ� �� ���� ���� num: %d\n", num);
}


void add_f7(int);
int num; // �Լ� �ܺο��� �����ϴ� ���� ����, Ư�� ������ �ʱ�ȭ���� ���� ��� 0���� �ʱ�ȭ

int f7(void)
{
    printf("num: %d\n", num); // num == 0
    
    add_f7(7);
    printf("num: %d\n", num); // num == 7
    
    num++;
    printf("num: %d\n", num); // num == 8

    return 0;
}

void add_f7(int val)
{
    num += val;
}


/*
6. static ����

���α׷��� �۵��ϴ� ����, ���ʿ��� �ʱ�ȭ�ǰ� �� �Ŀ��� �ٽ� �����ص� �ʱ�ȭ�� ���� �ʴ´�.
*/
void static_simple(void);

int f8(void)
{
    int i;

    for (i = 0; i < 3; i++)
        static_simple();

    return 0;
}

void static_simple(void)
{
    static int num1 = 0; // �� �� 0���� ���� �� �Ŀ���, �ݺ����� ���Ƶ� 0���� �ʱ�ȭ ���� �ʴ´�.
    int num2 = 0;

    num1++, num2++;

    printf("static: %d, local: %d\n", num1, num2);
}


/*
7. recursive functions
*/
void recursive(int);
int factorial(int);

int f9(void)
{
    recursive(3);

    printf("5! = %d\n", factorial(5));

    return 0;
}

void recursive(int num)
{
    if (num <= 0)
        return;

    printf("recursive call! %d\n", num);
    recursive(num-1);
}

int factorial(int num)
{
    if (num == 0)
        return 1;
    else
        return factorial(num-1) * num;
}


// �������� 1. 2�� �ŵ����� ���ϱ� 2^0 ~ 2^9 (����Լ��� �̿��ؼ�)
int power(int);

int f10(void)
{
    int num, result;

    for (num = 0; num <= 9; num++)
    {
        result = power(num);
        printf("2�� %d ����: %d\n", num, result);
    }
}

int power(int num)
{
    if (num == 0)
        return 1;
    else
        return power(num-1) * 2;
}



// main �Լ��� ���������� �� �ڵ� ������ �������� �� �۵��ϴ� �Լ�
// �ٸ� �Լ��� ���� �����ص� �۵����� ������, main �Լ��� �ڵ� ���� �ÿ� �۵� (�ణ __init__ �̶� ����� ����?)
int main(void)
{
    // prinf_func();
    // f1();
    // f2();
    // f3();
    // f4();
    // f5();
    // f6();
    // f7();
    // f8();
    // f9();
    f10();
}
