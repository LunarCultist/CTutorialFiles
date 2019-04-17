#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  ptr = malloc(10*sizeof(*ptr));  // a block of 10 ints
  if (ptr != NULL)
    *(ptr+2) = 50;  // assign 50 to third int
  printf("%d\n", *(ptr+2));  // 50

  free(ptr);

  return 0;
}
