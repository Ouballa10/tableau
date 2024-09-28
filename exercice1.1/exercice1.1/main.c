#include <stdio.h>
#include <stdlib.h>

int main()
{


    int somme =0;
    int moyen =0;
    int n;
    printf("entrez la taille n \n");
    scanf("%d",&n);
    int T[n];
    printf("SVP ENTERZ ELEMENT DE TABLEAU \n");
    for(int i=0;i<n;i++){
              printf("lelment %d \n",T[i]);
              scanf("%d",&T[i]);
              }
    for(int i=0;i<n;i++){
        somme+=T[i];
    }
    moyen =somme/n;
    printf("la moyen est %d",moyen);
    return 0;
}
