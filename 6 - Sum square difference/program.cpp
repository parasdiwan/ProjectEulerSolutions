#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n=100;
	long long int sumOfSquares = (n*(n+1)*(2*n+1))/6;
	long long int squareOfSum = (n*n*(n+1)*(n+1))/4;
	cout<<(squareOfSum-sumOfSquares);
	return 0;
}