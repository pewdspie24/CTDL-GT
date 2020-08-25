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
    string s1,s2;
    cin>>s1>>s2;
    string maxs1="", maxs2="", mins1="", mins2="";
    ll s1max=0,s2max=0,s2min=0,s1min=0;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == ' |5'| s1[i] == '6'){
            maxs1+='6';
            mins1+='5';
        }
        else{
            mins1+=s1[i];
            maxs1+=s1[i];
        }
    }
    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == '5' || s2[i] == '6'){
            maxs2+='6';
            mins2+='5';
        }
        else{
            mins2+=s2[i];
            maxs2+=s2[i];
        }
    }

    for(int i = 0; i < s1.size(); i++){
        s1min= s1min*10+(mins1[i]-'0');
        s1max= s1max*10+(maxs1[i]-'0');
    }
    for(int i = 0; i < s2.size(); i++){
        s2min= s2min*10+(mins2[i]-'0');
        s2max= s2max*10+(maxs2[i]-'0');
    }
    // cout<<s2min<<" "<<s2max<<endl;
    cout<<s1min+s2min<<" "<<s2max+s1max;
    return 0;
}
//Code by QT