#include <iostream>
#include <math.h>

using namespace std;
bool isPalindrom(int n) {
  int sum = 0;
  int temp = n;
  while (temp > 0) {
    sum = sum*10 + temp%10;
    temp /= 10;
  }
  return sum == n;
}
int largestPalindrome() { // a 6-digit palindrome must be divisible by 11
  int M = 0;
  for (int i = 990; i >= 100; i -= 11) {
    for(int j = 999; j >= i; --j) {
      int m = i*j;
      if(m < M) break;
      if(isPalindrom(m)) M = m;
    }
  }
  return M;
}

int main() {
  int result = largestPalindrome();
  cout << result <<endl;
}