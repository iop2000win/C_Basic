#include <stdio.h>
#include <math.h>
#include <string.h>

struct point
{
    int x_pos;
    int y_pos;
};

// 좌표를 입력받고 거리를 계산하는 함수
int f1(void)
{
    struct point pos1, pos2;
    double distance;

    fputs("point1 pos: ", stdout);
    scanf("%d %d", &pos1.x_pos, &pos1.y_pos);

    fputs("point2 pos: ", stdout);
    scanf("%d %d", &pos2.x_pos, &pos2.y_pos);

    distance = sqrt((double)(pow(pos1.x_pos - pos2.x_pos, 2) + pow(pos1.y_pos - pos2.y_pos, 2)));
    
    printf("두 점의 거리: %g\n", distance);

    return 0;
}


struct person
{
    char name[20];
    char phone_num[20];
    int age;
};

// 유저 정보를 저장 및 출력하는 함수
int f2(void)
{
    struct person man1, man2;
    // string copy -> strcpy
    strcpy(man1.name, "홍길동");
    strcpy(man1.phone_num, "010-1111-2222");
    man1.age = 20;

    printf("이름 입력: "); scanf("%s", man2.name); // 문자열은 그 자체가 주소값
    printf("번호 입력: "); scanf("%s", man2.phone_num);
    printf("나이 입력: "); scanf("%d", &(man2.age));

    printf("-----------------------------\n");

    printf("이름: %s\n", man1.name);
    printf("번호: %s\n", man1.phone_num);
    printf("나이: %d\n", man1.age);

    printf("-----------------------------\n");

    printf("이름: %s\n", man2.name);
    printf("번호: %s\n", man2.phone_num);
    printf("나이: %d\n", man2.age);

    return 0;
}


// 구조체 선언과 동시에 초기화


int main(void)
{
    // f1();
    f2();
}