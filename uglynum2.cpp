#include<iostream>
#include<vector>
using namespace std;
int nthUglyNumber(int n) {
	if(n<1)return 0;
	if(n==1)return 1;
	int num;
	int i;
	int p2[11]={1};
	int p3[11]={1};
	int p5[11]={1};
	//int uglynum[n]={1};
	vector<int> uglynum;
	uglynum.push_back(1);
	for(i=1;i<n;i++)
	{
		p2[5]=p2[1];
		p2[6]=p2[2];
		p2[7]=p2[3];
		if(p2[0]*2>uglynum[i-1])	p2[1]=p2[0]*2;
		else    {p2[1]=uglynum[i-1]*100;p2[8]=1;}
		if(p2[0]*3>uglynum[i-1])	p2[2]=p2[0]*3;
		else    {p2[2]=uglynum[i-1]*100;p2[9]=1;}
		if(p2[0]*5>uglynum[i-1])	p2[3]=p2[0]*5;
		else    {p2[3]=uglynum[i-1]*100;p2[10]=1;}
			
		p2[4]=p2[1]<p2[2]?(p2[1]<p2[3]?p2[1]:p2[3]):(p2[2]<p2[3]?p2[2]:p2[3]);
		if(p2[8]){p2[1]/=100;p2[8]=0;}
		if(p2[9]){p2[2]/=100;p2[9]=0;}
		if(p2[10]){p2[3]/=100;p2[10]=0;}
		if(p2[5]>uglynum[i-1]&&p2[5]<p2[4])p2[4]=p2[5];
		else if(p2[6]>uglynum[i-1]&&p2[6]<p2[4])p2[4]=p2[6];
		else if(p2[7]>uglynum[i-1]&&p2[7]<p2[4])p2[4]=p2[6];

		p3[5]=p3[1];
		p3[6]=p3[2];
		p3[7]=p3[3];
		if(p3[0]*2>uglynum[i-1])	p3[1]=p3[0]*2;
		else    {p3[1]=uglynum[i-1]*100;	p3[8]=1;}
		if(p3[0]*3>uglynum[i-1])	p3[2]=p3[0]*3;
		else    {p3[2]=uglynum[i-1]*100;	p3[9]=1;}
		if(p3[0]*5>uglynum[i-1])	p3[3]=p3[0]*5;
		else    {p3[3]=uglynum[i-1]*100;	p3[10]=1;}

		p3[4]=p3[1]<p3[2]?(p3[1]<p3[3]?p3[1]:p3[3]):(p3[2]<p3[3]?p3[2]:p3[3]);
		if(p3[8]){p3[1]/=100;p3[8]=0;}
		if(p3[9]){p3[2]/=100;p3[9]=0;}
		if(p3[10]){p3[3]/=100;p3[10]=0;}
		if(p3[5]>uglynum[i-1]&&p3[5]<p3[4])p3[4]=p3[5];
		else if(p3[6]>uglynum[i-1]&&p3[6]<p3[4])p3[4]=p3[6];
		else if(p3[7]>uglynum[i-1]&&p3[7]<p3[4])p3[4]=p3[7];

		p5[5]=p5[1];
		p5[6]=p5[2];
		p5[7]=p5[3];
		if(p5[0]*2>uglynum[i-1])	p5[1]=p5[0]*2;
		else    {p5[1]=uglynum[i-1]*100;p5[8]=1;}
		if(p5[0]*3>uglynum[i-1])	p5[2]=p5[0]*3;
		else    {p5[2]=uglynum[i-1]*100;p5[9]=1;}
		if(p5[0]*5>uglynum[i-1])	p5[3]=p5[0]*5;
		else	{p5[3]=uglynum[i-1]*100;p5[10]=1;}

		p5[4]=p5[1]<p5[2]?(p5[1]<p5[3]?p5[1]:p5[3]):(p5[2]<p5[3]?p5[2]:p5[3]);
		if(p5[8]){p5[1]/=100;p5[8]=0;}
		if(p5[9]){p5[2]/=100;p5[9]=0;}
		if(p5[10]){p5[3]/=100;p5[10]=0;}
		if(p5[5]>uglynum[i-1]&&p5[5]<p5[4])p5[4]=p5[5];
		else if(p5[6]>uglynum[i-1]&&p5[6]<p5[4])p5[4]=p5[6];
		else if(p5[7]>uglynum[i-1]&&p5[7]<p5[4])p5[4]=p5[7];

		num=p2[4]<=p3[4]?(p2[4]<=p5[4]?p2[4]:p5[4]):(p3[4]<=p5[4]?p3[4]:p5[4]);

		if(p2[4]==num)
			p2[0]*=2;
		else	if(p3[4]==num)
			p3[0]*=3;
		else	if(p5[4]==num)
			p5[0]*=5;

		uglynum.push_back(num);
	}
	return uglynum[i-1];
}

void main()
{
	vector<int>	test;
	test.push_back(2);
	test.push_back(3);
	//cout<<test[1]<<endl;
	cout<<nthUglyNumber(10)<<endl;
}