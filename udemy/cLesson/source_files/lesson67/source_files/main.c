#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file;
  int i;

  char wdata[] = {0x10, 0x1e, 0x1e, 0x1f};
  char rdata[4];

  file = fopen("/Users/matthewkendrick/Desktop/Self_Study/udemy/cLesson/source_files/lesson68/test/test.bin", "wb");
    if (file == NULL) {
      printf("ファイルが開けません。\n");
      exit(1);
    }
    fwrite(wdata, sizeof(char), sizeof(wdata), file);
  fclose(file);

  file = fopen("/Users/matthewkendrick/Desktop/Self_Study/udemy/cLesson/source_files/lesson68/test/test.bin", "rb");
    if (file == NULL) {
      printf("ファイルが開けません。\n");
      exit(1);
    }
    fread(rdata, sizeof(char), sizeof(rdata), file);
  fclose(file);
  printf("=======\n");
  for (i = 0; i < sizeof(rdata); i++) {
    printf("%x \n\n", rdata[i]);
  }
  printf("=======\n");
}