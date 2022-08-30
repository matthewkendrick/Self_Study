#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  int c;

  file = fopen("/Users/matthewkendrick/Desktop/Self_Study/udemy/cLesson/source_files/lesson66/test/sample.txt", "r");
    if (file == NULL) {
      printf("ファイルが開けません。\n");
      exit(1);
    }

    while ((c = fgetc(file)) != EOF) {
      printf("%c", (char)c);
    }
  fclose(file);
}