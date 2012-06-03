#include<iostream>
using namespace::std;
int factorial(int num) { 
	int fact=1;
	if(num == 0 || num == 1)
		return 1;	
	while(num>=2) fact*=num--;
	return fact;
}
int main(int argc ,char **argv) {
	int n,num;
	cin>>n;
	while(n--) {
		cin>>num;		
		cout<<factorial(num)<<endl;
	}
}

		
