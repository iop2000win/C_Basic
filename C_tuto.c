#include <stdio.h>

/*
int main(void)
{
	printf("hello world\n");
	printf("What's going on?\n");

	return 0;
}
*/


// int main(void)
// {
// 	printf("%d x %d = %d\n", 5, 1, 5 * 1);
// 	printf("%d x %d = %d\n", 5, 2, 5 * 2);
// 	printf("%d x %d = %d\n", 5, 3, 5 * 3);
// 	printf("%d x %d = %d\n", 5, 4, 5 * 4);
// 	printf("%d x %d = %d\n", 5, 5, 5 * 5);

// 	return 0;
// }

// %d >>> 정수
// int main(void)
// {
// 	printf("%d x %d = %2d\n", 5, 1, 5 * 1);
// 	printf("%d x %d = %2d\n", 5, 2, 5 * 2);
// 	printf("%d x %d = %2d\n", 5, 3, 5 * 3);
// 	printf("%d x %d = %2d\n", 5, 4, 5 * 4);
// 	printf("%d x %d = %2d\n", 5, 5, 5 * 5);
// }

// %lf >>> 실수
int main(void)
{
	printf("%lf x %2d = %5.2lf\n", 3.14, 1, 3.14 * 1);
	printf("%lf x %2d = %5.3lf\n", 3.14, 5, 3.14 * 5);
	printf("%lf x %2d = %5.4lf\n", 3.14, 10, 3.14 * 10);
}


// %s >>> 문자열