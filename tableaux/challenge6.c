#include <stdio.h>
int main(){
    int n,i;
    printf("taper la taille de tablau: " );
    scanf("%d",&n);
    int tablau[n];
    for(i=0;i<n;i++){
        printf("taper les elements de tablau: ");
        scanf("%d",&tablau[i]);
    }
    int res= 1;
    printf("multiplication des elements");
    for(i=0;i<n;i++){
       res*= tablau[i];

    }
    printf("%d",res);
    return 0;
}