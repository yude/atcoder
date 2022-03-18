// ABC081B - Shift only
// https://atcoder.jp/contests/abs/tasks/abc081_b
#include <stdio.h>

int main() {
    int n;
    int a[200];
    int flag = 0;
    int count = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
        
    while (1) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                flag = 1;
            }
        }
        if (flag == 1) break;
        
        for (int i = 0; i < n; i++) {
            a[i] = a[i] / 2;
        }
        count++;
    }
    
    printf("%d\n", count);
}