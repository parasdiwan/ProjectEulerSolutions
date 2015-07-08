#include <iostream>
using namespace std;
long int sum=0;
long int fibonacciEvenSum(long int first, long int second) {
	long int next = first +second;
	if(next%2==0)
		sum=sum+next;
	
	if((next+second)>4000000)
		return sum;
	else
		fibonacciEvenSum(second, next);
}

int main() {
	// your code goes here
	long int f1=1;
	long int f2=2;
	long int finalSum=0;
	finalSum = fibonacciEvenSum(f1, f2)+f2;
	cout<<finalSum;
	return 0;
}
