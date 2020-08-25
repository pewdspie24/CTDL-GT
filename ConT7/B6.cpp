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
    cin.ignore();
    while(T--){
        string s;
        stack <int> a;
        while(!a.empty()) a.pop();
        getline(cin,s);
        int kt = 0;
        int dem  = 0;
        int tmp = s.size();
        for(int i = 0; i < tmp; i++){
            if(i == 0 && s[i] == '('){ // dau
                tmp--;
                continue;
            }
            if(s[i] != '(' && s[i] != ')' && s[i] != ' ' && !a.empty()){ //chu
                dem++;
                continue;
            }
            if(s[i] == '(' ){
                a.push(i);
            } 
            else if(s[i] == ')'){
                if(dem < 3){ //it hon 3 pt gom 2 chu va 1 phep toan
                    kt = 1;
                    break;
                }
                else{
                    int j = a.top();
                    bool pre = false;
                    while(j){
                        if(s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/' || s[j] == '^' || s[j] == '%'){
                            pre = true;
                            break;
                        }
                        j--;
                    }
                    j = i;
                    bool aft = false;
                    while(j != tmp){
                        if(s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/' || s[j] == '^' || s[j] == '%'){
                            aft = true;
                            break;
                        }
                        j++;
                    }
                    if(pre || aft){
                        dem = 0;
                        a.pop();
                        continue;
                    }
                    else{
                        kt = 1;
                        break;
                    }
                }
            }
        }
        if(kt) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
   }
    return 0;
}
//Code by QT