#include <iostream>
#include <math.h>
using namespace std;
int lastPrime=1;
long long int divide(long long int x, long i) {
	while(x%i==0) {
		x=x/i;
	}
	return x;
}

int isPrime(long long int num) {
	int flag=1;
	long int sqrtNum = sqrt(num);
	for(long int i=2; i<=sqrtNum; i++) {
		if(num%i==0) {
			flag=0;
			break;
		}
	}
	return flag;
}
void findFactors(long long int x) {
 	int flag=0;
 	long int i=lastPrime+1;
 	for( ; i<=sqrt(x); i++) {
 		if(x%i==0 && isPrime(i)) {
 			lastPrime=i;
 			flag=1;
 			break;
 		}
 	}
 	
 	if(flag==1) {
 		lastPrime=i;
 		findFactors(divide(x, i));
 	}
 	else if(x>lastPrime && isPrime(x))	{
 		lastPrime =x;
 		return;
	}
 	else 
 		return;
}


int main() {
	long long int input = 600851475143;
	findFactors(input);
	cout<<lastPrime;
}
