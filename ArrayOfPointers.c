#include <stdio.h>

//a pointer contains the address of other variables


//Names of arrays are pointers too!
// a[k] is the same as *(a + k)

int main(){

    /*
    Array of string pointers can hold strings with different length. Easier to access than grid structure of 2dim char array and dont need
    do give the length.
    */

  char *trip[ ] = {
      "suitcase",
      "passport",
      "ticket"
  };

  printf("Please bring the following:\n");
  for (int i = 0; i < 3; i++) {
    printf("%s\n", trip[i]);
  }

  return 0;
}
