#include <stdio.h>

int main(){
  char input[100];
  scanf("%s", input);
  int i;
  for(i=0;input[i];i++){
    printf("%d", input[i]);
  }
  printf("\n");
  return 0;
}