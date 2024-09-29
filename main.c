#include <stdio.h>
int main(void) {
    int urgenza;
    float peso,distanza,spese;
    printf("Inserisci il peso in kg: ");
    scanf("%f",&peso);
    printf("Inserisci la distanza in km: ");
    scanf("%f",&distanza);
    printf("Inserisci l' urgenza: non urgente(0), urgente(1) ");
    scanf("%d",&urgenza);
    if (urgenza == 0) {
        if (distanza<100){
            spese=(peso);
        }
        else if (distanza>300) {
            spese=(peso*3);
        }
        else {
            spese=(peso*2);
        }
    }
    else (urgenza==1) ; {
        if (distanza<100){
            spese=(peso*2.5);
        }
        else if (distanza >300) {
            spese=(peso*4);
        }
        else {
            spese=(peso*3.5);
        }
    }
    printf("le spese sono di %f euro",spese);
}
