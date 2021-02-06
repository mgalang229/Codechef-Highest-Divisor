#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
 	int n;
 	cin >> n;
 	int ans = 0;
 	for (int i = 1; i <= 10; i++) {
 		// find the highest divisor of n from 1 to 10
 		if (n % i == 0) {
 			ans = i;
 		}
 	}
 	cout << ans << '\n';
  return 0;
}      
