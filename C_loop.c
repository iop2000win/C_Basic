#include <stdio.h>

/*
========================================================================
while loop

while (expr) {
    statements
}
next statements
========================================================================
*/

// int main(void)
// {
//     int num = 1;

//     // while (num <= 3)
//     // {
//     //     printf("%d: hello world!\n", num);
//     //     num ++;
//     // }

//     while (num <= 3)
//         printf("%d: hello world!\n", num ++);
    
//     return 0;
// }


// int main(void)
// {
//     int i = 3, num = 1;
//     printf("3�� ������ ���\n");

//     while (num <= 9)
//     {
//         printf("%d x %d = %d\n", i, num, i * num);
//         num ++;
//     }

//     return 0;
// }


// int main(void)
// {
//     int num;

//     printf("Ƚ�� �Է�: ");
//     scanf("%d", &num);

//     while (num >= 1)
//     {
//         printf("%d: hello world!\n", num);
//         num --;
//     }

//     return 0;
// }


void times_table(void)
{
    int num, cnt = 1;

    printf("���� �Է�: ");
    scanf("%d", &num);

    while (cnt <= 9)
    {
        printf("%2d x %2d = %2d\n", num, cnt, num * cnt);
        cnt ++;
    }
}


void double_times_table(void)
{
    int i = 1, num, cnt;

    printf("���� �Է�: ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%2d�� ������ ���\n", i);
        cnt = 1;
        while (cnt <= 9)
        {
            printf("%2d x %2d = %2d\n", i, cnt, i * cnt);
            cnt ++;
        }

        i ++;
    }

}


void point_stars(void)
{
    int cnt, i = 0, j = 0;

    printf("���� �Է�: ");
    scanf("%d", &cnt);

    while (i < cnt)
    {
        while (j < i)
        {
            printf("%s ", "o");
            j ++;
        }
        printf("%s\n", "*");
        i ++ ;
        j = 0;
    }
}


void input_sum_1(void)
{
    int sum = 0, num = 1;

    while (num != 0)
    {
        printf("���� �Է� (0 to quit): ");
        scanf("%d", &num);

        sum += num;
    }

    printf("�Է� ���� ������ ��: %d \n", sum);
}


// ���� ������ �Է� ���� �ʾ��� ��쿡 ���� ó���� �ʿ�
void input_sum_2(void)
{
    int i = 0, sum = 0, num;

    while (i < 5)
    {
        printf("���� ���� �Է� (%d��°): ", i+1);
        scanf("%d", &num);

        sum += num, i++;
    }
    printf("�հ�: %d\n", sum);
}


void times_table_reverse(void)
{
    int num;

    printf("���� �Է�: ");
    scanf("%d", &num);

    int i = 9;
    while (i >= 1)
    {
        printf("%2d x %2d = %2d\n", num, i, num * i);
        i--;
    }
}


void times_table_reverse_whole(void)
{
    int num = 9;
    while (num >= 1)
    {
        printf("\n%d�� ����\n", num);
        int i = 9;
        while (i >= 2)
        {
            printf("%2d x %2d = %2d\n", num, i, num * i);
            i--;
        }

        num --;
    }
}


void mean(void)
{
    // double cnt, sum = 0;
    int cnt, num, sum = 0;
    double mean;
    printf("�Է� ���� ������ ����: ");
    scanf("%d", &cnt);

    int cnt_ = cnt;
    while (cnt_ > 0)
    {
        printf("���� �Է�: ");
        scanf("%d", &num);

        sum += num;
        cnt_--;
    }

    mean = (double)sum / cnt; // ĳ��Ʈ ����
    printf("�Է��� ���: %.2lf\n", mean);
}


void find_even_num(void)
{
    int i = 1, num = 0;

    while (num <= 0)
    {
        printf("���� ���� �Է�: ");
        scanf("%d", &num);
    }

    int n;
    n = num/2;

    printf("�Է¹��� ���� %d ���� ���� ¦��: ", num);
    while (i * 2 < num)
    {
        printf("%d ", 2 * i);
        i++;
    }
    printf("\n");
}

// int main(void)
// {
//     // times_table();
//     // double_times_table();
//     // point_stars();
//     // input_sum_1();
//     // input_sum_2();
//     // times_table_reverse();
//     // times_table_reverse_whole();
//     // mean();
//     find_even_num();
// }


/*
========================================================================
do - while loop

do
{
    statements
} while (expr)

������ ���� ���� �켱 �ڵ带 �ּ� 1���� �۵���Ű�� ���
========================================================================
*/

void do_while_basic(void)
{
    int sum = 0, num;

    do
    {
        printf("���� �Է� (0 to quit): ");
        scanf("%d", &num);

        sum += num;
    } while (num != 0);

    printf("�Է� ���� ������ ��: %d\n", sum);
}


void times_table_reverse_dowhile(void)
{
    int num = 9;

    do
    {
        int i = 9;
        
        do
        {
            printf("%2d x %2d = %2d\n", num, i, num * i);
            i--;
        } while (i >= 1);

        num--;
    } while (num > 1);
}


void sum_odd_num(void)
{
    int sum = 0, num = 1;

    do
    {
        sum += num;
        num += 1;
    } while (num <= 100);

    int i = 1;
    do
    {
        sum -= i * 2;
    } while (i * 2 <= 100);

    printf("")
}


int main(void)
{
    // do_while_basic();
    times_table_reverse_dowhile();
}