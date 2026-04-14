#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<int> sieveOfEratosthenes(int n) {
  vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            
            // marking as false
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    
    vector<int> res;
    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            res.push_back(p);
        }
    }
    return res;
}

int main() {
  int result = sieveOfEratosthenes(200000)[10000];
  cout << result << endl;
}