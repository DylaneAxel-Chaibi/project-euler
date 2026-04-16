#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<long long> sieveOfEratosthenes(int n) {
  vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            
            // marking as false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    
    vector<long long> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}

int main() {
  long long result = 0;
  for(const auto prime : sieveOfEratosthenes(2000000)) {
    result += prime;
  }
  cout << result << endl;
}