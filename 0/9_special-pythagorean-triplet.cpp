#include <iostream>
#include <math.h>

using namespace std;

int findTripletWithSum(int n) {
  for (int a = 1; a < n; a++) {
    int numerator = 1000 * (1000 - 2*a);
    int denominator = 2 * (1000 - a);
    if (numerator % denominator == 0) {
      int b = numerator / denominator; // b = (1000 * (1000 - 2*a)) / (2 * (1000 - a))
      int c = n - a - b;
      if (a < b && b < c) { // a < b < c
        return a * b * c;
      }
    }
  }
}

int main() {
  int n = 1000;
  int result = findTripletWithSum(n);
  cout << result << endl;
}