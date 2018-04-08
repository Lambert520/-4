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
		void EnQueue(T x); //将元素x入队 
		T DeQueue();   //将 对头 元素出队 
		bool Empty();
};
 
