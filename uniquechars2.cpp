#include <vector>
#include <iostream>
#include <string>

int main(){
	std::vector<std::string> v = {
		//"acabcddd","bcbdbcbd","baddbadb","cbdddcac","aacbcccd","ccccddda","cababaab","addcaccd"
		//"bbddabab","cbcddbdd","bbcadcab","dabcacad","cddcacbc","ccbdbcba","cbddaccc","accdcdbb"
		"bella", "roller", "label"
	};

	for(auto &vv : v){
		std::cout << vv << std::endl;
	}

	std::vector<int> counts(26, 0);
	bool first = true;
	for(auto &s: v){
		std::vector<int> ct(26,0);
		for(auto &c: s){
			ct[c - 'a'] += 1;
		}
		for(int i = 0; i < 26; ++i){
			if(first){
				counts[i] = ct[i];
			}
			else if(ct[i] > 0 && counts[i] > 0){
				counts[i] = std::min(counts[i], ct[i]);
			}
			else{
				counts[i] = 0;
			}
		}
		first = false;
	}

	for(int i = 0; i < 26; ++i){
		if(counts[i]>0){
			std::cout << std::string(1, i + 'a') << " " << counts[i] << std::endl;
		}
	}
	return 0;
}

