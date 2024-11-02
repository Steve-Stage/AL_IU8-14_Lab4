#include <vector>

float mean(const std::vector<float>& v)
{
	float r = 0.0;
	for (auto i : v)
		r += i;
	return r / float(v.size());
}