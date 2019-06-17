#include <iostream>


template<class T>
void f(T& t){
	std::cout << "f(T &t)" << std::endl;
}

template<>
void f(const double &t){
	std::cout << "f(const T<double> &t)" << std::endl;
}

void f(const double &t){
	std::cout << "f(const double &t)" << std::endl;
}

int main()
{
	char c1('c');
	int i(2);
	double d(2);
	const double cd(3);

	f(c1);
	f(i);
	f(d);
	f(cd);
		
	return 0;
}
