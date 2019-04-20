#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(){
    FILE *fptr;
    int c;

    errno = 0;
    fptr = fopen("c:\\nonexistantfile.txt", "r");
    if(fptr == NULL){
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    fclose(fptr);
    return 0;
}
