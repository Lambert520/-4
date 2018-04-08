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
		cout<<"输入十进制数N:"<<endl;
		cin>>N; 
		cout<<"输入转换的进制R:"<<endl;
	    cin>>R;
	    a.Transform(N,R);
	}
	catch(char *wrong)
	{
		cout<<wrong;
	}
	return 0;
}
