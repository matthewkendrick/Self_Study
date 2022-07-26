#include <stdio.h>

int main(void) {

  char s1[] = {'a', 'b', 'c', '\0'};
  char s2[] = "HelloWorld.";
  char s3[10];

  printf("文字列を入力してください\n→ ");
  scanf("%s", s3);
  printf("s1 = %s\n", s1);
  printf("s2 = %s\n", s2);
  printf("s3 = %s\n", s3);

  return 0;
}