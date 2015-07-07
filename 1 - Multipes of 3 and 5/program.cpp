#include <iostream>
using namespace std;
 
int main() {
	int firstNumber = 3;
	int secondNumber = 5;
	int limit =1000;
	int sum=0;
	 
	int firstFactors = (limit-1)/firstNumber;
	int secondFactors = (limit-1)/secondNumber;
	int combinedFactors = (limit-1)/(firstNumber*secondNumber);
	 
	sum += (firstFactors*(firstFactors+1)*firstNumber)/2;
	sum += (secondFactors*(secondFactors+1)*secondNumber)/2;
	sum -= (combinedFactors*(combinedFactors+1)*secondNumber*firstNumber)/2;
	 
	cout<<sum;
// your code goes here
return 0;
}