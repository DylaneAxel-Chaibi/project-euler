#include <iostream>
#include <math.h>

using namespace std;

int sumOfMulOfBelow(int a, int b) {
  return a * (((b/a) * ((b/a) + 1)) / 2);
}

int main() {
  int m = 3, n = 5, Bound = 1000;
  int result = sumOfMulOfBelow(m, Bound) + sumOfMulOfBelow(n, Bound) - sumOfMulOfBelow(m*n, Bound);
  result = (Bound % m == 0 || Bound % n == 0) ? result - Bound : result;
  cout << result;
}