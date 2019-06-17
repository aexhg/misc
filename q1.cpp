#include <iostream>
#include <list>
#include <vector>


//void print(const std::list<std::string>& list)
//{
//	std::copy(list.begin(), list.end(), std::ostream_iterator<std::string>(std::cout, ", "));
//}

template<class T>
void print(const T& list)
{
	std::copy(list.begin(), list.end(), std::ostream_iterator<typename T::value_type>(std::cout, ", "));
}

int main()
{
	auto l = std::list<std::string>
	{
		"hello", "world"
	};

	auto v = std::vector<int>
	{
		1, 2, 3, 4, 5, 
	};

	print(l);
	print(v);
	return 0;
}
