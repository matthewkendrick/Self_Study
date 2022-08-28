#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;

  file = fopen("c:¥¥test¥¥sample.txt", "w");
  if (file == NULL) {
    printf("ファイルが開けません。\n");
    exit(1);
  }

  fprintf(file, "Hello World.\n\n");
  // fprintf(file, "ABCDEF\n\n");
  fprintf(file, "I'm Matthew");
  fclose(file);
}