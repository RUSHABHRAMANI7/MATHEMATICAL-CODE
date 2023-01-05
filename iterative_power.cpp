
#include <iostream>
using namespace std;

//calculate (x^n) in O(log n) 
int power(int x, int n)
{
    
    int res=1;
    while(n>0)
    {

        if(n&1)
            res=(res*x);
        
        x=(x*x); 
        n=n>>1;
    }
    return res;
}

int main() {
	int x=4,n=5;
	cout<<power(x,n)<<endl;
	return 0;
}