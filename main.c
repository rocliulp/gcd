#include <stdio.h>
int gcd (int u, int v) {
  int t = 0;
  while (u > 0) {
    if (u < v) {
      t = u;
      u = v;
      v = t;
    }
    u = u - v;
    printf ("u: %d, v: %d\n\r", u, v);
  }
  return v;
}

int main (int argc, char * argv []) {
  int x = 0;
  int y = 0;
  while (scanf ("%d %d", &x, &y) != EOF) {
    if (x > 0 && y > 0) {
      printf ("%d %d %d\n\r", x, y, gcd (x, y));
    }
  }
  return 0;
}
