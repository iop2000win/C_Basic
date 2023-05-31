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
	scanf("%s", &str);

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
	f9();
}