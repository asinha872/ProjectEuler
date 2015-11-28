/*
Question:
      https://projecteuler.net/problem=4
*/
#include <iostream>

using namespace std;

int reverse(int n){
	int rev=0;
	while(n!=0){
		rev*=10;
		rev+=n%10;
		n/=10;
	}
	return rev;
}
int palindrome(){
	int n,max=0;
	for(int i=999;i>100;i--)
		for(int j=999;j>100;j--){
			n=i*j;
			if(n==reverse(n))
				if(max<n)
					max=n;
		}
	return max;
}

int main(){
	cout<<palindrome()<<endl;
}
