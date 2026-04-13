#include <iostream>
#include <math.h>

using namespace std;

int A(int n) {
  if (n == 1) return 2;
  if (n == 2) return 8;
  return 4*A(n-1) + A(n-2);
}

int sumOfAnBelow(int Bound) {
  int i = 1;
  int n = A(i);
  int sum = 0;
  while(n < Bound) {
    sum += A(i);
    i++;
    n = A(i);
  }
  return sum;
}

int main() {
  int Bound = 4000000;
  int result = sumOfAnBelow(Bound);
  cout << result;
}