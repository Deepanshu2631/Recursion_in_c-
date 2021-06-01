// calculate power using recursion
#include<bits/stdc++.h>
using namespace std;
int pow(int a  ,  int n){
	if ( n==1)
	{
		return a;
	}
	int power =1;
	power  = a* pow(a,n-1);
	return power;
}

int main(){
int  a,n;
cin>>a>>n;
cout<< pow(a ,n)<<endl;
}