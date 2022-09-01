#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE* file;
  int i, size;
  char* rdata;
  file = fopen("/Users/matthewkendrick/Desktop/Self_Study/udemy/cLesson/source_files/lesson68/test/test.bin", "rb");
    if (file == NULL) {
      printf("ファイルが開けません。\n");
      exit(1);
    }
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    rdata = (char*)malloc(sizeof(char) *size);

    fseek(file, 0, SEEK_SET);
    fread(rdata, sizeof(char), size, file);
  fclose(file);

  printf("====================\n");
  for (i = 0; i < size; i++) {
    printf("%x \n", rdata[i]);
  }
  printf("====================\n");
  free(rdata);
}