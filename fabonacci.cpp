#include<iostream>
#include<vector>
#include<string>
using namespace std;
int fibonacci(int n) 
{
	vector<int>     fab;
	int x;
	fab.push_back(0);
	fab.push_back(0);
	fab.push_back(1);
	for(int i = 3;fab.size() <= n+1 ;i++)
	{
		x = fab[i-1] + fab[i-2];
		fab.push_back(x);
	}
	return fab[n];
}

void main()
{
	string str = "This is a string";
	cout<<str.size()<<endl;
	//cout<<fibonacci(2)<<endl;
	/*vector<int> num;
	for(int i = 0;i<10;i++)
		num.push_back(i);
	for(int i = 0;i<10;i++)
		cout<<num[i]<<' ';
	cout<<endl;
	cout<<num.size();*/
}