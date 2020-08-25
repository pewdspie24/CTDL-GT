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
                    while(!a.empty() && a.top() != '('){
                        cout<<a.top();
                        a.pop();
                    }
                    a.pop();
                }
                else{
                    if(!a.empty())
                    while(priority(s[i]) <= priority(a.top()) && !a.empty()){
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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        stack<string> a;
        for(int i = s.size()-1; i>= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                string tmp1 = a.top();
                a.pop();
                string tmp2 = a.top();
                a.pop();
                string temp = '(' + tmp1 + s[i] + tmp2 + ')';
                a.push(temp);
            }
            else{
                a.push(string(1,s[i]));
            }
        }
        string tmp = a.top();
        cout<<a.top()<<endl;
   }
    return 0;
}
//Code by QT