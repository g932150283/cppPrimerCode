#include <time.h>
main()
{
	int num,x,i;
	srand((unsigned)time(NULL));
	num=srand()%(1000-1+1)+1;
	// for(i=1;i<=10;i++){
	//     printf("第%d次,输入一个数：",i);
	//     scanf("%d",&x); 
    //     if(x>num){   
    //         printf("大了\n"); 
    //     }else if(x<num){
    //         printf("小了\n"); 
    //     }else {
    //         printf("猜对了\n"); 
    //         break;
    //     }
    // }
    i = 1;
    while(1){
        printf("第%d次,输入一个数：",i);
	    scanf("%d",&x); 
        if(x>num){   
            printf("大了\n"); 
        }else if(x<num){
            printf("小了\n"); 
        }else {
            printf("猜对了\n"); 
            break;
        }
        i++;
    }
} 