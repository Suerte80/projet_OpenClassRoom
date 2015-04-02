#include <stdlib.h>
#include <stdio.h>

int main( int argc, char **argv, char **penv )
{
  printf("Mon beau projet :/");

  for( int i = 0; penv[i] != NULL; i++ )
    printf("%s\n", penv[i] );
}
