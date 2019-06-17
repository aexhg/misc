#include <iostream>
#include <vector>

int main(){
	std::vector<int> v = {-7, -4, -3, 0, 1, 3, 8, 9};

	for(auto &vv : v)
		vv = vv * vv;

	std::sort(v.begin(), v.end());
	for(auto &&vv : v)
		std::cout << vv << std::endl;
	return 0;
}
