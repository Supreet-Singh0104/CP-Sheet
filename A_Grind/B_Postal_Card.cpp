#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Step 1: Read the N strings S
    vector<string> s_list(n);
    for (int i = 0; i < n; ++i) {
        cin >> s_list[i];
    }

    // Step 2: Read and store all T strings in a set for quick look-up
    unordered_set<string> t_set;
    for (int i = 0; i < m; ++i) {
        string t;
        cin >> t;
        t_set.insert(t);
    }

    // Step 3: For each S string, check if its last 3 characters are in the set
    int count = 0;
    for (int i = 0; i < n; ++i) {
        string suffix = s_list[i].substr(3, 3); // Extract the last 3 characters of S
        if (t_set.find(suffix) != t_set.end()) {
            count++;
        }
    }

    // Step 4: Output the number of matching strings
    cout << count << endl;

    return 0;
}
