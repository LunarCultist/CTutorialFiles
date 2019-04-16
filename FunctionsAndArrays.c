#include <stdio.h>

//a pointer contains the address of other variables

int add_up(int *a, int num_elements);

//Names of arrays are pointers too!

int main(){
    int orders[5] = {100,200,30,16,53};
    printf("Total orders is %d\n", add_up(orders, 5));

    return 0;
}

int add_up(int *a, int num_elements){
    int total = 0;
    int k;

    for(k=0; k<num_elements; k++){
        total += a[k];
    }
    return (total);
}
