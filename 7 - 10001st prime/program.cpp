#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n=10001;
	int count=0;
	long long int test=2;
	while(count<n) {
		int flag=0;
		for(long long int i=2 ; i<=sqrt(test); i++) {
			if(test%i==0) {
				flag=1;
				break;
			}
		}
		if(flag==0)
			count++;
			
		test++;
	}
	cout<<test-1;
	return 0;
}