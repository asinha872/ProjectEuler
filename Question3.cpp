/*
Question:
      https://projecteuler.net/problem=3
*/
#include <iostream>

using namespace std;

unsigned long long prime(unsigned long long n){
	int i=2;
	while(n%i!=0&&i<n)
		i++;
	if(i<n)
		prime(n/i);
	else
		return n;
}

int main(){
	unsigned long long a=600851475143;
	cout<<prime(a)<<endl;
}
