#include "lib.h"

#include "version.h"

int version(){
	return PROJECT_VERSION_PATCH;
}
std::string full_version(){
	return FULL_PROJECT_VERSION;
}
