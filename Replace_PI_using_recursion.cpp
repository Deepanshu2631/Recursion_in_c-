#include<bits/stdc++.h>
using namespace std;
void replacePi(string s  , int i){
	if (s[i]==0 or s[i+1]=='\0')
	{
		return;
	}
	if(s[i]=='p' and s[i+1]=='i'){
		cout<<"3.14";
	}else{
		cout<<s[i];
	}

	replacePi(s , i+1);

}
int main(){
string s;
cin>>s;
int n = s.length();
replacePi(s,0);
// // for (int i = 0; i <n ; ++i)
// // 	{
// // 		if (s[i]=='p'&&s[i+1]=='i')
// // 		{
// // 			cout<<"3.14";
// // 		}else{
// // 			cout<<s[i];
// // 		}
// 	}	
}