#include<iostream>
using namespace std;
int digit_square_sum(int num)
{
	int		residue;
	int		sum=0;
	while(num>=1)
	{
		residue=num%10;
		sum+=residue*residue;
		num/=10;
	}
	return sum;
}
int happy_num(int num)
{
	int temp=num;
	for(int i=0;i<20;i++)
	{
		temp=digit_square_sum(temp);
		if(temp==1)return 1;
		//if((temp%10)==0)return 1;
		//num=temp;
	}
	return 0;
}
void main()
{
	int num;
	while(true){
	cin>>num;
	if(num==1000)break;
	if(happy_num(num))
		cout<<"Happy Num"<<endl;
	else
		cout<<"Not a happy num"<<endl;}
	//cout<<digit_square_sum(num)<<endl;}
	//cout<<happy_num(num)<<endl;
}


