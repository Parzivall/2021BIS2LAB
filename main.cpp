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

class Lista
{
public:
	Lista()
	{
		head=nullptr;
	}
	void addlista(int num)
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
	void printLista()
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
	Lista * lista  = new Lista;   
	lista->addlista(1);
	lista->addlista(2);
	lista->addlista(3);
	lista->printLista();
	cout<<"Hola ,mundo";
	/* code */
	return 0 ;

}
