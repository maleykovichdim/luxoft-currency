
#include "pch.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>

template <typename T>
std::map<T, int>  currency(const  std::vector<std::vector<T>> & input) {
	std::map<T, int> result;
	for (const auto& vec: input){
		for (const auto& elem: vec){	
			if (result[elem] == 0)
				result[elem] = 1;
			else
				result[elem]++;
		}
	}
   return result;
}

int main()
{
    const  std::vector<std::vector<std::string>>  input = {{"a","b","c"},{"a","d","f"},{"a","y","j"}};
    std::map<std::string, int> result = currency(input);
    for (const auto& elem: result){	
        std::cout << elem.second <<" " << elem.first <<" \n";
	}     
}
