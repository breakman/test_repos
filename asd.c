#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main(void)

{
   char a;
   int com;
   printf("���� ���� �� ������ �����մϴ�. (���� ���� : 9)\n\n");
   srand(time(NULL));
   while(1){
      printf("���� ���� ���� �����ϼ���. : ");
      scanf("%c", &a);
      fflush(stdin); // Ű���� ���� ���� �ذ�
      com = rand() % 3;
      if(a == 's'){
         switch (com)
         {
         case 0:
            printf("����� ������ �°� ��ǻ�ʹ� ������ �½��ϴ�.\n");
            printf("����� �����ϴ�.\n");
            printf("\n");
            break;
         case 1:
            printf("����� ������ �°� ��ǻ�ʹ� ������ �½��ϴ�.\n");
            printf("����� �����ϴ�.\n");
            printf("\n");
            break;
         case 2:
            printf("����� ������ �°� ��ǻ�ʹ� ���� �½��ϴ�.\n");
            printf("����� �̰���ϴ�.\n");
            printf("\n");
            break;
         }
      }
      else if(a == 'r'){
         switch (com)
         {
         case 0:
            printf("����� ������ �°� ��ǻ�ʹ� ������ �½��ϴ�.\n");
            printf("����� �̰���ϴ�.\n");
            printf("\n");
            break;
         case 1:
            printf("����� ������ �°� ��ǻ�ʹ� ������ �½��ϴ�.\n");
            printf("����� �����ϴ�.\n");
            printf("\n");
            break;
         case 2:
            printf("����� ������ �°� ��ǻ�ʹ� ���� �½��ϴ�.\n");
            printf("����� �����ϴ�.\n");
            printf("\n");
            break;
         }
      }
      else if(a == 'p'){
         switch (com)
         {
         case 0:
            printf("����� ���� �°� ��ǻ�ʹ� ������ �½��ϴ�.\n");
            printf("����� �����ϴ�.\n");
            printf("\n");
            break;
         case 1:
            printf("����� ���� �°� ��ǻ�ʹ� ������ �½��ϴ�.\n");
            printf("����� �̰���ϴ�.\n");
            printf("\n");
            break;
         case 2:
            printf("����� ���� �°� ��ǻ�ʹ� ���� �½��ϴ�.\n");
            printf("����� �����ϴ�.\n");
            printf("\n");
            break;
         }
      }
      else if(a == '9'){
         printf("������ �� ������. ");
         break;
      }
      else{
         printf("\n");
         continue;
      }
   }
   return 0;
}