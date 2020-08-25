#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        int d;
        cin>>d;
        cin>>s;
        int kt = 0;
        int freq[256]={0};
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
        }
        sort(freq,freq+256, greater<int>());
        vi sol;
        int i = 0;
        while(freq[i] != 0){
            sol.pb(freq[i]);
            // cout<<freq[i];
            i++;
        }
        sort(sol.begin(), sol.end());
        i = 0;
        int k = sol.size();
        while(i<k){
            int p = sol[sol.size()-1];
            // cout<<p<<endl;
            for(int j = 0; j < p; j++){
                if(i+(j*d)>s.size()){
                    kt = 1;
                    break;
                }
            }
            i++;
            sol.pop_back();
            if(kt == 1) break;
        }
        if(kt == 1) cout<<"-1"<<endl;
        else cout<<"1"<<endl;
   }
    return 0;
}
//Code by QT