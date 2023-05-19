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

// 정수 입력을 받은 뒤, 양수 / 음수 확인
void pos_neg_check(void)
{
    int num;

    printf("정수 입력: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d : 음의 정수\n", num);
    }
    else if (num == 0)
    {
        printf("%d : 0\n", num);
    }
    else
    {
        printf("%d : 양의 정수\n", num);
    }
}


// 계산기 프로그램
void calculator(void)
{
    int optn;
    printf("덧셈(1), 뺄셈(2), 곱셈(3), 나눗셈(4) 중에서 1개 선택: ");
    scanf("%d", &optn);
    
    double num1, num2, result;
    printf("실수 2개 입력: ");
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

    printf("결과: %.2lf", result);
}


// 1부터 100까지의 정수 중, 3과 4의 배수 출력
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


// 대소 비교
void compare_num(void)
{
    int num1, num2;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    if (num1 >= num2)
    {
        printf("연산 결과: %d\n", num1-num2);
    }
    else
    {
        printf("연산 결과: %d\n", num2-num1);
    }
}


// 평균 계산
void get_average(void)
{
    int lang_score, eng_score, math_score;
    double avg;
    char grade;

    printf("국어, 영어, 수학 점수 입력: ");
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

    printf("평균: %lf\n", avg);
    printf("학점: %c\n", grade);
}




int main(void)
{
    // pos_neg_check();
    // calculator();
    // multiples_of_num();
    // compare_num();
    get_average();
}