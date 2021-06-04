#include<bits/stdc++.h>
using namespace std;
char word[][10] = {"zero" , "one" ,"two" , "three" ,"four" , "five" , "six" , "seven" , "eight" , "nine"};
int printspelling(char n[], int l ){
	if (l==0)
	{
		return 0;
	}
	int digit = n[l-1]-'0';

	int smaller =printspelling(n , l-1);
	return smaller*10+digit;
}

int main(){
char n[]  = {"1234"};
int l = strlen(n);
// cout<<l;
int x = printspelling(n , l);
cout<<x<<endl;
cout<<x+5;
}