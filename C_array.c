// #include <stdio.h>

// int main(void)
// {
// 	int arr[5];
// 	int i, sum = 0;
	
// 	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
// 	for (i = 0; i < 5; i++)
// 		sum += arr[i];
		
// 	printf("�迭 ������ ��: %d \n", sum);
	
// 	return 0;
// }


// �迭�� �ʱ�ȭ
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
//	int arr3[5] = {1, 2};	// ũ�� 5�� �迭 ����, �Էµ� ���� ������ ������ ������ 0���� ä������.
//	int arr4[5] = {};		// ũ�� 5�� �迭 ����, ���Ҵ� 0���� ä������.
//	int arr5[5]; 			// ũ�� 5�� �迭 ����, ���Ҵ� ������ ������ ä������.
//	int arr1_len, arr2_len, arr3_len, arr4_len, arr5_len, i;
//
//	printf("�迭 arr1�� ũ��: %d \n", sizeof(arr1));
//	printf("�迭 arr2�� ũ��: %d \n", sizeof(arr2));
//	printf("�迭 arr3�� ũ��: %d \n", sizeof(arr3));
//	printf("�迭 arr4�� ũ��: %d \n", sizeof(arr4));
//	printf("�迭 arr5�� ũ��: %d \n", sizeof(arr5));
//
//	arr1_len = sizeof(arr1) / sizeof(int);
//	arr2_len = sizeof(arr2) / sizeof(int);
//	arr3_len = sizeof(arr3) / sizeof(int);
//	arr4_len = sizeof(arr4) / sizeof(int);
//	arr5_len = sizeof(arr5) / sizeof(int);
//
//	printf("\n�迭 arr1: ");
//	for (i = 0; i < arr1_len; i++)
//		printf("%d ", arr1[i]);
//
//	printf("\n�迭 arr2: ");
//	for (i = 0; i < arr2_len; i++)
//		printf("%d ", arr2[i]);
//
//	printf("\n�迭 arr3: ");
//	for (i = 0; i < arr3_len; i++)
//		printf("%d ", arr3[i]);
//
//	printf("\n�迭 arr4: ");
//	for (i = 0; i < arr4_len; i++)
//		printf("%d ", arr4[i]);
//
//	printf("\n�迭 arr5: ");
//	for (i = 0; i < arr5_len; i++)
//		printf("%d ", arr5[i]);
//
//	printf("\n");
//
//	return 0;
//}



// char�� �迭�� ���ڿ�
//#include <stdio.h>
//
//int main(void)
//{
//	char str[] = "Good morning!";
//	
//	printf("�迭 str�� ũ��: %d \n", sizeof(str));
//	printf("�� ���� ������ ���: %c \n", str[13]);
//	printf("�� ���� ������ ���: %d \n", str[13]);
//	
//	str[12] = '?';
//	printf("���ڿ� ���: %s \n", str);
//	
//	return 0;
//}


//int main(void)
//{
//	char nu = '\0'; // �� ������ ���� ���δ� ���ڿ��� �Ǵ� ���ΰ� ��! �ſ� �߿�! 
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
