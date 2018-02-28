#include "lib.h"
#include <algorithm>
#include "version.h"
/*std::string make_string(int val){
	std::string res="";
	do{
		res+=('0'+val%10);
		val/=10;
	}while(val);
	std::reverse(res.begin(),res.end());
	return res;
}
std::string version(){
	std::string res="";
	std::string temp=make_string(PROJECT_VERSION_MAJOR);
	res+=temp;
	res+=".";
	temp=make_string(PROJECT_VERSION_MINOR);
	res+=temp;
	res+=".";
	temp=make_string(PROJECT_VERSION_PATCH);
	res+=temp;
	return res;
}*/
