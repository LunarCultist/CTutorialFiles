#include <stdio.h>
#include <string.h>

/*
we assume, that the sudoku field is a square.
*/

void fillField(int x, int y, int field[x][y]);
int columnTest(int field[]);
int rowTest(int field[]);

int main(){
    int hight;
    int width;
    int temp;

    printf("Please insert the hight:\n");
    scanf("%d", &width);
    hight = width;
    int field[width][hight];
    fillField(width, hight, field);

    return 0;
}

void fillField(int x, int y, int field[x][y]){
    int a, b;
    int i, j;
    int temp;
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("Please insert for field ( %d | %d ) :\n", i, j);
            scanf("%d", &temp);
        }
    }
}

int columnTest(int field[]){
    int value = 0;
    int i;
    int temp[sizeof(field) / sizeof(field[0])];

    int length_array = sizeof(field) / sizeof(field[0]);
    for(i = 0; i < length_array; i++){

    }
}


