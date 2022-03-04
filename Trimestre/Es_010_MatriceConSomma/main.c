//made by Andrea Bosticardo
#include <stdio.h>
#include <stdlib.h>

int cercaV(int *v, int x,int n){ //ricerca sequenziale
    int tro = 0;
    for(int i=0; i < n; i++){
        if(*(v+i) == x){
            tro++;
        }
    }
    return tro;
}
int main()
{
    int n = 0;
    //inserisce i numeri
    printf("inserisci il numero di numeri: ");
    scanf("%d",&n);
    int *v = (int) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("%d: ",i+1);
        scanf("%d",(v+i));
    }
    int somma = 0;
    int tro = 0;
    //sommo i valori che non si ripetono
    for(int i = 0; i < n; i++){
        tro = cercaV(v,*(v+i),n);
        if(tro <= 1){//cerco gli elementi non ripetuti
            somma += *(v+i);
        }else {
         printf("%d - ",*(v+i));
    }
    }
    printf("\nSomma dei valori non ripetuti: %d",somma);//stampo la somma
    printf("\n");
    return 0;
}
