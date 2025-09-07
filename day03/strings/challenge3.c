#include <stdio.h>
#include <string.h>
int main(){
  char chaine1 [100]="bonjour";
  char chaine2 [100]="madame";
  strcat(chaine1,chaine2);
  printf(" voila votre phrase: %s\n",chaine1);
  return 0;
}