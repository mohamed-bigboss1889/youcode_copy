#include <stdio.h>

int main(){
    int somme = 0;
    int n, i;
    printf("taper la taille de tablau : ");
    scanf("%d", &n);
    int tablau[n];
    
    for(i = 0; i < n; i++){
        printf("taper les elements de tablau ");
        scanf("%d", &tablau[i]);
    }
    
    for(i = 0; i < n; i++){
        somme += tablau[i];
    }
    
    printf("somme : %d\n", somme);
    
    return 0;
}
