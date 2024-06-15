#include <stdio.h>

int main(void) {
  int n, a, b;
  if (scanf("%d %d %d", &n, &a, &b) == 1)
    ;
  int num_buff = 0;
  int sum = 0;
  char buff[2];

  for (int i = 1; i <= n; i++) {
    num_buff += i / 1000;
    num_buff += (i - (i / 1000) * 1000) / 100;
    num_buff += (i - (i / 100) * 100) / 10;
    num_buff += (i - (i / 10) * 10) % 10;
    if (num_buff >= a && num_buff <= b) {
      sum += i;
    }
    num_buff = 0;
  }

  printf("%d\n", sum);
}