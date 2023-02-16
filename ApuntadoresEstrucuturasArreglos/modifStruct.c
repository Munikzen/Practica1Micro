#include <stdio.h>

struct point {
  int x;
  int y;
};

int main() {

  struct point p;

  p.x = 10;
  p.y = 20;

  p.x = -4;

  return 0;
}
