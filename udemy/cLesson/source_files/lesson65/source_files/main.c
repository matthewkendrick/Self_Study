#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(void) {
  FILE *file;
  char line[SIZE];
  line[0] = '\0';
  file = fopen("c:¥¥test¥¥sample.txt", "r");
  if (file == NULL) {
    printf("=========================\n");
    printf("ファイルが開けません\n");
    printf("=========================\n");
    exit(1);
  }

  while (fgets(line, SIZE, file) != NULL) {
    printf("%s", line);
  }
  fclose(file);
}