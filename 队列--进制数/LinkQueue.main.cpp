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
	cout<<"�������R:";
	cin>>R;
	cout<<"����"<<R<<"�������ĸ���:";
	cin>>t;
	if(R==2) cout<<"!!! ֻ������0,1 !!!";
	if(R==8) cout<<"!!! ֻ������0~~7 !!!";
	if(R==16) cout<<"!!!  A~~F��ʾ10~~15 !!!"; 
	cout<<endl;  
	cout<<"����"<<R<<"������:";
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
	    cout<<"ת���ɵ�ʮ������Ϊ:";
	    cout<<sum;
	}
	catch(char* msg)
	{
		cout<<msg;
	}
	return 0;
}
