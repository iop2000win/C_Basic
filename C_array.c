#include <stdio.h>

int f1(void)
{
	int arr[5];
	int i, sum = 0;
	
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	for (i = 0; i < 5; i++)
	{	
		sum += arr[i];

		printf("배열의 %d번째 원소: %d\n", i, arr[i]);
	}

	printf("배열 원소의 합: %d \n", sum);
	
	return 0;
}


/*
1. 배열의 초기화

int arr1[5] = {1, 2, 3, 4, 5};	>>> 1, 2, 3, 4, 5
int arr2[5] = {1, 2};		 	>>> 1, 2, 0, 0, 0
int arr3[]  = {1, 2, 3, 4, 5};	>>> int arr3[5] = {1, 2, 3, 4, 5};
*/ 


int f2(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[ ] = {1, 2, 3, 4, 5, 6, 7};
	int arr3[5] = {1, 2};	// 크기 5의 배열 생성, 입력된 값을 제외한 나머지 공간은 0으로 채워진다.
	int arr4[5] = {};		// 크기 5의 배열 생성, 원소는 0으로 채워진다.
	int arr5[5]; 			// 크기 5의 배열 생성, 원소는 임의의 값으로 채워진다.
	int arr1_len, arr2_len, arr3_len, arr4_len, arr5_len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));
	printf("배열 arr4의 크기: %d \n", sizeof(arr4));
	printf("배열 arr5의 크기: %d \n", sizeof(arr5));

	arr1_len = sizeof(arr1) / sizeof(int);
	arr2_len = sizeof(arr2) / sizeof(int);
	arr3_len = sizeof(arr3) / sizeof(int);
	arr4_len = sizeof(arr4) / sizeof(int);
	arr5_len = sizeof(arr5) / sizeof(int);

	printf("\n배열 arr1: ");
	for (i = 0; i < arr1_len; i++)
		printf("%d ", arr1[i]);

	printf("\n배열 arr2: ");
	for (i = 0; i < arr2_len; i++)
		printf("%d ", arr2[i]);

	printf("\n배열 arr3: ");
	for (i = 0; i < arr3_len; i++)
		printf("%d ", arr3[i]);

	printf("\n배열 arr4: ");
	for (i = 0; i < arr4_len; i++)
		printf("%d ", arr4[i]);

	printf("\n배열 arr5: ");
	for (i = 0; i < arr5_len; i++)
		printf("%d ", arr5[i]);

	printf("\n");

	return 0;
}


/*
2. char형 배열의 문자열
*/
int f3(void)
{
	char str[] = "Good morning!";
	int i;

	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("배열 str: %s\n", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("배열의 %2d번째 원소: %c\n", i, str[i]);
	}

	printf("널 문자 문자형 출력: %c \n", str[13]);
	printf("널 문자 정수형 출력: %d \n", str[13]);
	
	str[12] = '?';
	printf("문자열 출력: %s \n", str);
	
	return 0;
}


int null_check(void)
{
	char nu = '\0';
	char space = ' ';
	
	printf("%d %d \n", nu, space);

	return 0;
}


int f4(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str); // space를 입력 받지 못한다.
	printf("입력 받은 문자열: %s\n", str);

	printf("문자 단위 출력: ");

	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}


int f5(void)
{
	char str[50] = "I like C language";
	printf("string: %s\n", str);

	str[8] = '\0';
	printf("string: %s\n", str);

	str[6] = '\0';
	printf("string: %s\n", str);

	str[1] = '\0';
	printf("string: %s\n", str);

	return 0;
}


int f6(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("입력 받은 문자열: %s\n", str);

	printf("문자 단위 출력: ");

	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}


/*
3. 연습문제
*/
int f7(void)
{
	int arr[5];
	int i, sum, max, min;

	printf("정수 5개 입력: ");
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0, sum = 0; i < 5; i++)
	{
		sum += arr[i];

		if (i == 0)
		{
			max = arr[i];
			min = arr[i];
		}
		else
		{
			if (max < arr[i])
				max = arr[i];

			if (min > arr[i])
				min = arr[i];
		}
	}

	printf("총 합: %d\n", sum);
	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);
}


int f8(void)
{
	char str[50];
	int l;

	printf("영어 단어 입력: ");
	scanf("%s", &str);

	for (l = 1; str[l] != '\0'; l++)
	{
		continue;
	}

	printf("입력된 영어 단어의 길이: %d\n", l);
}


int f9(void)
{
	char str[50];
	int l;

	printf("영어 단어 입력: ");
	scanf("%s", str); // 배열의 경우 &기호를 통해 주소값으로 입력해주지 않아도 된다.

	for (l = 1; str[l] != '\0'; l++)
	{
		continue;
	}

	for (l; l > 0; l--)
	{
		// printf("%d", l-1);
		printf("%c", str[l-1]);
	}
	printf("\n");
}


/*
4. 다차원 배열
*/
void f10(void)
{
	int arr1[3][4];
	int arr2[7][9];

	printf("세로 3, 가로 4: %d\n", sizeof(arr1));
	printf("세로 7, 가로 9: %d\n", sizeof(arr2));

	return;
}


void f11(void)
{
	int villa[3][2], popu, i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수: ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}
	printf("-------------------------\n");

	for (i = 0; i < 3; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];

		printf("%d층 인구수: %d\n", i+1, popu);
	}

	return;
}


void f12(void) // 2차원 배열의 메모리 할당 형태를 확인
{
	int arr[3][2];
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			printf("%p\n", &arr[i][j]); // %p: 주소 값을 처리하는 서식 문자

	return;
}


void f13(void)
{
	int i, j;
	int arr1[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int arr2[3][3] = {
		{1}, // 채우지 않은 빈 공간은 0으로 채워짐
		{4, 5},
		{7, 8, 9}
	};

	int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7};
	// 다차원 배열로 표현하지 않았을 경우에는 순서대로 채워짐

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
	}
	printf("------\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}
	printf("------\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
	printf("------\n");
}


void f14(void)
{
	int arr1[2][3][5]; // int - 4byte
	double arr2[4][5][6]; // double - 8byte

	printf("높이 2, 세로 3, 가로 5 int 형 배열: %d\n", sizeof(arr1));
	printf("높이 4, 세로 5, 가로 6 double 형 배열: %d\n", sizeof(arr2));
}


void f15(void)
{
	int mean = 0, i, j;
	int record[3][3][2] = {
		{
			{50, 80},
			{90, 70},
			{40, 60}
		},
		{
			{90, 80},
			{90, 100},
			{80, 80}
		},
		{
			{60, 90},
			{70, 70},
			{80, 70}
		}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("1 학급 전체 평균: %g\n", (double) mean/6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("2 학급 전체 평균: %g\n", (double) mean/6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("3 학급 전체 평균: %g\n", (double) mean/6);
}


/*
5. 실습
*/
void ex1(void)
{
	int arr1[3][9];
	int i, j, val;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 9; j++)
		{
			val = (i+2) * (j+1);
			arr1[i][j] = val;
		}

	for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 9; j++)
				printf("%2d ", arr1[i][j]);

		printf("\n");
		}
}


void ex2(void)
{
	int arr_A[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	int arr_B[3][2];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			arr_B[j][i] = arr_A[i][j];
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arr_B[i][j]);

		printf("\n");
	}
		
}


void ex3(void)
{
	int arr[10], arr_odd[10], arr_even[10];
	int i, odd_len = 0, even_len = 0;

	printf("열 개의 자연수 입력: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr_odd[odd_len] = arr[i];
			odd_len += 1;
		}
		else
		{
			arr_even[even_len] = arr[i];
			even_len += 1;
		}
	}

	printf("짝수: ");
	for (i = 0; i < even_len; i++)
		printf("%2d ", arr_even[i]);
	
	printf("\n홀수: ");
	for (i = 0; i < odd_len; i++)
		printf("%2d ", arr_odd[i]);

	printf("\n");
}


void ex4(void)
{
	int arr[10], arr_multi_2[10], arr_multi_5[10];
	int i, multi_2_len = 0, multi_5_len = 0;

	printf("열 개의 자연수 입력: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr_multi_2[multi_2_len] = arr[i];
			multi_2_len += 1;
		}

		if (arr[i] % 5 == 0)
		{
			arr_multi_5[multi_5_len] = arr[i];
			multi_5_len += 1;
		}
	}

	printf("2의 배수: ");
	for (i = 0; i < multi_2_len; i++)
		printf("%2d ", arr_multi_2[i]);
	
	printf("\n5의 배수: ");
	for (i = 0; i < multi_5_len; i++)
		printf("%2d ", arr_multi_5[i]);

	printf("\n");
}


void ex5(void)
{
	int arr[10];
	int i, odd_cnt = 0, even_cnt = 0, odd_sum = 0, even_sum = 0;

	printf("열 개의 자연수 입력: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	// 짝수 출력
	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
			even_cnt += 1;
			even_sum += arr[i];
		}
	}
	// 홀수 출력
	printf("\n홀수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
		{
			printf("%d ", arr[i]);
			odd_cnt += 1;
			odd_sum += arr[i];
		}
	}
	// 짝수의 개수 & 홀수의 개수 / 짝수의 합 & 홀수의 합 출력
	printf("\n짝수의 개수: %d", even_cnt);
	printf("\n홀수의 개수: %d", odd_cnt);
	printf("\n짝수의 합: %d", even_sum);
	printf("\n홀수의 합: %d", odd_sum);

	// 2의 배수 출력
	printf("\n2의 배수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	// 5의 배수 출력
	printf("\n5의 배수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 5 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	// 2와 5의 공배수 출력
	printf("\n2와 5의 공배수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0 & arr[i] % 5 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	// 2의 배수이거나 5의 배수인 수 출력
	printf("\n2 or 5의 배수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0 | arr[i] % 5 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}


void ex6(void)
{
	int i, num, binary_array[8] = {};

	printf("자연수 입력: ");
	scanf("%d", &num);

	for (i = 7; num >= 1; i--)
	{
		if (num % 2 == 0)
			binary_array[i] = 0;
		else
			binary_array[i] = num % 4;

		num /= 2;
	}

	for (i = 0; i < 8; i++)
	{
		printf("%d ", binary_array[i]);
	}
}


void ex7(void)
{
	int i, num, binary_array[8] = {};

	printf("자연수 입력: ");
	scanf("%d", &num);

	for (i = 7; num >= 1; i--)
	{
		if (num % 4 == 0)
			binary_array[i] = 0;
		else
			binary_array[i] = num % 4;

		num /= 4;
	}

	for (i = 0; i < 8; i++)
	{
		printf("%d ", binary_array[i]);
	}
}


void ex8(void)
{
	int i, num, arr[10];

	printf("열 개의 자연수 입력: ");
	int f_idx = 0, b_idx = 9;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num);

		if (num % 2 == 1)
		{
			arr[f_idx] = num;
			f_idx += 1;
		}
		else
		{
			arr[b_idx] = num;
			b_idx -= 1;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	printf("\n");
}

int main(void)
{
	// f1();
	// f2();
	// f3();
	// null_check();
	// f4();
	// f5();
	// f6();
	// f7();
	// f8();
	// f9();
	// f10();
	// f11();
	// f12();
	// f13();
	// f14();
	// f15();
	// ex1();
	// ex2();
	// ex3();
	// ex4();
	// ex5();
	// ex6();
	// ex7();
	ex8();
}