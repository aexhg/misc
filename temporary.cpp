#include <iostream>

struct test{
	test(){
		std::cout << "test()" << std::endl;
	}

	test(const test& t){
		std::cout << "copy test()" << std::endl;
	}

	~test(){
		std::cout << "~test()" << std::endl;
	}
};

test fn(){
	return test();
}

int main(){

	//const test &t(fn());
	test t  = fn();
	std::cout << "finished" << std::endl;
	return 0;
}

