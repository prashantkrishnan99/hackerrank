#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int count = 0;    
    sort(ar.begin(), ar.end(), greater<int>());
    int height = ar.front(); 
    for(unsigned i=0; i<ar.size();i++) { 
        if(height == ar.at(i))
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
