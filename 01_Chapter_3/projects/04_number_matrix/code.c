#include <stdio.h>

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
  printf("Enter the numbers from 1 to 16 in any order: \n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e,
        &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
  printf("\n\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", a, b, c, d,
         e, f, g, h, i, j, k, l, m, n, o, p);
  printf("\nRow sums: %d %d %d %d", a + b + c + d, e + f + g + h, i + j + k + l,
         m + n + o + p);
  printf("\nColumn sums: %d %d %d %d", a + e + i + m, b + f + j + n,
         c + g + k + o, d + h + l + p);
  printf("\nDiagonal sums: %d %d\n", a + f + k + p, d + g + j + m);
  return 0;
}

// RESULT
// Enter the numbers from 1 to 16 in any order:
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//
//
// 16 3 2 13
// 5 10 11 8
// 9 6 7 12
// 4 15 14 1
//
// Row sums: 34 34 34 34
// Column sums: 34 34 34 34
// Diagonal sums: 34 34
