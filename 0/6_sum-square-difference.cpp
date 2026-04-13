#include <iostream>
#include <math.h>

using namespace std;

int squareOfSums(int n) {
  return (n*n*(n+1)*(n+1)) / 4;
}

int sumOfSquares(int n) {
  return (n*(n+1)*(2*n + 1)) / 6;
}

int main() {
  int n = 100;
  int result = squareOfSums(n) - sumOfSquares(n);
  cout << result;
}