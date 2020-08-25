#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack <char> st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                string tmp="",so="";
                int xh=0;
                while(st.size() && st.top()!='['){
                    tmp+=st.top();
                    st.pop();
                }
                st.pop();
                while(st.size() && '0'<=st.top() && st.top()<='9'){
                    so+=st.top();
                    st.pop();
                }
                for(int i=0;i<tmp.size()/2;i++){
                    swap(tmp[i],tmp[tmp.size()-i-1]);
                }
                for(int i=so.size()-1;i>=0;i--){
                    xh=xh*10+(so[i]-'0');
                }
                while(xh--){
                    ans=tmp+ans;
                }
            }
            else st.push(s[i]);
        }
        cout<<ans<<endl;

    }
    return 0;
} 
//Code by Ninh Ngoc