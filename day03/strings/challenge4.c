#include <stdio.h>
#include <string.h>
int main(){
  char chaine1 [100]="mohamed";
  char chaine2 [100]="mohamed";
  
  int resu=strcmp(chaine1,chaine2);
  if(resu==0){
    printf("les mot sont les meme");
  }
  else{
    printf("les mot sont pas les meme");
  }
  return 0;
}