#include <stdio.h>

int main(){
    int loesung = 0;
    int gefunden = 0;
    int zaehler1 = 0;
    int temp = 0;

    printf("Geben sie die Lösung ein: \n");
    scanf("%d", &loesung);
    printf("Das Spiel beginnt!\n");
    for(zaehler1 = 0; zaehler1 < 100; zaehler1++){
        printf("\n");
    }
    while(gefunden == 0){
        printf("Raten Sie die Zahl: \n");
        scanf("%d", &temp);

        if(temp == loesung){
            gefunden = 1;
            printf("gefunden! Die Lösung ist %d", loesung);
        }
        if(temp < loesung) printf("Die Lösung ist größer als %d\n", temp);
        if(temp > loesung) printf("Die Lösung ist kleiner als %d\n", temp);
    }

return 0;
}
