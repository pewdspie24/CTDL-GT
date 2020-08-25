#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bep(smth) (smth).begin(), (smth).end()
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

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string s;
        stack <char> st;
        int kt = 0;
        getline(cin,s);
        if(s==""){
            T++;
            continue;
        }
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] != ')' && s[i] != ' ') st.push(s[i]);
            else if(s[i] != ' '){ 
                bool check = false;
                while(!s.empty()){
                    char tmp = st.top();st.pop();
                    if(tmp == '('){
                        if(check == false) kt = 1;
                        break;
                    }
                    else if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/' || tmp == '^' || tmp == '%'){
                        check = true;
                    }
                }
                if(kt == 1) break;
            }
        }
        if(kt) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
//Code by QT