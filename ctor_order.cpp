// ctor_order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
class A
{
public:
    A(int v)
    {
        cout << "A.ctor!\n";
    }
	~A()
	{
		cout << "A.dtor!\n";
	}
};

class B
{
public:
    const A& m_a;
    
	B(const A& a) :m_a(a)
	{
		cout << "B.ctor(2)!\n";
	}

	~B()
	{
		cout << "B.dtor!\n";
	}


};

int main()
{
    std::cout << "Hello World!\n";

	{
		A a1(123);
		B b1(a1);
	}
	cout << "-------------\n";
	{
		B b(123);
		cout << "....\n";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
