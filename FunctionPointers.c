#include <stdio.h>

//a pointer contains the address of other variables


//Names of arrays are pointers too and point to the first element of an array!
// a[k] is the same as *(a + k)

void say_hello(int num_times);

int main(){
    //return_type (*funcname)(parameters)
    void (*funptr)(int);  // function pointer
    funptr = say_hello;  // pointer assignment
    funptr(3);  // function call

    return 0;
}

void say_hello(int num_times) {
  int k;
  for (k = 0; k < num_times; k++)
    printf("Hello\n");
}
