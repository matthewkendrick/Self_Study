#include <stdio.h>
#include <string.h>

int main(void) {
  char s[20];
  int len;

  printf("==============================\n");
  // ここでは文字列をコピーしています。
  strcpy(s, "ABCD");
  printf("s = %s", s);
  printf("\n");

  len = strlen(s);;
  printf("文字列の長さ：%d", len);
  printf("\n");
  printf("------------------------------\n");

  // ここでは上記でコピーした文字列を結合しています。
  strcat(s, "EFGH");
  printf("s = %s", s);
  printf("\n");

  len = strlen(s);;
  printf("文字列の長さ：%d", len);
  printf("\n");
  printf("==============================\n");
}