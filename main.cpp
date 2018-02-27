#include "lib.h"

#include <iostream>

int main(int argc, char ** argv){
	std::cout<<"Hello, World!"<<std::endl;
	std::cout<<::version()<<std::endl;
	return 0;
}
