#include<stdio.h>
int main(){

    int s[4][3] = {
        {12,13,14},
        {22,23,24},
        {2,3,4},
        {-2,-3,-4}
    };

    // 先行后列
    // 1 最大值 2 最小值 3 平均值
    printf("先行后列\n");
    for (int i = 0; i < 4; i++){
        int max, min; 
        int total = 0;
        printf("%d 行\n", i);
        max = s[i][0];
        min = s[i][0];
        for (int j = 0; j < 3; j++){
            printf("%d ", s[i][j]);
            if(s[i][j] > max){
                max = s[i][j];
            }
            if (s[i][j] < min){
                min = s[i][j];
            }
            total = total + s[i][j];
        }
        printf("\n");
        printf("max = %d, min = %d, average = %f\n", max, min, total / 3.0);
    }

    // 先列后行
    // 1 最大值 2 最小值 3 平均值
    printf("先列后行\n");
    for (int i = 0; i < 3; i++){
        int max, min;
        int total = 0;
        printf("%d 列\n", i);
        max = s[0][i];
        min = s[0][i];
        for (int j = 0; j < 4; j++){
            printf("%d ", s[j][i]);
            if(s[j][i] > max){
                max = s[j][i];
            }
            if (s[j][i] < min){
                min = s[j][i];
            }
            total = total + s[j][i];
        }
        printf("\n");
        printf("max = %d, min = %d, average = %f\n", max, min, total / 4.0);
    }


    return 0;
}