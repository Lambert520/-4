#include"LinkStack.cpp"
#include<iostream>
using namespace std;
int main()
{
	int R,M; 
	char N;
	LinkStack<int> a; 
	try
	{
		cout<<"����ʮ������N:"<<endl;
		cin>>N; 
		cout<<"����ת���Ľ���R:"<<endl;
	    cin>>R;
	    a.Transform(N,R);
	}
	catch(char *wrong)
	{
		cout<<wrong;
	}
	return 0;
}
