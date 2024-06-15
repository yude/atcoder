#include <stdio.h>

int main() {
  int a, b, c, x;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &x);

  int count_500 = 0;
  int count_100 = 0;
  int count_50 = 0;
  int patterns = 0;

  for (;;) {
    printf("aa\n");
    if (x - (count_500 + 1) * 500 > 0) {
      count_500++;
    }
    if (x - (count_500 + 1) * 500 - (count_100 + 1) * 100 > 0) {
      count_100++;
    }
    if (x - (count_500 + 1) * 500 - (count_100 + 1) * 100 -
            (count_50 + 1) * 50 >
        0) {
      count_50++;
    }
    printf("count_500: %d, count_100: %d, count_50: %d\n", count_500, count_100,
           count_50);
    if (x - count_500 * 500 - count_100 * 100 - count_50 * 50 <= 0) {
      break;
    }

    patterns++;
  }

  printf("%d\n", patterns);
}