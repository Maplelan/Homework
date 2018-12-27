#include <stdio.h>
int main() {
  int maxLine;
  scanf("%d", &maxLine);
  for (int line = 1; line <= maxLine; line++) {
    for (int row = 1; row <= line; row++) {
      printf("%d*%d=%-4d", row, line, line * row);
    }
    printf("\n");
  }
}