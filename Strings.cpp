// This is the main DLL file.

#include "Strings.h"

void Data_Structure::Duplicates(std::string in){

		std::map<char,int> characters; 
		std::cout << "Duplicates: " ;
		for (std::string::iterator i = in.begin();i < in.end() ; i++){
			if(characters.find(*i) == characters.end()){
				characters.insert(std::pair<char,int>(*i,100));
			}
			else{
				std::cout << *i << "," ;
			}
		}
		std::cout << std::endl;
	}


void Data_Structure::Anagram (std::string in1,std::string in2){
		std::sort(in1.begin(),in1.end());
		std::sort(in2.begin(),in2.end());
		if (!strcmp(in1.c_str(),in2.c_str())){
			std::cout << in1.c_str() << " is an anagram of " << in2.c_str() << std::endl;
		}
		else{
			std::cout << in1.c_str() << " is not an anagram of " << in2.c_str() << std::endl;
		}

}

void Data_Structure::Reverse(std::string in){
		std::cout << "Reverse: " ;

		std::cout << std::endl;
	}