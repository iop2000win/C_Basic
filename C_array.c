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