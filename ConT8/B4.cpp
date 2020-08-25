#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define QT NN

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        priority_queue<int> pq;
        int a[1000]={0};
        for(int i = 0; i < s.size(); i++){
            a[s[i]-'A']++;
            // cout<<s[i]-'A'<<endl;
        }
        for(int i = 0; i < 27; i++){
            if(a[i]) pq.push(a[i]);
        }
        if(k)
        while(k--){
            int tmp = pq.top();
            if(pq.top() == 0) break;
            // cout<<tmp<<endl;
            pq.pop();
            tmp--;
            pq.push(tmp);
        }
        ll res = 0;
        while(!pq.empty()){
            ll temp = pq.top();
            res+=temp*temp;
            pq.pop();
        }
        cout<<res<<endl;
   }
    return 0;
}
//Code by QT