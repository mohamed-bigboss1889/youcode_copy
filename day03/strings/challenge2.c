#include <stdio.h>
#include <string.h>


int main(){
    int chaine[100];
    printf("taper une chaine de caracter: ");
    scanf("%s",chaine);
    int size = strlen(chaine);
    printf("lenght is : %d",size);


  return 0;
}