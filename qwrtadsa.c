#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main(void){
    char b;
    int a,com ;
    srand(time(NULL));
    printf("가위 바위 보 게임을 시작합니다. (게임 종료 : 9)\n\n");
    while (1)
    {   
        printf("가위 바위 보를 선택하세요. : ");
        scanf("%d", &a);
        b = 's';
        com = rand() % 3;
        if(b == 's'){
            printf("b = 0\n");
        }
        else if (b == 'r')
        {
            printf("b = 1\n");
        }
        else if (b == 'p'){
            printf("b = 2\n");
        }
        else if (b == '9'){
            break;
        }
        else{
            printf("올바른 수를 입력해 주세요. \n");
        }
    }
    return 0;
}