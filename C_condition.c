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


// 삼항 연산자 - (condition) ? (result1) : (result2) * condition == True > result1 else result2
void ternary(void)
{
    int num, abs;

    printf("정수 입력: ");
    scanf("%d", &num);

    abs = (num >= 0) ? (num) : (num * -1);

    printf("%d의 절대값: %d\n", num, abs);
}


// break문
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


// continue문 - 1 ~ 30의 정수 중, 2와 3의 배수가 아닌 수만 출력
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

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    diff = (num1 >= num2) ? (num1-num2) : (num2-num1);

    printf("연산 결과: %d\n", diff);
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
switch statements - case문?

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

    printf("1부터 3까지의 정수 중 하나 입력: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("1은 one\n");
            break;

        case 2:
            printf("2는 two\n");
            break;

        case 3:
            printf("3은 three\n");
            break;

        default:
            printf("I done't know! \n");
    }
}


// 연습문제!
void solution1(void)
{
    int a, b, c, sum, target, cnt = 0;
    // 크림방 500원, 새우깡 700원, 콜라 400원

    printf("주머니에 있는 금액 입력: ");
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
                    printf("크림빵 %d, 새우깡 %d, 콜라 %d\n", a, b, c);
                }
            }
                
        }
    }

    if (cnt == 0)
    {
        printf("불가능\n");
    }
}


// 소수를 찾는 문제
void solution2(void)
{
    int num;

    printf("정수 입력: ");
    scanf("%d", &num);

    
    printf("%lf", pow((double)num, 0.5));
}


// 시간 - 초 변환 문제
void solution3(void)
{
    int t, m, s;

    printf("초 입력: ");
    scanf("%d", &s);

    t = s / 3600;
    s = s % 3600;

    m = s / 60;
    s = s % 60;

    if (t > 0)
    {
        printf("%d시간", t);
    }
    if (m > 0)
    {
        printf(" %d분", m);
    }
    if (s > 0)
    {
        printf(" %d초", s);
    }
    printf("\n");
}


// 지수 계산
void solution4(void)
{
    int n, k, val;

    printf("정수 입력: ");
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
        // printf("2의 %d 제곱: %d\n", k, val);
    }

    printf("k의 최댓값: %d\n", k-1);

    if (val < n)
    {
        printf("입력 값과 일치하는 결과 값 도출 불가능\n");
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