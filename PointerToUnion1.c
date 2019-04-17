#include <stdio.h>
#include <string.h>

union val {
  int int_num;
  float fl_num;
  char str[20];
};

int main() {
  union val info;
  union val *ptr = NULL;    //union pointer_type *name = NULL;
  ptr = &info;
  ptr->int_num = 10;    //for accessing union members through a pointer, -> is required
  printf("info.int_num is %d", info.int_num);

  return 0;
}
