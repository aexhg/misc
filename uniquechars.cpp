#include <iostream>
#include <unordered_map>
#include <vector>

int main() {

	auto inputs = std::vector<std::string>
	{
		"bella", "label", "roller",
	};
	
	auto chars = std::unordered_map<char, int>();
	for(auto &c: inputs[0]){
		chars.insert({c, 1});
	}


	for(auto &s: inputs){
		for(auto &kv: chars){
			if(s.find(kv.first) == std::string::npos){
				chars.erase(kv.first);
			}
//			auto f = chars.find(c);
//			if(f == chars.cend()){
//				std::cout << "char " << f->first << "not found in map" << std::endl;
//				chars.erase(c);
//			}
		}
	}
	
	for(auto &kv: chars){
		std::cout << kv.first << ":" << kv.second << std::endl;
	}
	return 0;
}
