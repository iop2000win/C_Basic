#include <stdio.h>
#include <math.h>
#include <string.h>

struct point
{
    int x_pos;
    int y_pos;
};

// ��ǥ�� �Է¹ް� �Ÿ��� ����ϴ� �Լ�
int f1(void)
{
    struct point pos1, pos2;
    double distance;

    fputs("point1 pos: ", stdout);
    scanf("%d %d", &pos1.x_pos, &pos1.y_pos);

    fputs("point2 pos: ", stdout);
    scanf("%d %d", &pos2.x_pos, &pos2.y_pos);

    distance = sqrt((double)(pow(pos1.x_pos - pos2.x_pos, 2) + pow(pos1.y_pos - pos2.y_pos, 2)));
    
    printf("�� ���� �Ÿ�: %g\n", distance);

    return 0;
}


struct person
{
    char name[20];
    char phone_num[20];
    int age;
};

// ���� ������ ���� �� ����ϴ� �Լ�
int f2(void)
{
    struct person man1, man2;
    // string copy -> strcpy
    strcpy(man1.name, "ȫ�浿");
    strcpy(man1.phone_num, "010-1111-2222");
    man1.age = 20;

    printf("�̸� �Է�: "); scanf("%s", man2.name); // ���ڿ��� �� ��ü�� �ּҰ�
    printf("��ȣ �Է�: "); scanf("%s", man2.phone_num);
    printf("���� �Է�: "); scanf("%d", &(man2.age));

    printf("-----------------------------\n");

    printf("�̸�: %s\n", man1.name);
    printf("��ȣ: %s\n", man1.phone_num);
    printf("����: %d\n", man1.age);

    printf("-----------------------------\n");

    printf("�̸�: %s\n", man2.name);
    printf("��ȣ: %s\n", man2.phone_num);
    printf("����: %d\n", man2.age);

    return 0;
}


// ����ü ����� ���ÿ� �ʱ�ȭ


int main(void)
{
    // f1();
    f2();
}