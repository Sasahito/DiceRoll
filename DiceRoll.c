#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
  int dice;
  int roll;
  int random;
  dice = 0;
  roll = 0;
  random = 0;
  srand(time(NULL));
  printf("何面のダイス？：");
  scanf("%d",&dice);
  if(dice > 0){
      printf("%d面のダイスを何回振る？：",dice);
      scanf("%d",&roll);
      if(roll > 0){
        random = rand() % dice * roll;
        printf("%dD%dの結果は%dです\n",roll,dice,random);
      }else{
        printf("不正な値です");
      }
  }else{
    printf("不正な値です");
  }
}