#include <utility>
#include <vector>
#include <limits>

#define _min(a, b) (((a) <= (b)) ? (a) : (b))
#define _max(a, b) (((a) >= (b)) ? (a) : (b))

std::pair<float, float> minMax(const std::vector<float>& v)
{
	if (!v.size())
		return { std::numeric_limits<float>::min(), std::numeric_limits<float>::max() };
	float mn = v[0], mx = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		mn = _min(mn, v[i]);
		mx = _max(mx, v[i]);
	}
	return { mn, mx };
}