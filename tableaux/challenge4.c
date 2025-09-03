#include <stdio.h>

int main() {
    int n,i,max;
    printf("donner la taille :");
    scanf("%d",&n);
    int t[n];
    for ( i = 0; i < n; i++)
    {
       printf("T[%d]=",i+1);
       scanf("%d",&t[i]);
    }
    max=t[0];
    for ( i = 1; i < n; i++)
    {
      if(max<t[i])
        max=t[i];
    }
    printf("le grand nombre du tableaux est : %d",max);
    return 0;
}