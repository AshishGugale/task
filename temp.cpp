#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0, max_ele = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n - 1; i++){
        if(v[i] <= v[i + 1])
            continue;
        ans += abs(v[i + 1] - v[i]);
        v[i + 1] = v[i];
    }
    cout << ans << endl;
}