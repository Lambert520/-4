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
		void Push(T x);  //压栈 
		T Pop();  //出栈 
		void Transform(char N,int R); //进制转换函数 
		bool Empty(); 
};
