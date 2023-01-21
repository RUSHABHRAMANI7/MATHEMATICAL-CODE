#include<iostream>
#include<limits.h>
using namespace std;
// This prints the divisors in increasing order // 
void printDivisors(int n)
{
	int i = 1;
	
	// prints the divisor of the number upto number square root of n // 
	
	cout << "The factors of the number is :"<< endl; 

	for(i=1; i*i < n; i++)
	{
		if(n % i == 0)                                     
		{
	 		cout<<i<<" ";
		}
	}
	// this step is added to avoid the printing of the numbers twice //  
    i--; 
	// prints the divisor from square root of n to n // 
	for(; i >= 1; i--)
	{
		if(n % i == 0)
		{
			cout<<(n / i)<<" ";
		}
	}
}

int main() {
    //takes the input of the number // 
    	int n ; 

		cout << "Enter the number n: "<<endl; 

		cin>> n; 
    	
    	printDivisors(n);
    	
    	return 0;
}
/*OUTPUT OF THE PROGRAMM FOR N=20 IS : 1 2 4 5 10 20 */

/* IF THE OUTPUT OF THE PROGRAMM FOR N=20  IS = 1 20 2 10 4 5 */
/*  for (int i = 1 ; i*i<n; i++){
	if (i%n){
		if (n/i==i)
		cout<<i << " " ; 
		else 
		cout << i << " " << n/i << endl ; 
	}
} 
*/