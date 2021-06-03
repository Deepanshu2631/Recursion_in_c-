
///fast power


#include<bits/stdc++.h>
using namespace std;
int  firstoccur(int n , int x){
	if (x==0)
	{
		return 1;
	}
	int small_pow = firstoccur(n , x/2);
	small_pow *=small_pow;
	if (x&1)
	{
		return n * small_pow;
	}
	return small_pow;




}
int main(){
int n;
cin>>n;
	int key;
	cin>>key;
	 cout<<firstoccur( n , key);

}