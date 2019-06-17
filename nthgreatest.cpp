#include <iostream>
#include <vector>

int main()
{
	int i;
	int N = 3;
	std::vector<int> v;
	v.reserve(N);
	while(std::cin >> i){
//		std::cout << i << std::endl;
		if(v.size() < N){
			v.push_back(i);
			std::sort(v.begin(),v.end());
		}
		else {
			auto it = std::find_if(v.begin(), v.end(), [&](int j){ return j < i; });
			if(it != v.end()){
				*it = i;
			}
		}
		for(auto &vv : v)
			std::cout << vv << " ";
		std::cout << std::endl;
		
	}
	return 0;
}

