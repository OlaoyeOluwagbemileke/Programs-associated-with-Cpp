#include <iostream>
using namespace std;

class A {
public:
	A() // constructor
	{
		cout<<"I am 10"<<endl;
	}
};

class B : public virtual A {
};

class C : public virtual A {
};

class D : public B, public C {
};

int main()
{
	D obj; // object creation of class d


	return 0;
}
