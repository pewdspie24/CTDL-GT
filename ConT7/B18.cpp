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


int priority(char x){
    if(x == '+' || x == '-') return 1;
    else if(x == '*' || x =='/') return 2;
    return 0;
}

ll KPBalan(string s){
    stack <ll> a;
    stack <char> b;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == ' ') continue;
        else if(s[i] >= '0' && s[i] <= '9'){
            ll tmp = 0;
            while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
                tmp=tmp*10+s[i]-'0';
                i++;
                // if(i == s.length()) break;
            }
            a.push(tmp);
            // i--;
        }
        else if(s[i] == '(') b.push(s[i]);
        else if(s[i] == ')'){
            while(!b.empty() && b.top() != '('){
                ll tmp2 = a.top(); a.pop();
                ll tmp1 = a.top(); a.pop();
                char op = b.top(); b.pop();
                if(op == '+') a.push(tmp1+tmp2);
                if(op == '-') a.push(tmp1-tmp2);
                if(op == '*') a.push(tmp1*tmp2);
                if(op == '/') a.push(tmp1/tmp2);
            }
            if(!b.empty())
            b.pop();
        }
        else{
            while(!b.empty() && priority(s[i]) <= priority(b.top())){
                ll tmp2 = a.top(); a.pop();
                ll tmp1 = a.top(); a.pop();
                char op = b.top(); b.pop();
                if(op == '+') a.push(tmp1+tmp2);
                if(op == '-') a.push(tmp1-tmp2);
                if(op == '*') a.push(tmp1*tmp2);
                if(op == '/') a.push(tmp1/tmp2);
            }
            b.push(s[i]);
        }
    }
    while(!b.empty()){
        ll tmp2 = a.top(); a.pop();
        ll tmp1 = a.top(); a.pop();
        char op = b.top(); b.pop();
        if(op == '+') a.push(tmp1+tmp2);
        if(op == '-') a.push(tmp1-tmp2);
        if(op == '*') a.push(tmp1*tmp2);
        if(op == '/') a.push(tmp1/tmp2);
    }
    return a.top();
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    // cin.ignore();
    while(T--){
        string s;
        string s1="";
        cin>>s;
        for(int i = 0; i < s.size(); i++){
            // cout<<s[i]<<" ";
            if(i!=0){
                if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '(' || s[i] == ')'){
                    s1+=" ";
                    s1+=s[i];
                    s1+=" ";
                }
                else s1+=s[i];
            }
            else s1+=s[i];
        }
        // cout<<s1<<endl;
        cout<<KPBalan(s1)<<endl;
    }
    return 0;
}
//Code by QT
