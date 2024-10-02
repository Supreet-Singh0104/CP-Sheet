#include <iostream>
using namespace std;

int main() {
    int t;  // number of test cases
    cin >> t;
    
    while (t--) {
        int n;  // the k-th liked number to find
        cin >> n;
        
        int count = 0;  // to track how many liked numbers we've found
        int ans = 1;    // current number we're checking
        
        // Find the k-th liked number
        while (true) {
            // Check if the current number is liked by Polycarp
            if (ans % 3 != 0 && ans % 10 != 3) {
                count++;  // we found a liked number
            }
            
            // If we've found the k-th liked number, print it
            if (count == n) {
                cout << ans << endl;
                break;
            }
            
            ans++;  // move to the next number
        }
    }
    
    return 0;
}
