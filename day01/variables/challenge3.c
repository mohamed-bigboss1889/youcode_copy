#include <stdio.h>
int main(){
    float km, yards;
    printf("taper la distance en k: ");
    scanf("%f",&km);
    yards=km*1039.61;
    printf("la distance en yards est :  %3.f",yards);
    return 0;

}