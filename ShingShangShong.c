    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>

    int player_won = 0;
    char computer[15];
    char player[15];
    char input[15];
    int n;

    //change of variables doenst work! I have to use a pointer to change player_won

    int main() {
      time_t t;
      srand((unsigned) time(&t));

      printf("Choose: \nX -> scissors \nO -> stone \nP -> paper\n");
      scanf("%s", &input);
      n = rand() % 3 + 1;

      if(input == "X" || input == "x")
        strcpy(player, "scissors");
      if(input == "O" || input == "o")
        strcpy(player, "stone");
      if(input == "P" || input == "p")
        strcpy(player, "paper");
      if(n == 1)
        strcpy(computer, "scissors");
      if(n == 2)
        strcpy(computer, "stone");
      if(n == 3)
        strcpy(computer, "paper");

      if(strcmp(player, computer) == 0){
        printf("Player: %s   -    Computer %s\n", player, computer);
        printf("no winner!\n");
        exit(0);
      }

      if(strcmp(player, "scissors") == 0 && strcmp(computer, "paper") == 0)
        player_won = 1;
      if(strcmp(player, "stone") == 0 && strcmp(computer, "scissors") == 0)
        player_won = 1;
      if(strcmp(player, "paper") == 0 && strcmp(computer, "stone") == 0)
        player_won = 1;

      if(player_won == 1){
        printf("Player: %s   -   %s :Computer\n", player, computer);
        printf("Player has won.\n");
      }
      if(player_won == 0){
        printf("Player: %s   -   %s :Computer\n", player, computer);
        printf("You lost. Computer has won.\n");
      }
        printf("%d", player_won);

      return 0;
    }
