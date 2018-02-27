#include "lib.h"

#include <iostream>

int main(int argc, char ** argv){
	std::cout<<"Hello, World!";
	#ifdef TRAVIS_BUILD_NUMBER
		std::cout<<TRAVIS_BUILD_NUMBER<<std::endl;
	#else
		std::cout<<"Not defined";
	#endif
	return 0;
}
