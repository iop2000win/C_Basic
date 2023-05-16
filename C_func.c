#include <stdio.h>

// 1. 함수

// // main 함수는 최종적으로 이 코드 파일을 실행했을 때 작동하는 함수
// // 다른 함수의 경우는 선언해도 작동하지 않지만, main 함수는 코드 실행 시에 작동 (약간 __init__ 이랑 비슷한 느낌?)
// int main(void)
// {
//     int num1, num2;

//     num1 = printf("12345 \n");
//     num2 = printf("I like sports \n");

//     // num1 자체가 printf 함수의 결과 값이다.
//     // 이 경우, printf의 출력 작업 외에 리턴 값으로 출력한 문자열의 길이를 반환한다.
//     printf("num1 = %d \n", num1);
//     printf("num2 = %d \n", num2);

//     return 0;
// }


// 2. 함수의 유형

// // 함수의 유형 1. 전달 인자(O) > 반환 값(O)
// // 정수 + 정수의 결과로 정수를 리턴할 것이므로 함수에 대해서 int 자료형을 부여한다.
// int Add(int num1, int num2)
// {
//     return num1 + num2;
// }

// // 함수의 유형 2. 전달 인자(O) > 반환 값(X)
// // 리턴 값이 없는 함수이므로 void 타입을 부여한다.
// void show_add_result(int num)
// {
//     printf("덧셈 결과 출력: %d \n", num);
// }

// // 함수의 유형 3. 전달 인자(X) > 반환 값(O)
// int read_num(void)
// {
//     int num;
//     scanf("%d", &num); // scanf 함수의 작동 방식에 의해 변수 값이 아닌, 변수 값이 저장되어 있는 주소를 전달해야한다.

//     return num;
// }

// // 함수의 유형 4. 전달 인자(X) > 반환 값(X)
// void explain(void)
// {
//     printf("두 개의 정수 입력: ");
// }


// int main(void)
// {
//     int num1, num2, sum;
//     explain();

//     num1 = read_num(), num2 = read_num();
//     sum = Add(num1, num2);
//     show_add_result(sum);

//     return 0;
// }


// // 3. 함수의 선언
// /*
// 기본적으로는 위에서 아래로, 함수를 배치해야 한다.
// 선언되지 않은 함수가 먼저 컴파일 될 경우 에러가 발생하기 때문이다.

// 하지만 위에서 미리 함수를 선언해주면 뒤에 나올 함수를 미리 배치할 수 있게 된다.
// */

// int number_compare(int num1, int num2); // 아직 배치되지 않은 함수이지만 미리 선언 (매개변수명은 생략 가능)
// int abs_compare(int, int);
// int get_abs_val(int);

// int main(void)
// {
//     printf("3과 8 중에서 큰 수는 %d 이다. \n", number_compare(3, 8));
//     printf("7과 4 중에서 큰 수는 %d 이다. \n", number_compare(7, 4));

//     int num1, num2;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d 와 %d 중 절대값이 큰 정수: %d \n", num1, num2, abs_compare(num1, num2));

//     return 0;
// }

// int number_compare(int num1, int num2)
// {
//     if (num1 > num2)
//         return num1;
//     else
//         return num2;
// }

// int abs_compare(int num1, int num2)
// {
//     if (get_abs_val(num1) > get_abs_val(num2))
//         return num1;
//     else
//         return num2;
// }

// int get_abs_val(int num)
// {
//     if (num < 0)
//         return num * (-1);
//     else
//         return num;    
// }


// 4. 실습

int val_compare(int, int, int);

int main(void)
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