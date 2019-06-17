#include <iostream>

struct A{
	virtual ~A(){
		std::cout << "~A()" << std::endl;
	}
	A(){
		std::cout << "A()" << std::endl;
	}
	A(const A& a){
		std::cout << "A(const A&a)" << std::endl;
	}
	virtual void Foo(){
		std::cout << "A::Foo()" << std::endl;
	}
};

struct B: A{
	B(){
		std::cout << "B()" << std::endl;
	}
	~B(){
		std::cout << "~B()" << std::endl;
	}
	B(const B& b){
		std::cout << "B(const B& b)" << std::endl;
	}
	void Foo() override {
		std::cout << "B::Foo()" << std::endl;
	}
};

int main(){
	try{
	try{
		throw B();
	}
	catch(A a){
		a.Foo();
		throw B();
	}
	}
	catch(B &a){
		a.Foo();
		return 0;
	}

	return 0;
}

