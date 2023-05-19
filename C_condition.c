#include <stdio.h>

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




int main(void)
{
    // pos_neg_check();
    // calculator();
    // multiples_of_num();
    // compare_num();
    get_average();
}