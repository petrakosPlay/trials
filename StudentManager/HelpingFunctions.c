#include <stdlib.h>
#include <stdio.h>



void perror_exit(char *message)
{
    fprintf(stderr, "File %s, line: %d\n", __FILE__, __LINE__);
    perror(message);
    fprintf(stderr, "Exiting...\n");
    exit(EXIT_FAILURE);
}
