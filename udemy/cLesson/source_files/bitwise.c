#include <stdio.h>

int main(void) {
  unsigned char i = 0xf;
  unsigned char j = 0xff;

  printf("====================\n");
  printf("%x << 1 = 0x%x\n", i, i << 1);
  printf("%x >> 1 = 0x%x\n", i, i >> 1);
  printf("%x | %x = 0x%x\n", i, j, i | 1);
  printf("%x & %x = 0x%x\n", i, j, i & 1);
  printf("~%x = 0x%x\n", i, (unsigned char) ~i);
  printf("====================\n");
}