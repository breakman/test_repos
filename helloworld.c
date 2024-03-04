#include <stdio.h>

int main(void)

{

   int max_d, first_d, a = 1;
   printf("최대 일 수를 입력하세요 : ");
   scanf("%d", &max_d);
   printf("1일의 요일을 입력하세요(0:일요일, 1:월요일, ...) : ");
   scanf("%d", &first_d);
   printf(" Su Mo Tu We Th Fr Sa\n");
   for(int i=1;i<7;i++){
      if(i == 1){
         for(int j=0;j<7;j++){
            if(j < first_d){
               printf("   ");
               continue;
            }
         printf("%3d", a);
         a++;
         }
      }
      else{
         for(int j=0;j<7;j++){
            if(a > max_d){
               break;
            }
            printf("%3d", a);
            a++;
         }
      }
      printf("\n");
   }
}