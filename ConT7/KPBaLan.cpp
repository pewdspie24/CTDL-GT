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

int priority(char x){
    if(x == '(') return 1;
    else if(x == '+' || x == '-') return 2;
    else if(x == '*' || x =='/') return 3;
    return 4;
}

void KPBalan(string s, stack <char> a){
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') cout<<s[i];
        else if(s[i] >= 'a' && s[i] <= 'z') cout<<s[i];
        else{
            if(s[i] == '(') a.push(s[i]);
            else{
                if(s[i] == ')'){
                    while(a.top() != '('){
                        cout<<a.top();
                        a.pop();
                    }
                }
                else{
                    if(!a.empty())
                    while(priority(s[i]) <= priority(a.top()) && !a.empty()){
                        if(a.top() != '(')
                        cout<<a.top();
                        a.pop();
                        if(a.empty()) break;
                    }
                    a.push(s[i]);
                }
            }
        }
    }
    while(!a.empty()){
        if(a.top() != '(')
        cout<<a.top();
        a.pop();
    }
}

ll sumofBalan(string s){
    stack <ll> sum;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            ll tmp = 0;
            while(s[i] >= '0' && s[i] <= '9'){
                tmp = tmp*10+s[i]-'0';
                i++;
                if(i == s.length()) break;
            }
            sum.push(tmp);
        }
        else{
            ll tmp1 = sum.top(); sum.pop();
            ll tmp2 = sum.top(); sum.pop();
            if(s[i] == '+') sum.push(tmp1+tmp2);
            if(s[i] == '-') sum.push(tmp1-tmp2);
            if(s[i] == '*') sum.push(tmp1*tmp2);
            if(s[i] == '/') sum.push(tmp1/tmp2);
        }
    }
    return sum.top();
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        string s;
        stack<char> a;
        cin>>s;
        KPBalan(s,a);
        cout<<endl;
    }
    
    return 0;
}
//Code by QT