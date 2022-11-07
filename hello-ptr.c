#define _GNU_SOURCE
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <dlfcn.h>

const char *s="hello world";    /* stored in data */

int main() {                    /* stored in text */

  /* do something */
  char *b;                      /* stored on stack */
  b=malloc(sizeof(s));          /* reserve heap   - added to VSZ */
  memcpy(b, s, strlen(s));      /* touch page     - added to RSS */
  printf("%s\n", b);            /* system call into kernel */
  free(b);                      /* free heap allocation */

  /* dump addresses */
  printf("\n/* memory addresses */\n");
  printf("main   = %14p (text)\n", (void *) main);
  printf("&s     = %14p (data)\n", (void *) &s);
  printf("b      = %14p (heap)\n", (void *) b);
  printf("&b     = %14p (stack)\n\n", (void *) &b);
  printf("printf = %14p (pointer)\n", (void *) printf);
  printf("printf = %14p (address)\n", (void *) dlsym(RTLD_NEXT, "printf"));
}
