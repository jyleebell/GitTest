#include <stdio.h>

int
sum_it (int a, int b) {
  return a + b;
}

int
main() {
  int i, sum = 0;

  for (i = 0; i < 100; i++) {
	sum = sum_it(i, sum);
  }
  printf("Hello, World! = %d\n", sum);
  return 0;
}
