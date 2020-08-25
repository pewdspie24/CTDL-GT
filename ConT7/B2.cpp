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



int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    stack <int> a;
    string s;
    int n;
    cin>>n;
    cin.ignore();
    for(int abc = 0; abc < n; abc++){
        getline(cin,s);
        if(s[0] =='P' && s[1] == 'R'){
            if(a.empty()) cout<<"NONE"<<endl;
            else{
                cout<<a.top()<<endl;
            }
        }
        else if(s[0] == 'P' && s[1] == 'O'){
            if(!a.empty())
            a.pop();
        }
        else{
            int clgt = s.size();
            ll so = 0;
            for(int i = 5; i < s.size(); i++){
                so=so*10+s[i]-'0';
            }
            a.push(so);
        }
    }
    return 0;
}
//Code by QT