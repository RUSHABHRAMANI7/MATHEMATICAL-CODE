#include <iostream>
#include <limits.h>
using namespace std;

 int gcd(int a, int b)
{
	if(b==0)                      // the gcd of the number gcd(a,a%b) can be solved by recursively calling the gcd(a,a%b)//
    return a;                     //for example gcd(15,20)//  
	return gcd(b, a % b);         // 1. gcd(20,15)//       
}                                 // 2. gcd(15,5)//     
int main() {                      // 3. gcd(5 ,0)//
                                  
    	int a = 15, b = 20 ;      // 4. on getting b == 0 the if condition will return a ; a = 5 //   
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}