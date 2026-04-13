#include <iostream>
#include <math.h>
#include <array>

using namespace std;

int smallestMultiple(int n) {
  array<int,8> primes = {2,3,5,7,11,13,17,19};
  int result = 1;
  for(int i = 0; i < 8; i++) {
    int a = primes[i];
    while(a <= 20) {
      a *= primes[i];
      result *= primes[i];
    }
  }
  return result;
  
}

int main() {
  int n = 20;
  int result = smallestMultiple(n);
  cout << result;
}