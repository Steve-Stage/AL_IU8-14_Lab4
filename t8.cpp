#include <string>
#include <vector>

std::string join(const std::vector<std::string>& v, const std::string& c)
{
	if (!v.size())
		return "";
	std::string s = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		s += c + v[i];
	}
	return s;
}