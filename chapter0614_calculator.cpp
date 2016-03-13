#include<iostream>

using namespace std;

void main()
{
	double firstnum,secondnum;
	char o;
	cout<<"Select your operation: \n + - * % \n Operation :";
	cin>>o;
	while(o!='q')
	{
		cout<<"\nInput first num:";
		cin>>firstnum;
		cout<<"\nInput second num:";
		cin>>secondnum;
		switch(o)
		{
		case '+':cout<<firstnum<<" "<<o<<" "<<secondnum<<" = "<<firstnum+secondnum<<endl;break;
		case '-':cout<<firstnum<<" "<<o<<" "<<secondnum<<" = "<<firstnum-secondnum<<endl;break;
		case '*':cout<<firstnum<<" "<<o<<" "<<secondnum<<" = "<<firstnum*secondnum<<endl;break;
		case '%':cout<<firstnum<<" "<<o<<" "<<secondnum<<" = "<<firstnum/secondnum<<endl;break;
		default:cout<<"Wrong input , try again"<<endl;break;
		}
		cout<<"Press q to quit calculation"<<endl;
		cout<<"Select your operation: \n + - * % \n Operation :";
		cin>>o;
	}

}