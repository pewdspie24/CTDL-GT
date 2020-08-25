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
    while(getline(cin,s)){
        if(s == "") continue;
        if(s[0] =='s'){
            if(a.empty()) cout<<"empty"<<endl;
            else{
                int tmp = a.size();
                vi b;
                for(int i = 0; i < tmp; i++){
                    int temp = a.top();
                    b.pb(temp);
                    a.pop();
                }
                for(int i = 0; i < b.size(); i++){
                    cout<<b[b.size()-1-i]<<" ";
                    a.push(b[b.size()-1-i]);
                } 
                cout<<endl;
                b.clear();
            }
        }
        else if(s[1] == 'o'){
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