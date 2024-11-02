#include <string>

std::string replace(const std::string& s, const std::string& os, const std::string& ns)
{
	std::string r;
	int p = s.find(os), op = 0;
	while (p != std::string::npos)
	{
		r += s.substr(op, p - op);
		r += ns;
		op = p + os.size();
		p = s.find(os, op);
	}
	if (op != s.size())
		r += s.substr(op, s.size()-op+1);
	return r;
}