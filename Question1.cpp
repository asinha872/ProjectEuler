/*
Question:
	https://projecteuler.net/problem=1
*/
#include <iostream>

using namespace std;

int main(){
	int a3,a5,a15;
	int n=1000;
	a3=(n-1)/3;
	a5=(n-1)/5;
	a15=(n-1)/15;
	a3=3*a3*(a3+1)/2;
	a5=5*a5*(a5+1)/2;
	a15=15*a15*(a15+1)/2;
	
	int ans= a3+a5-a15;
	
	cout<<ans<<endl;
}
