// ABC081A - Placing Marbles
// https://atcoder.jp/contests/abs/tasks/abc081_a
#include <stdio.h>

int main() {
  char s[3];
  int count = 0;
  scanf("%s", s);

  for (int i = 0; i < 3; i++) {
    if (s[i] == '1') {
      count++;
    }
  }

  printf("%d\n", count);
}