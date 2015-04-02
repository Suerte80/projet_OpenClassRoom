#include <stdlib.h>
#include <stdio.h>

int main( int argc, char **argv, char **penv )
{
  int i = 0;

  for( ; penv[i] != NULL; i++ )
    printf("%s\n", penv[i]);
}
