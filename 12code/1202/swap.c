#include <stdio.h>

void swap(/* 补全参数 */);

int 1main ()
{
    int a = 1;
    int b = 2;
    swap(/* 补全参数 */);
    printf("a： %d\n", a);
    printf("a： %d\n", b);
    
    return 0;
}

void swap(/* 补全参数 */){
    /* 补全函数体，实现交换两个int的值 */
}
void swap1(int *a, int *b);
void swap1(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}