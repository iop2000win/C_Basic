#include <stdio.h>

/*
1. 함수
*/

int prinf_func(void)
{
    int num1, num2;

    num1 = printf("12345 \n");
    num2 = printf("I like sports \n");

    // num1 자체가 printf 함수의 결과 값이다.
    // 이 경우, printf의 출력 작업 외에 리턴 값으로 출력한 문자열의 길이를 반환한다.
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);

    return 0;
}


/*
2. 함수의 유형
    - 전달 인자(O) > 반환 값(O)
    - 전달 인자(O) > 반환 값(X)
    - 전달 인자(X) > 반환 값(O)
    - 전달 인자(X) > 반환 값(X)
*/

// 함수의 유형 1. 전달 인자(O) > 반환 값(O)
// 정수 + 정수의 결과로 정수를 리턴할 것이므로 함수에 대해서 int 자료형을 부여한다.
int Add(int num1, int num2)
{
    return num1 + num2;
}

// 함수의 유형 2. 전달 인자(O) > 반환 값(X)
// 리턴 값이 없는 함수이므로 void 타입을 부여한다.
void show_add_result(int num)
{
    printf("덧셈 결과 출력: %d \n", num);
}

// 함수의 유형 3. 전달 인자(X) > 반환 값(O)
int read_num(void)
{
    int num;
    scanf("%d", &num); // scanf 함수의 작동 방식에 의해 변수 값이 아닌, 변수 값이 저장되어 있는 주소를 전달해야한다.

    return num;
}

// 함수의 유형 4. 전달 인자(X) > 반환 값(X)
void explain(void)
{
    printf("두 개의 정수 입력: ");
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
3. 함수의 선언

기본적으로는 위에서 아래로, 함수를 배치해야 한다.
선언되지 않은 함수가 먼저 컴파일 될 경우 에러가 발생하기 때문이다.

하지만 위에서 미리 함수를 선언해주면 뒤에 나올 함수를 미리 배치할 수 있게 된다.
*/

int number_compare(int num1, int num2); // 아직 배치되지 않은 함수이지만 미리 선언 (매개변수명은 생략 가능)
int abs_compare(int, int);
int get_abs_val(int);

int f2(void)
{
    printf("3과 8 중에서 큰 수는 %d 이다. \n", number_compare(3, 8));
    printf("7과 4 중에서 큰 수는 %d 이다. \n", number_compare(7, 4));

    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("%d 와 %d 중 절대값이 큰 정수: %d \n", num1, num2, abs_compare(num1, num2));

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
4. 실습
*/
// 대소 비교
int val_compare(int, int, int);

int f3(void)
{
    int num1, num2, num3;
    printf("세 개의 정수 입력: ");
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


// 피보나치  수열
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

    printf("출력하고자 하는 피보나치 수열 갯수: ");
    scanf("%d", &n);

    fibo(n);

    return 0;
}


/*
5. 지역 변수 & 전역 변수

- for 문의 중괄호 안에서 선언된 변수도 지역 변수이다. 
*/
int simple_func_1(void);
int simple_func_2(void);

int f5(void)
{
    // f5 내에서 선언된 num 변수와, simple_func_1 함수 내에서 선언된 num 변수
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

        printf("if 문 내 지역 변수 num: %d\n", num);
    }

    printf("f6 함수 내 지역 변수 num: %d\n", num);
}


void add_f7(int);
int num; // 함수 외부에서 선언하는 전역 변수, 특정 값으로 초기화하지 않을 경우 0으로 초기화

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
6. static 변수

프로그램이 작동하는 동안, 최초에만 초기화되고 그 후에는 다시 선언해도 초기화가 되지 않는다.
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
    static int num1 = 0; // 이 때 0으로 선언 된 후에는, 반복문이 돌아도 0으로 초기화 되지 않는다.
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


// 연습문제 1. 2의 거듭제곱 구하기 2^0 ~ 2^9 (재귀함수를 이용해서)
int power(int);

int f10(void)
{
    int num, result;

    for (num = 0; num <= 9; num++)
    {
        result = power(num);
        printf("2의 %d 제곱: %d\n", num, result);
    }
}

int power(int num)
{
    if (num == 0)
        return 1;
    else
        return power(num-1) * 2;
}



// main 함수는 최종적으로 이 코드 파일을 실행했을 때 작동하는 함수
// 다른 함수의 경우는 선언해도 작동하지 않지만, main 함수는 코드 실행 시에 작동 (약간 __init__ 이랑 비슷한 느낌?)
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
