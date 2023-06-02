#include <stdio.h>

int f1(void)
{
	int arr[5];
	int i, sum = 0;
	
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	for (i = 0; i < 5; i++)
	{	
		sum += arr[i];

		printf("�迭�� %d��° ����: %d\n", i, arr[i]);
	}

	printf("�迭 ������ ��: %d \n", sum);
	
	return 0;
}


/*
1. �迭�� �ʱ�ȭ

int arr1[5] = {1, 2, 3, 4, 5};	>>> 1, 2, 3, 4, 5
int arr2[5] = {1, 2};		 	>>> 1, 2, 0, 0, 0
int arr3[]  = {1, 2, 3, 4, 5};	>>> int arr3[5] = {1, 2, 3, 4, 5};
*/ 


int f2(void)
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[ ] = {1, 2, 3, 4, 5, 6, 7};
	int arr3[5] = {1, 2};	// ũ�� 5�� �迭 ����, �Էµ� ���� ������ ������ ������ 0���� ä������.
	int arr4[5] = {};		// ũ�� 5�� �迭 ����, ���Ҵ� 0���� ä������.
	int arr5[5]; 			// ũ�� 5�� �迭 ����, ���Ҵ� ������ ������ ä������.
	int arr1_len, arr2_len, arr3_len, arr4_len, arr5_len, i;

	printf("�迭 arr1�� ũ��: %d \n", sizeof(arr1));
	printf("�迭 arr2�� ũ��: %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ��: %d \n", sizeof(arr3));
	printf("�迭 arr4�� ũ��: %d \n", sizeof(arr4));
	printf("�迭 arr5�� ũ��: %d \n", sizeof(arr5));

	arr1_len = sizeof(arr1) / sizeof(int);
	arr2_len = sizeof(arr2) / sizeof(int);
	arr3_len = sizeof(arr3) / sizeof(int);
	arr4_len = sizeof(arr4) / sizeof(int);
	arr5_len = sizeof(arr5) / sizeof(int);

	printf("\n�迭 arr1: ");
	for (i = 0; i < arr1_len; i++)
		printf("%d ", arr1[i]);

	printf("\n�迭 arr2: ");
	for (i = 0; i < arr2_len; i++)
		printf("%d ", arr2[i]);

	printf("\n�迭 arr3: ");
	for (i = 0; i < arr3_len; i++)
		printf("%d ", arr3[i]);

	printf("\n�迭 arr4: ");
	for (i = 0; i < arr4_len; i++)
		printf("%d ", arr4[i]);

	printf("\n�迭 arr5: ");
	for (i = 0; i < arr5_len; i++)
		printf("%d ", arr5[i]);

	printf("\n");

	return 0;
}


/*
2. char�� �迭�� ���ڿ�
*/
int f3(void)
{
	char str[] = "Good morning!";
	int i;

	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�迭 str: %s\n", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("�迭�� %2d��° ����: %c\n", i, str[i]);
	}

	printf("�� ���� ������ ���: %c \n", str[13]);
	printf("�� ���� ������ ���: %d \n", str[13]);
	
	str[12] = '?';
	printf("���ڿ� ���: %s \n", str);
	
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

	printf("���ڿ� �Է�: ");
	scanf("%s", str); // space�� �Է� ���� ���Ѵ�.
	printf("�Է� ���� ���ڿ�: %s\n", str);

	printf("���� ���� ���: ");

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

	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s\n", str);

	printf("���� ���� ���: ");

	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}


/*
3. ��������
*/
int f7(void)
{
	int arr[5];
	int i, sum, max, min;

	printf("���� 5�� �Է�: ");
	
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

	printf("�� ��: %d\n", sum);
	printf("�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);
}


int f8(void)
{
	char str[50];
	int l;

	printf("���� �ܾ� �Է�: ");
	scanf("%s", &str);

	for (l = 1; str[l] != '\0'; l++)
	{
		continue;
	}

	printf("�Էµ� ���� �ܾ��� ����: %d\n", l);
}


int f9(void)
{
	char str[50];
	int l;

	printf("���� �ܾ� �Է�: ");
	scanf("%s", str); // �迭�� ��� &��ȣ�� ���� �ּҰ����� �Է������� �ʾƵ� �ȴ�.

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
4. ������ �迭
*/
void f10(void)
{
	int arr1[3][4];
	int arr2[7][9];

	printf("���� 3, ���� 4: %d\n", sizeof(arr1));
	printf("���� 7, ���� 9: %d\n", sizeof(arr2));

	return;
}


void f11(void)
{
	int villa[3][2], popu, i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d�� %dȣ �α���: ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}
	printf("-------------------------\n");

	for (i = 0; i < 3; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];

		printf("%d�� �α���: %d\n", i+1, popu);
	}

	return;
}


void f12(void) // 2���� �迭�� �޸� �Ҵ� ���¸� Ȯ��
{
	int arr[3][2];
	int i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			printf("%p\n", &arr[i][j]); // %p: �ּ� ���� ó���ϴ� ���� ����

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
		{1}, // ä���� ���� �� ������ 0���� ä����
		{4, 5},
		{7, 8, 9}
	};

	int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7};
	// ������ �迭�� ǥ������ �ʾ��� ��쿡�� ������� ä����

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

	printf("���� 2, ���� 3, ���� 5 int �� �迭: %d\n", sizeof(arr1));
	printf("���� 4, ���� 5, ���� 6 double �� �迭: %d\n", sizeof(arr2));
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
	printf("1 �б� ��ü ���: %g\n", (double) mean/6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("2 �б� ��ü ���: %g\n", (double) mean/6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("3 �б� ��ü ���: %g\n", (double) mean/6);
}


/*
5. �ǽ�
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

	printf("�� ���� �ڿ��� �Է�: ");
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

	printf("¦��: ");
	for (i = 0; i < even_len; i++)
		printf("%2d ", arr_even[i]);
	
	printf("\nȦ��: ");
	for (i = 0; i < odd_len; i++)
		printf("%2d ", arr_odd[i]);

	printf("\n");
}


void ex4(void)
{
	int arr[10], arr_multi_2[10], arr_multi_5[10];
	int i, multi_2_len = 0, multi_5_len = 0;

	printf("�� ���� �ڿ��� �Է�: ");
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

	printf("2�� ���: ");
	for (i = 0; i < multi_2_len; i++)
		printf("%2d ", arr_multi_2[i]);
	
	printf("\n5�� ���: ");
	for (i = 0; i < multi_5_len; i++)
		printf("%2d ", arr_multi_5[i]);

	printf("\n");
}


void ex5(void)
{
	int arr[10];
	int i, odd_cnt = 0, even_cnt = 0, odd_sum = 0, even_sum = 0;

	printf("�� ���� �ڿ��� �Է�: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	// ¦�� ���
	printf("¦�� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
			even_cnt += 1;
			even_sum += arr[i];
		}
	}
	// Ȧ�� ���
	printf("\nȦ�� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
		{
			printf("%d ", arr[i]);
			odd_cnt += 1;
			odd_sum += arr[i];
		}
	}
	// ¦���� ���� & Ȧ���� ���� / ¦���� �� & Ȧ���� �� ���
	printf("\n¦���� ����: %d", even_cnt);
	printf("\nȦ���� ����: %d", odd_cnt);
	printf("\n¦���� ��: %d", even_sum);
	printf("\nȦ���� ��: %d", odd_sum);

	// 2�� ��� ���
	printf("\n2�� ��� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	// 5�� ��� ���
	printf("\n5�� ��� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 5 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	// 2�� 5�� ����� ���
	printf("\n2�� 5�� ����� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0 & arr[i] % 5 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	// 2�� ����̰ų� 5�� ����� �� ���
	printf("\n2 or 5�� ��� ���: ");
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

	printf("�ڿ��� �Է�: ");
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

	printf("�ڿ��� �Է�: ");
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

	printf("�� ���� �ڿ��� �Է�: ");
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