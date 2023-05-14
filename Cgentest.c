
/* 
  
   gcc -std=c89           variable-declaration.c    # OK
   gcc -std=c89 -pedantic variable-declaration.c    # warning: ISO C90 forbids mixed declarations and code [-Wdeclaration-after-statement]
   gcc -std=c90           variable-declaration.c    # OK
   gcc -std=c90 -pedantic variable-declaration.c    # warning: ISO C90 forbids mixed declarations and code [-Wdeclaration-after-statement]
   gcc -std=c99           variable-declaration.c    # OK
   gcc -std=c99 -pedantic variable-declaration.c    # OK

*/

#include <stdio.h>

int foo() {
   return 42;
}

int main() {

  printf("Hello world.\n");

  int i = foo();

  
  FILE *pipe;
  char buffer[128];
  pipe = popen("gcc --version","r");

   if (pipe == NULL) {
      printf("Failed to open pipe.\n");
      return 1;
   }

   while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
      printf("%s", buffer);
   }
}
