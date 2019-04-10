#include <stdio.h>

//int line check -> return 1 if true
//int column check -> return 1 if true
//int box check -> return 1 if true
//put fillField in a seperate function

int main(){
    int hight;
    int width;
    int i;
    int j;
    int temp;

    printf("Sudoku 3x3 Tester");
    printf("How many units high is the sudoku field?\n");
    scanf("%d", &hight);
    scanf("%d", &width);
    int Field[width][hight];
     for(i=0; i<hight; i++){
        for(j=0; j<width; j++){
            printf("Please insert the value of field x: %d  y: %d\n", j+1, i+1);
            scanf("%d", &temp);
            Field[j][i] = temp;
        }
     }
return 0;
}

int lineCheck(int line, int width, int hight, int Field[width][hight]){
    //create an array with all numbers for length; delete each number, which was found; if the array is empty at the end, return 1 else 0
    int i;
    for(i=0; i<width; i++){
        //TO-DO
    }
return 0;
}


