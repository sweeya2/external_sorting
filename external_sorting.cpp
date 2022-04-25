#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(k);
    for(int i = 0; i < k; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++)
        cout << v[i] << endl;
    return 0;
}