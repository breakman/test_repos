#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main(void)

{
   char a;
   int com;
   printf("가위 바위 보 게임을 시작합니다. (게임 종료 : 9)\n\n");
   srand(time(NULL));
   while(1){
      printf("가위 바위 보를 선택하세요. : ");
      scanf("%c", &a);
      fflush(stdin); // 키보드 버퍼 문제 해결
      com = rand() % 3;
      if(a == 's'){
         switch (com)
         {
         case 0:
            printf("당신은 가위를 냈고 컴퓨터는 가위를 냈습니다.\n");
            printf("당신은 비겼습니다.\n");
            printf("\n");
            break;
         case 1:
            printf("당신은 가위를 냈고 컴퓨터는 바위를 냈습니다.\n");
            printf("당신은 졌습니다.\n");
            printf("\n");
            break;
         case 2:
            printf("당신은 가위를 냈고 컴퓨터는 보를 냈습니다.\n");
            printf("당신은 이겼습니다.\n");
            printf("\n");
            break;
         }
      }
      else if(a == 'r'){
         switch (com)
         {
         case 0:
            printf("당신은 바위를 냈고 컴퓨터는 가위를 냈습니다.\n");
            printf("당신은 이겼습니다.\n");
            printf("\n");
            break;
         case 1:
            printf("당신은 바위를 냈고 컴퓨터는 바위를 냈습니다.\n");
            printf("당신은 비겼습니다.\n");
            printf("\n");
            break;
         case 2:
            printf("당신은 바위를 냈고 컴퓨터는 보를 냈습니다.\n");
            printf("당신은 졌습니다.\n");
            printf("\n");
            break;
         }
      }
      else if(a == 'p'){
         switch (com)
         {
         case 0:
            printf("당신은 보를 냈고 컴퓨터는 가위를 냈습니다.\n");
            printf("당신은 졌습니다.\n");
            printf("\n");
            break;
         case 1:
            printf("당신은 보를 냈고 컴퓨터는 바위를 냈습니다.\n");
            printf("당신은 이겼습니다.\n");
            printf("\n");
            break;
         case 2:
            printf("당신은 보를 냈고 컴퓨터는 보를 냈습니다.\n");
            printf("당신은 비겼습니다.\n");
            printf("\n");
            break;
         }
      }
      else if(a == '9'){
         printf("다음에 또 만나요. ");
         break;
      }
      else{
         printf("\n");
         continue;
      }
   }
   return 0;
}