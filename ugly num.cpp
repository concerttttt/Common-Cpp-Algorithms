#include<iostream>
using namespace std;

bool isprime(int prime)
{
	for(int i=2;i<prime;i++)
		if(prime%i==0)
			return false;
	return true;
}



  int countPrimes(int n) {
        int count=0;
        for(int i=1;i<n;i++)
            if(isprime(i))
                count++;
        return count;
        
    }


void main()
{
	int i=937351770;
	cout<<countPrimes(20)<<endl;
}