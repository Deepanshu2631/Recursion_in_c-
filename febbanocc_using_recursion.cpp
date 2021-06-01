#include<bits/stdc++.h>
using namespace std;
int  fab(int n){
	if (n <=1)
	
		return n;
	
	 
	
return fab(n-1)+fab(n-2);
}
int main(){
int n;
cin>>n;
// int a = 0;
// int b = 1;

// while(n--){
// 	int c = a+b;
// 	a = b ;
// 	b = c;
// 	cout<< c<<",";
// }
cout<<fab(n);
return 0;

}