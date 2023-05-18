
/* 
  
GCC TESTING WITH DIFFERENT STANDARDS

*/

#include <stdio.h>

int foo() {
   return 42;
}

int main() {

  printf("Hello world.\n");
  int i = foo(); // may cause variable declaration error
  printf("----------\n");

  /* to print the gcc version - ignore
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
   */
}
