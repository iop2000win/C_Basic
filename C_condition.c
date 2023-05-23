#include <stdio.h>
#include <math.h>

/*
========================================================================
if statements

if (expression)
{
    statements
}
========================================================================
*/

// ���� �Է��� ���� ��, ��� / ���� Ȯ��
void pos_neg_check(void)
{
    int num;

    printf("���� �Է�: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d : ���� ����\n", num);
    }
    else if (num == 0)
    {
        printf("%d : 0\n", num);
    }
    else
    {
        printf("%d : ���� ����\n", num);
    }
}


// ���� ���α׷�
void calculator(void)
{
    int optn;
    printf("����(1), ����(2), ����(3), ������(4) �߿��� 1�� ����: ");
    scanf("%d", &optn);
    
    double num1, num2, result;
    printf("�Ǽ� 2�� �Է�: ");
    scanf("%lf %lf", &num1, &num2);

    if (optn == 1)
    {
        result = num1 + num2;
    }
    else if (optn == 2)
    {
        result = num1 - num2;
    }
    else if (optn == 3)
    {
        result = num1 * num2;
    }
    else if (optn == 4)
    {
        result = num1 / num2;
    }
    else
    {
    }

    printf("���: %.2lf", result);
}


// 1���� 100������ ���� ��, 3�� 4�� ��� ���
void multiples_of_num(void)
{
    int num;
    
    for (num = 1; num <= 100; num++)
    {
        if (num%3 == 0 || num%4 == 0)
        {
            printf("%d ", num);
        }
    }
}


// ��� ��
void compare_num(void)
{
    int num1, num2;

    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &num1, &num2);

    if (num1 >= num2)
    {
        printf("���� ���: %d\n", num1-num2);
    }
    else
    {
        printf("���� ���: %d\n", num2-num1);
    }
}


// ��� ���
void get_average(void)
{
    int lang_score, eng_score, math_score;
    double avg;
    char grade;

    printf("����, ����, ���� ���� �Է�: ");
    scanf("%d %d %d", &lang_score, &eng_score, &math_score);

    avg = (lang_score + eng_score + math_score) / 3.0;

    if (avg >= 90)
    {
        grade = 'A';
    }
    else if (avg >= 80)
    {
        grade = 'B';
    }
    else if (avg >= 70)
    {
        grade = 'C';
    }
    else if (avg >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("���: %lf\n", avg);
    printf("����: %c\n", grade);
}


// ���� ������ - (condition) ? (result1) : (result2) * condition == True > result1 else result2
void ternary(void)
{
    int num, abs;

    printf("���� �Է�: ");
    scanf("%d", &num);

    abs = (num >= 0) ? (num) : (num * -1);

    printf("%d�� ���밪: %d\n", num, abs);
}


// break��
void break_basic(void)
{
    int num = 1, sum = 0;

    while (1)
    {
        sum += num;

        if (sum > 5000)
            break;
        
        num ++;
    }

    printf("num: %d, sum: %d\n", num, sum);
}


// continue�� - 1 ~ 30�� ���� ��, 2�� 3�� ����� �ƴ� ���� ���
void continue_basic(void)
{
    int num;

    for (num = 1; num <= 30; num ++)
    {
        if (num % 2 == 0 || num % 3 == 0)
            continue;

        printf("%d ", num);
    }
    printf("\n");
}


// ex
void cal_diff(void)
{
    int num1, num2, diff;

    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &num1, &num2);

    diff = (num1 >= num2) ? (num1-num2) : (num2-num1);

    printf("���� ���: %d\n", diff);
}

void find_odd(void)
{
    int num;

    for (num = 1; num <= 100; num ++)
    {
        if (num % 2 == 1)
            printf("%d ", num);
        else
            continue;
    }
    printf("\n");
}

void even_times_table(void)
{
    int num, i;

    for (num = 2; num <= 9; num ++)
    {
        if (num % 2 != 0)
            continue;

        for (i = 1; i <= num; i ++)
            printf("%2d x %2d = %2d\n", num, i, num * i);
        
        printf("\n");
    }
}

void f1(void)
{
    int a, z, AZ, ZA;

    for (a = 0; a <= 9; a++)
    {
        for (z = 0; z <= 9; z++)
        {
            AZ = a * 10 + z;
            ZA = z * 10 + a;

            if (AZ + ZA == 99)
            {
                printf("%d%d + %d%d = %d\n", a, z, z, a, AZ+ZA);
            }
            else
                continue;
        }
    }
}


/*
========================================================================
switch statements - case��?

switch (expression)
{
    case statements

    case statements

    default: statements
}
========================================================================
*/
void switch_basic(void)
{
    int num;

    printf("1���� 3������ ���� �� �ϳ� �Է�: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("1�� one\n");
            break;

        case 2:
            printf("2�� two\n");
            break;

        case 3:
            printf("3�� three\n");
            break;

        default:
            printf("I done't know! \n");
    }
}


// ��������!
void solution1(void)
{
    int a, b, c, sum, target, cnt = 0;
    // ũ���� 500��, ����� 700��, �ݶ� 400��

    printf("�ָӴϿ� �ִ� �ݾ� �Է�: ");
    scanf("%d", &target);

    for (a = 1; a * 500 < target; a++)
    {
        for (b = 1; b * 700 < target; b++)
        {
            for (c = 1; c * 400 < target; c++)
            {
                if (a * 500 + b * 700 + c * 400 == target)
                {
                    cnt += 1;
                    printf("ũ���� %d, ����� %d, �ݶ� %d\n", a, b, c);
                }
            }
                
        }
    }

    if (cnt == 0)
    {
        printf("�Ұ���\n");
    }
}


// �Ҽ��� ã�� ����
void solution2(void)
{
    int num;

    printf("���� �Է�: ");
    scanf("%d", &num);

    
    printf("%lf", pow((double)num, 0.5));
}


// �ð� - �� ��ȯ ����
void solution3(void)
{
    int t, m, s;

    printf("�� �Է�: ");
    scanf("%d", &s);

    t = s / 3600;
    s = s % 3600;

    m = s / 60;
    s = s % 60;

    if (t > 0)
    {
        printf("%d�ð�", t);
    }
    if (m > 0)
    {
        printf(" %d��", m);
    }
    if (s > 0)
    {
        printf(" %d��", s);
    }
    printf("\n");
}


// ���� ���
void solution4(void)
{
    int n, k, val;

    printf("���� �Է�: ");
    scanf("%d", &n);

    for (k = 0, val = 1; val * 2 <= n; k += 1)
    {
        if (k == 0)
        {
            val = 1;
        }
        else
        {
            val = val * 2;
        }
        // printf("2�� %d ����: %d\n", k, val);
    }

    printf("k�� �ִ�: %d\n", k-1);

    if (val < n)
    {
        printf("�Է� ���� ��ġ�ϴ� ��� �� ���� �Ұ���\n");
    }
}



int main(void)
{
    // pos_neg_check();
    // calculator();
    // multiples_of_num();
    // compare_num();
    // get_average();
    // ternary();
    // break_basic();
    // continue_basic();
    // cal_diff();
    // find_odd();
    // even_times_table();
    // f1();
    // switch_basic();
    // solution1();
    // solution2();
    // solution3();
    solution4();
}