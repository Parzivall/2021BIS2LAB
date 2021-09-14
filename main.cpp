#include <iostream>
using namespace std;
class Nodo
{
public:
	Nodo(int numT)
	{
		num=numT;
		next=nullptr;
	}

	int num;
	Nodo * next;
};

class Stack
{
public:
	Stack()
	{
		head=nullptr;
	}
	void addstack(int num)
	{
		if(!head)
			head=new Nodo(num);
		else
		{
			Nodo * tmp=head;
			while(tmp->next)
			{
				tmp=tmp->next;
			}
			tmp->next=new Nodo(num);
		}
	}
	void printstack()
	{
		Nodo * tmp=head;
		cout<<tmp->num;
		while(tmp->next)
		{
			tmp=tmp->next;
			cout<<tmp->num;
		}
	}
private:
	Nodo* head;
};

int main(int argc, char const *argv[])
{
	Stack * mystack  = new Stack;   
	mystack->addlista(1);
	mystack->addlista(2);
	mystack->addlista(3);
	mystack->printLista();
	return 0 ;
}
