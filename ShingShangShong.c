    #include <stdio.h>
    #include <stdlib.h>

    int main() {
      int c, n;
      time_t t;
      srand((unsigned) time(&t));

      printf("Choose: \nX -> scissors \nO -> strone \nP -> paper\n");
      n = rand() % 100 + 1;


      return 0;
    }
