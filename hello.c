#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *s="hello world";    /* stored in data */

int main() {                    /* stored in text */
  char *b;                      /* stored on stack */
  b=malloc(sizeof(s));          /* reserve heap   - added to VSZ */
  memcpy(b, s, strlen(s));      /* touch page     - added to RSS */
  printf("%s\n", b);            /* system call into kernel */
  free(b);                      /* free heap allocation */
}
