// multiply two number without using * 




#include<bits/stdc++.h>
using namespace std;
int multple(int a ,int b){
	if (b==1)
	{
		return a;

	}
	int mul = 1;
	mul = a + multple(a, b-1);
	return mul;

}

int main(){
int a,b;
cin>>a>>b;
cout<<multple(a,b) <<endl;
}