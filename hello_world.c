#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, a[1000];
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    a[i] = rand()%100;
    printf("%d ", a[i]);
  }
  printf("\n");

  // Even
  for (int i=0; i<n; i++)
    if (a[i] % 2 == 0)
      printf("%d ", a[i]);

  // Odd
  for (int i=0; i<n; i++)
    if (a[i] % 2 == 1)
      printf("%d ", a[i]);
  printf("\n");

  return 0;
}
