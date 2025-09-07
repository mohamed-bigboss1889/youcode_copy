#include <stdio.h>
#include <string.h>
int main(){
  char chaine[100];
  printf("taper une chaine de caracters: ");
  scanf("%99s",chaine);
  printf(" vous aver taper: %s ",chaine);
  return 0;
}