#include "lib.h"

#include "version.h"

std::string version(){
	std::string res="";
	char * a=itoa(PROJECT_VERSION_MAJOR);
	std::string temp=std::string(a);
	res+=temp;
	res+=".";
	a=itoa(PROJECT_VERSION_MINOR);
	temp=std::string(a);
	res+=temp;
	res+=".";
	a=itoa(PROJECT_VERSION_PATCH);
	temp=std::string(a);
	res+=temp;
	return res;
}
