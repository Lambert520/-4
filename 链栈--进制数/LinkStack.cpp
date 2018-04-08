#include"LinkStack.h"
#define NULL 0
#include<iostream>
using namespace std;
template<class T>
LinkStack<T>::LinkStack()
{
	top = NULL;
}
template<class T>
LinkStack<T>::~LinkStack()
{
	Node<T> *p;
	while(top)
	{
		p = top->next;
		delete top; top = p;
	}
}
template<class T>
void LinkStack<T>::Push(T x)    //压栈 
{
	Node<T> *s;
	s = new Node<T>;
	s->data = x; s->next = top;
	top = s;
}
template<class T>
T LinkStack<T>::Pop()    //出栈 
{
	Node<T> *p; T x;
	if(top ==NULL) throw"下溢";
	x = top->data;
	p = top; top = top->next;
	delete p;
	return x;
}
template<class T>
void LinkStack<T>::Transform(char N,int R)  //进制转换 
{
	int t,M;
	t = int(N)-48; 
		while(t)
		{
			Push(t%R); t = t/R;
		}
		cout<<"R进制的数:";
		while(!Empty())
		{
			M = Pop();
			cout<<M<<" ";
		} 
}
template<class T>
bool LinkStack<T>::Empty()
{
	if(top ==NULL)  return 1;
	else return 0;
}

