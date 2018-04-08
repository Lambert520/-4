template<class T>
struct Node
{
	T data;
	Node<T> *next;
};
template<class T>
class LinkQueue
{
	Node<T> *front,*rear;
	public:
		LinkQueue();
		~LinkQueue();
		void EnQueue(T x); //��Ԫ��x��� 
		T DeQueue();   //�� ��ͷ Ԫ�س��� 
		bool Empty();
};
 
