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
    int T;
    cin>>T;
    while(T--){
        string s,sv;
        string s1 ="";
        string s2 = "";
        stack <II> a;
        cin>>s;
        cin>>sv;
        int kt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' && i == 0){
                a.push(mp(i,2));
                continue;
            }
            else if(s[i] == '(' && s[i-1] != '-' && s[i-1] != '+'){
                a.push(mp(i,2));
            } 
            else if(s[i] == '(' && s[i-1] == '-'){
                a.push(mp(i,1));
            } 
            else if(s[i] == '(' && s[i-1] == '+'){
                a.push(mp(i,2));
            }
            else if(s[i] == ')'){
                II tmp;
                tmp = a.top();
                if(tmp.se == 1) 
                for(int j = tmp.fi+1; j < i; j++){
                    if(s[j] == '+') s[j] = '-';
                    else if(s[j] == '-') s[j] = '+';
                }
                a.pop();
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '(' && s[i] != ')') s1+=s[i];
        }
        while(!a.empty()) a.pop();
        for(int i = 0; i < sv.size(); i++){
            if(sv[i] == '(' && i == 0){
                a.push(mp(i,2));
                continue;
            }
            else if(sv[i] == '(' && sv[i-1] != '-' && sv[i-1] != '+'){
                a.push(mp(i,2));
            } 
            else if(sv[i] == '(' && sv[i-1] == '-'){
                a.push(mp(i,1));
            } 
            else if(sv[i] == '(' && sv[i-1] == '+'){
                a.push(mp(i,2));
            }
            else if(sv[i] == ')'){
                II tmp;
                tmp = a.top();
                if(tmp.se == 1) 
                for(int j = tmp.fi+1; j < i; j++){
                    if(sv[j] == '+') sv[j] = '-';
                    else if(sv[j] == '-') sv[j] = '+';
                }
                a.pop();
            }
        }
        for(int i = 0; i < sv.size(); i++){
            if(sv[i] != '(' && sv[i] != ')') s2+=sv[i];
        }
        // cout<<s1<<endl;
        if(s1.size() != s2.size()) cout<<"NO"<<endl;
        else{
            int kt = 0;
            for(int i = 0; i < s1.size(); i++){
                if(s1[i] != s2[i]){
                    kt = 1;
                    break;
                }
            }
            if(kt) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
        // if(!s1.compare(s2)) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
   }
    return 0;
}
//Code by QT