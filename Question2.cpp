/*
Question:
	https://projecteuler.net/problem=1
*/
#include <iostream>
using namespace std;
int main(){
	unsigned long a,b,c=0,sum=10;
	a=2;
	b=8;
	while(c<4000000){
		c=(4*b)+a;
		sum+=c;
		a=b;
		b=c;
	}
	sum-=c;
	cout<<sum<<endl;
}
