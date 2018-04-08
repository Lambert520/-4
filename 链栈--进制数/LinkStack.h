template<class T>
struct Node
{
	T data;
	Node<T> *next;
};
template<class T>
class LinkStack
{
	Node<T> *top;
	public:
		LinkStack();
		~LinkStack();
		void Push(T x);  //ѹջ 
		T Pop();  //��ջ 
		void Transform(char N,int R); //����ת������ 
		bool Empty(); 
};
