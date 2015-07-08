#include <iostream>
#include <math.h>
using namespace std;

int reverse(int x) {
	int rev=0;
	for(int i=0; i<3; i++) {
		int m = x%10;
		rev = rev*10 +m;
		x=x/10;
	}
	return rev;
}
int howManyDigit(int num) {
	//This function is meant to find the number of digits in the second factor of the palindrome
	
	int count=0;
	while(num>0) {
		num=num/10;
		count++;
	}
	return count;
}
void findLargestPalindrome(int x, int y) {
	int test = x*1000+y;
	
	for(int i=sqrt(test); i>100; i--) {
		if(test%i==0) {
			if(howManyDigit(test/i)==3) {
				cout<<test<<endl;
				exit(0);
			}
			else if(howManyDigit(test/i)>3)
				break;
		}
	}
	
	findLargestPalindrome(x-1, reverse(x-1));
	
}
int main() {
	// your code goes here
	long int palin = 999999;
	int p1 = palin/1000;
	int p2 = palin%1000;
	
	findLargestPalindrome(p1, p2);
	return 0;
}