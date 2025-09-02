#include <stdio.h>
int main(){
  float temperature_en_c;
  float temperature_en_k;
  printf("taper le temperature en c : ");
  scanf("%f",&temperature_en_c);
  temperature_en_k=temperature_en_c+273.15;
  printf("la temperature_en_k est : %.2f K",temperature_en_k);
  return 0;
}