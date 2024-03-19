#include <math.h>
#include <stdio.h>
float math_func(float a, float b) {
  float math_func;
  math_func = pow(a, 2) - 2 * a * b - 42;
  return math_func;
}
int main(void) {
  float a, b, output;
  scanf("%f %f", &a, &b);
  output = math_func(a, b);
  printf("%.2lf", output);
  return 0;
}
