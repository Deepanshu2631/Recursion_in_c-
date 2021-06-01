#include<bits/stdc++.h>
using namespace std;
bool issorted(int a[]  , int n){
	if (n == 0 or n== 1)
	{
		return true;
	}
	if (a[0]<a[1] and issorted(a+1 , n-1))
	{
		return true;

	}
	return false;

}
int main(){
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}	

	cout<<issorted(a , n);
}