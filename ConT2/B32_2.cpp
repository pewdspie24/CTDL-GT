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

map <string,int> check; 
vector <string> res;

int CheckS(string s){
    stack <char> sta;
    while(sta.size() != 0) sta.pop();
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') sta.push(s[i]);
        else if(s[i] == ')'){
            if(sta.empty()==true) return 0;
            else if(sta.top() == '(') sta.pop();
        }
    }
    if(sta.size() == 0) return 1;
    else return 0;
}

void sol(string s){
    queue <string> q;
    while(q.size() != 0) q.pop();
    check[s] = 1;
    q.push(s);
    int kt = 0;
    while(q.size() != 0){
        string s1 = q.front();
        q.pop();
        if(CheckS(s1) == 1){
            res.pb(s1);
            kt = 1;
        }
        if(kt == 0){
            for(int i = 0; i < s1.length(); i++){
                if(s1[i] == '(' || s1[i] == ')'){
                    string s2 = s1;
                    s2.erase(s2.begin()+i);
                    if(check[s2] == 0){
                        check[s2] = 1;
                        q.push(s2);
                    }
                }
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        sol(s);
        if(res.size() == 0) cout<<"-1"<<endl;
        else{
            sort(res.begin(),res.end());
            int kt2 = 0;
            for(int i = 0; i < res.size(); i++){
                if(res[i] == "") kt2 = 1;
                for(int j = 0; j < res[i].size(); j++){
                    if(res[i][j] != '(' && res[i][j] != ')' && res[i].size() == 1){
                        kt2 = 1;
                    }
                }
            }
            if(kt2 == 1) cout<<"-1";
            else for(int i = 0; i < res.size(); i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
        res.clear();
        check.clear();
    }
    return 0;
}
//Code by QT