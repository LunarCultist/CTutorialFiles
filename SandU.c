#include <stdio.h>
#include <string.h>

typedef struct{
    char make[20];
    int model_year;
    int id_type;
    union{
        int id_num;
        char VIN[20];
    }id;
}vehicle;

/*
Union is used here, because a vehicle should have an ID num OR a VIN, but N O T  both.
*/

int main(){
    vehicle car1;
    strcpy(car1.make, "ford");
    car1.model_year = 2018;
    car1.id_type = 0;
    car1.id.id_num = 123421;
    printf("Car %s, %d", car1.make, car1.model_year);
    return 0;
}
