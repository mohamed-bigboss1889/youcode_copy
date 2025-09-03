#include <stdio.h>
int main(){
    int n,i;
    printf("taper la taille du tablau: ");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++){
        printf("taper les elements du tablau: ");
        scanf("%d",&t[i]);
    }
    int max=t[0];
    for(i=1;i<n;i++){
        if (max<t[i]){
            max=t[i];
        }
        
    }
    printf("max: %d",max);
    return 0;
}