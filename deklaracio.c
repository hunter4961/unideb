#include <stdio.h>

int (*v (int c)) (int a, int b);
int (*(*z) (int)) (int, int);

int main() {
  int a = 20;
  int *b = &a;
  //int &ra = a;
  int c[5];
  //int (&tr)[5] = c;
  int *d[5];
  int *h ();
  int *(*l) ();
  return 0;
}
