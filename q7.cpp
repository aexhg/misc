#include <iostream>
#include <stdexcept>

class A 
{
	public:
	//A() = delete;
	A(int i)
	{
		std::cout << "A(" << i << ")" << std::endl;
		_i = i;
	}
	A()
	{
		std::cout << "A()" << std::endl;
	}
	
	~A()
	{
		std::cout << "~A()" << std::endl;
	}
	private:
	int _i;
};

class B  : public virtual A
{
	public:
	B()
	{
		std::cout << "B()" << std::endl;
	}

	~B()
	{
		std::cout << "~B()" << std::endl;
	}
	
};

class C : public virtual A
{
	public:
	C()
	{
		std::cout << "C()" << std::endl;
	}

	~C()
	{
		std::cout << "~C()" << std::endl;
	}
	
};

class D
{
	public:
	D()
	{ 
		std::cout << "D()" << std::endl;
	}

	~D()
	{ 
		std::cout << "~D()" << std::endl;
	}
};

struct M
{
	M(int i)
	{
		std::cout << "M(" << i << ")" << std::endl;
		_i = i;
		if(_i == 2)
			throw std::runtime_error("something");
	}
	~M()
	{
		std::cout << "~M(" << _i << ")" << std::endl;
	}
	int _i;
};

class E : public C, public B, public virtual D
{
	public:
	E() : A(3), C(), B(), _m1(1), _m2(2)
	{
		std::cout << "E()" << std::endl;
		//throw std::runtime_error("something bad");
	}

	M _m1;
	M _m2;
};




int main()
{
	try
	{
		E e;
	}
	catch(std::exception &e)
	{
	}
	return 0;
}
