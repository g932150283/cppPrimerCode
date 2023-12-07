#include <stdio.h>
#define N 5
int main()
{
    int i, j;
    int a[2][3];
    char name[2][10];
    int sum[2] = {0};
    float avg[2];
    printf("请输入两个同学三门课的成绩:\n");
    for (i = 0; i < 2; i++)
    {
        printf("第%d个学生的记录: ", i + 1);
        scanf("%s", name[i]);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
        avg[i] = sum[i] / 3;
    }
    printf("请输出两个同学三门课的成绩: \n");
    for (i = 0; i < 2; i++)
    {
        printf("%s\t", name[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("%d\t%.1f", sum[i], avg[i]);
        printf("\n");
    }
}