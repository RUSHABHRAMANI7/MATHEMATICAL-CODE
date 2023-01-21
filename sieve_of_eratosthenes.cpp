#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void sieve(int n)
{
	// this statement is for the case when number is 0 , 1 //
	if (n <= 1)
		cout << "There are no prime numbers present upto these number ";

	vector<bool> isPrime(n + 1, true); // this vector allocates the n+1 space and marks all the the array position as true //

	// This for loop marks the false condition  for the even and odd numbers which are not prime //

	for (int i = 2; i * i <= n; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= n; j = j + i) /* The every non-prime number can be represented as : */
			{									   // i^2 , i^2+i , i^2+2i , i^2+3i , i^2+4i ......//
				isPrime[j] = false;				   // example : for i = 2 , the position marled false are : //
			}									   // 4 , 6 , 8 , 10 ........  //
		}
	}
	// this for loop print all the even numbers between 1 to n  //
	cout<<"All the prime numbers upto number n is : " << endl ; 
	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i]) // Checks if the ith position is true the it will print the number //
			cout << i << " ";
	}
}
int main()
{
    // takes the input of the number // 
	int n;
	cout << "Enter the value of n " << endl;
	cin >> n;
	sieve(n);
}
// Therefore the time complexity in the worst case situation is O(nloglogn) //