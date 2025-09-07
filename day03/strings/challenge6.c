#include <stdio.h>
#include <string.h>

int main(){
  char chaine[100]="hello";
  char caracterasearche;
  int i;
  int somme=0;
  int size=strlen(chaine);
  printf("taper un caracter pour chercher: ");
  scanf("%c",&caracterasearche);

  for(i=0;i<size;i++){
      if(chaine[i]==caracterasearche){
        somme+=1;
      }
      
  }
  printf("on a trouvee %c  %d fois",caracterasearche,somme);
  return 0;
}