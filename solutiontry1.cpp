#include<iostream>
using namespace std;
int main()
{
    int num=325,sum;
    //cin>>num;
    while(num>1)
    {
        sum=0;
        while(num>1)
        {
            sum+=num%10;
            num=num/10;
        }
        num=sum;
    }
    cout<<sum<<endl;
    return 0;
}
