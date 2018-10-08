
#include <string>
#include <vector>

#ifndef __PARAM_UTILITIES__
#define __PARAM_UTILITIES__
//test
namespace param_utilities
{
	void init(int argc, char** argv);
	bool isParam(const std::string& paramName);
	bool getParamValue(const std::string& paramName, /*out*/std::string& paramValue);
	bool getParamValue(const std::string& paramName, /*out*/std::vector<std::string>& paramValue);
	bool getParamValue(const std::string& paramName, /*out*/int& paramValue);
}

#endif // !__PARAM_UTILITIES__