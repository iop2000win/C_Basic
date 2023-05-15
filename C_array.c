// #include <stdio.h>

// int main(void)
// {
// 	int arr[5];
// 	int i, sum = 0;
	
// 	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
// 	for (i = 0; i < 5; i++)
// 		sum += arr[i];
		
// 	printf("배열 원소의 합: %d \n", sum);
	
// 	return 0;
// }


// 배열의 초기화
/*
int arr1[5] = {1, 2, 3, 4, 5};	>>> 1, 2, 3, 4, 5
int arr2[5] = {1, 2};		 	>>> 1, 2, 0, 0, 0
int arr3[] = {1, 2, 3, 4, 5};	>>> int arr3[5] = {1, 2, 3, 4, 5};
*/ 

//# include <stdio.h>
//
//int main(void)
//{
//	int arr1[5] = {1, 2, 3, 4, 5};
//	int arr2[ ] = {1, 2, 3, 4, 5, 6, 7};
//	int arr3[5] = {1, 2};	// 크기 5의 배열 생성, 입력된 값을 제외한 나머지 공간은 0으로 채워진다.
//	int arr4[5] = {};		// 크기 5의 배열 생성, 원소는 0으로 채워진다.
//	int arr5[5]; 			// 크기 5의 배열 생성, 원소는 임의의 값으로 채워진다.
//	int arr1_len, arr2_len, arr3_len, arr4_len, arr5_len, i;
//
//	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
//	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
//	printf("배열 arr3의 크기: %d \n", sizeof(arr3));
//	printf("배열 arr4의 크기: %d \n", sizeof(arr4));
//	printf("배열 arr5의 크기: %d \n", sizeof(arr5));
//
//	arr1_len = sizeof(arr1) / sizeof(int);
//	arr2_len = sizeof(arr2) / sizeof(int);
//	arr3_len = sizeof(arr3) / sizeof(int);
//	arr4_len = sizeof(arr4) / sizeof(int);
//	arr5_len = sizeof(arr5) / sizeof(int);
//
//	printf("\n배열 arr1: ");
//	for (i = 0; i < arr1_len; i++)
//		printf("%d ", arr1[i]);
//
//	printf("\n배열 arr2: ");
//	for (i = 0; i < arr2_len; i++)
//		printf("%d ", arr2[i]);
//
//	printf("\n배열 arr3: ");
//	for (i = 0; i < arr3_len; i++)
//		printf("%d ", arr3[i]);
//
//	printf("\n배열 arr4: ");
//	for (i = 0; i < arr4_len; i++)
//		printf("%d ", arr4[i]);
//
//	printf("\n배열 arr5: ");
//	for (i = 0; i < arr5_len; i++)
//		printf("%d ", arr5[i]);
//
//	printf("\n");
//
//	return 0;
//}



// char형 배열의 문자열
//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "Good morning!";
//	
//	printf("배열 str의 크기: %d \n", sizeof(str));
//	printf("널 문자 문자형 출력: %c \n", str[13]);
//	printf("널 문자 정수형 출력: %d \n", str[13]);
//	
//	str[12] = '?';
//	printf("문자열 출력: %s \n", str);
//	
//	return 0;
//}


//int main(void)
//{
//	char nu = '\0'; // 널 문자의 존재 여부는 문자열의 판단 여부가 됨! 매우 중요! 
//	char sp = ' ';
//	
//	printf("%d %d \n", nu, sp);
//	
//	return 0;
//}


 #include <stdio.h>
 int main(void)
 {
 	char 
 }
