#include <stdio.h>

/*
while loop

while (expr) {
    statements
}
next statements
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


int main(void)
{
    int num;

    printf("Ƚ�� �Է�: ");
    scanf("%d", &num);

    while (num >= 1)
    {
        printf("%d: hello world!\n", num);
        num --;
    }

    return 0;
}