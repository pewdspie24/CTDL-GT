#include <iostream>
using  namespace   std;
string   tieptheo(string str){
int k = str.length()-1;
while (str[k]<=str[k-1]&&k>0) k--;
if (k==0) return "BIGGEST";
int t=str.length()-1;
while (str[t]<=str[k-1]) t--;
char tmp = str[k-1];
str[k-1] = str[t];
str[t] = tmp;
for (int i=k; i<str.length(); i++)
   for (int j=i+1; j<str.length(); j++)
      if (str[i]>str[j]){
      	char tmp = str[i];
      	str[i] = str[j];
      	str[j] = tmp;
      }
return str;
}
int   main(){
	long long a,k;
	string b;
	cin>>a;
	for (int i=1; i<=a; i++){
		cin>>k>>b;
		cout<<k<<" "<<tieptheo(b)<<endl;
	}
	return 0;
}