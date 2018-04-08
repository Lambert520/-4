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
void LinkStack<T>::Push(T x)    //ѹջ 
{
	Node<T> *s;
	s = new Node<T>;
	s->data = x; s->next = top;
	top = s;
}
template<class T>
T LinkStack<T>::Pop()    //��ջ 
{
	Node<T> *p; T x;
	if(top ==NULL) throw"����";
	x = top->data;
	p = top; top = top->next;
	delete p;
	return x;
}
template<class T>
void LinkStack<T>::Transform(char N,int R)  //����ת�� 
{
	int t,M;
	t = int(N)-48; 
		while(t)
		{
			Push(t%R); t = t/R;
		}
		cout<<"R���Ƶ���:";
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

