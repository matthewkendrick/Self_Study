#include <stdio.h>
#include <string.h>
#define SIZE 256

int main(void) {
  char s1[SIZE], s2[SIZE];

  printf("========================================\n");
  printf("s1 = ");
  scanf("%s", s1);

  printf("s2 = ");
  scanf("%s", s2);

  printf("\n");
  if (strcmp(s1, s2) == 0) {
    printf("s1 と s2 は等しいです。");
  } else {
    printf("s1 と s2 は等しくありません。");
  }
  printf("\n");
  printf("========================================\n");
}