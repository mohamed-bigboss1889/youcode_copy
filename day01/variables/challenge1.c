#include <stdio.h>

int main(){
  char prenom[50],nom[50],sex[12],adressemail[50];
  int age;
  printf(" taper votre nom");
  scanf("%s",nom);
  printf(" taper votre prenom");
  scanf("%s",prenom);
  printf(" taper votre age");
  scanf("%d",&age);
  printf(" taper votre sex");
  scanf("%s",sex);
  printf(" taper votre adresse email");
  scanf("%s",adressemail);
  printf("full name is: %s %s \n you are %d  \n you sex is : %s \n your email is %s",prenom,nom,age,sex,adressemail);

  
  return 0;
}