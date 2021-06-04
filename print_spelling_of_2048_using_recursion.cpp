#include<bits/stdc++.h>
using namespace std;
char word[][10]={"zero" ,"one" ,"two" ,"three","four","five","six","seven","eight","nine"};
void printspelling(int n){
	if (n==0)
	{
		return;
	}
	int digit = n%10;
	printspelling(n/10);
	cout<< word[digit]<<",";
	

}
int main(){
int n;
cin>>n;
printspelling(n);

}