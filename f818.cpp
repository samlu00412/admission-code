#include <bits/stdc++.h>

using namespace std;
 
inline bool cmp(pair <int,int> a, pair<int,int> b){
    return a.first * a.second < b.first * b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int i,n;
    cin >> n;
    pair<int,int> p[n];
    for(i = 0; i < n; ++i)
        cin >> p[i].first;
    for(i = 0; i < n; ++i)
        cin >> p[i].second;
    sort(p,p+n,cmp);
    cout << p[0].first << ' ' << p[0].second;
    return 0;
}