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
const ll M = 1e9+7;

ll powQ (ll a, ll b){
    ll res = 1;
    while(b>0){
        if(b%2!=0) res=(res*a);
        a = (a*a);
        b/=2;
    }
    return res;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        int a[limit] = {0};
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        stack<ll> phevat;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == '*'){
                ll tmp = 0;
                int j = i-1, lol = 0;
                while(s1[j] >= '0' && s1[j] <= '9'){
                    tmp += (s1[j]-'0')*powQ(10,lol);
                    j--;
                    lol++;
                    if(j == -1) break;
                }
                phevat.push(tmp);
            }
            if(s1[i-1] == '^'){
                ll tmp = 0;
                int j = i;
                while(s1[j] >= '0' && s1[j] <= '9'){
                    tmp = tmp*10+s1[j]-'0';
                    j++;
                    if(j == s1.size()) break;
                }
                a[tmp] += phevat.top();
                phevat.pop();
            }
        }
        for(int i = 0; i < s2.size(); i++){
            if(s2[i] == '*'){
                ll tmp = 0;
                int j = i-1, lol = 0;
                while(s2[j] >= '0' && s2[j] <= '9'){
                    tmp += (s2[j]-'0')*powQ(10,lol);
                    j--;
                    lol++;
                    if(j == -1) break;
                }
                phevat.push(tmp);
            }
            if(s2[i-1] == '^'){
                ll tmp = 0;
                int j = i;
                while(s2[j] >= '0' && s2[j] <= '9'){
                    tmp = tmp*10+s2[j]-'0';
                    j++;
                    if(j == s2.size()) break;
                }
                a[tmp] += phevat.top();
                phevat.pop();
            }
        }
        int kt = 0;
        for(int i = 10000; i >= 0; i--){
            if(a[i] != 0 && kt == 0){
                cout<<a[i]<<"*x^"<<i;
                kt = 1;
            }
            else if(a[i] != 0){
                cout<<" + "<<a[i]<<"*x^"<<i;
            }
        }
        cout<<endl;
   }
    return 0;
}
//Code by QT