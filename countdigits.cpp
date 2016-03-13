#include<iostream>
using namespace std;
int count(int num)
{
	int sum=0;
	while(num>=1)
	{
        sum+=num%10;
        num=num/10;
    }
	return sum;
}
int main()
{
    int num;
	cin>>num;
	while(num>=10)
		num=count(num);
    cout<<num<<endl;
    return 0;
}
