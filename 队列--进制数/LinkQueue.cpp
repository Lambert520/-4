#include"LinkQueue.h"
#include<iostream>
using namespace std;
template<class T>
LinkQueue<T>::LinkQueue()
{
	Node<T> *s; s = new Node<T>;
	s->next = NULL;
	front = rear = s;
}
template<class T>
LinkQueue<T>::~LinkQueue()
{
	while(front)
	{
		Node<T> *p; p=front->next;
		delete front; front = p;
	}
}
template<class T>
void LinkQueue<T>::EnQueue(T x)  //入队 
{
	Node<T> *s; s = new Node<T>;
	s->data = x; s->next=NULL;
	rear->next = s;
	rear = s;
}
template<class T>
T LinkQueue<T>::DeQueue()   //出队 
{
	Node<T> *p; T x;
	if(rear == front) cout<<"下溢";
	p = front->next;
	x = p->data;
	front->next=p->next;
	if(p->next==NULL)  rear= front;
	delete p;
	return x;  
}
