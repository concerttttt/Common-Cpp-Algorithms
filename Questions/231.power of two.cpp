#include<iostream>
using namespace std;
    bool isPowerOfTwo( int  num) 
	{
        int j=sizeof(int )*8;
        int  i;
        int  k=1;
        for(i=0;i<j-1;i++)
        {
            if(num==k)
            return true;
			k=k<<1;
        }
        return false;
    }
	void main()
	{
		short num=1073741824;
		//cin>>num;
		bool j;
		j=isPowerOfTwo(num);
		cout<<j<<endl;
	}
