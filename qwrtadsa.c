#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main(void){
    char b;
    int a,com ;
    srand(time(NULL));
    printf("���� ���� �� ������ �����մϴ�. (���� ���� : 9)\n\n");
    while (1)
    {   
        printf("���� ���� ���� �����ϼ���. : ");
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
            printf("�ùٸ� ���� �Է��� �ּ���. \n");
        }
    }
    return 0;
}