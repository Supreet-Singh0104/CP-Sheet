#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>

using namespace std;
typedef long long int ll;

int main() {
    // code here
    string s; cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        cout<<(char)(s[i]-('a'-'A'));
    }
    return 0;
}