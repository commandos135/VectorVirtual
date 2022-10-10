#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;
 
class A {
public:
	virtual int f() { return 10;  }
	virtual ~A() {}
};

class B: public A {
	int f() {return 11; }
		virtual ~B() {}
	};

int main()
{
	std::vector<A*>v1;
	for (int i = 10; i > 0; i--)
	{
		i%2>0 ? v1.push_back(new A()):v1.push_back(new B());
	}

	std::vector<A*>::iterator it = v1.begin();
	while (it != v1.end())
	{
		std::cout << v1.back()->f() << " ";
		++it;
}


	return 0;
}
