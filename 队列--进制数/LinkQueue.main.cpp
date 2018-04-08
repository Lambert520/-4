#include"LinkQueue.cpp"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int R,t,w,q;
	char r;
	int sum = 0;
	LinkQueue<int> e; 
	cout<<"输入进制R:";
	cin>>R;
	cout<<"输入"<<R<<"进制数的个数:";
	cin>>t;
	if(R==2) cout<<"!!! 只能输入0,1 !!!";
	if(R==8) cout<<"!!! 只能输入0~~7 !!!";
	if(R==16) cout<<"!!!  A~~F表示10~~15 !!!"; 
	cout<<endl;  
	cout<<"输入"<<R<<"进制数:";
	try
	{
		for(int i = 0;i<t;i++)
	    {
		  cin>>r;
		  if(r>='A'&&r<='F') q = (int)r-55;
		  if(r>='0'&&r<='9') q = (int)r-48;
		  e.EnQueue(q);
	    }
	    for(int i = t-1;i>=0;i--)
	    {
		  w = e.DeQueue();
		  sum = sum+w*pow(R,i);
	    } 	
	    cout<<"转换成的十进制数为:";
	    cout<<sum;
	}
	catch(char* msg)
	{
		cout<<msg;
	}
	return 0;
}
