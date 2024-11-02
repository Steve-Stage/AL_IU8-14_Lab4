#include <vector>
#include <string>

std::vector<std::string> split(const std::string& s, char c)
{
	std::vector<std::string> v;
	int p = s.find(c), op = 0;
	while (p != std::string::npos)
	{
		if (p > op)
			v.push_back(s.substr(op, p-op));
		op = p + 1;
		p = s.find(c, op);
	}
	if (op != s.size())
		v.push_back(s.substr(op));
	return v;
}