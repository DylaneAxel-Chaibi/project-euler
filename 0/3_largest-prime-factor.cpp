#include <iostream>
#include <math.h>

using namespace std;

long long largestPrimeFactor(long long n) {
  long long L = 0;
  while (n % 2 == 0) {
    L = 2;
    n /= 2;
  }
  for (long long i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      L = i;
      n /= i;
    }
  }
  if (n > 2) L = n;
}

int main() {
    long long n = 600851475143LL;
    long long result = largestPrimeFactor(n);
    cout << result;
    return 0;
}