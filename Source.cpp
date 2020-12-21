#include <iostream>
using namespace std;
typedef int Info;
struct Elem
{
	Elem* link;
	Info info;
};
void push(Elem*& top, Info value);
void vstavka(Elem* L, Info V1, Info V2);
int main()
{
	Elem* top = NULL;
	// створення стеку
	for (int i = 1; i <= 10; i++)
		push(top, i);
	Elem* L = NULL;
	Info V1 = 1;
	Info V2 = 2;
	if (L != NULL)
		if (L->info == V1)
		{
			vstavka(L, V1, V2);
			(L->link->link);
		}
		else
			(L->link);
	cout << endl;
	for (int i = 1; i <= 10; i++)
		push(top, i);
	return 0;
}
void push(Elem*& top, Info value)
{
	Elem* tmp = new Elem; // 1
	tmp->info = value; // 2
	tmp->link = top; // 3
	top = tmp; // 4
}
void vstavka(Elem* L, Info V1, Info V2)
{
	Elem* tmp = new Elem; // 1
	tmp->info = V2; // 2
	tmp->link = L->link; // 3
	L->link = tmp;
}
