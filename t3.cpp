#include <vector>

int argmax(const std::vector<float>& v)
{
	if (!v.size())
		return -1;
	int r = 0;
	float mx = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] > mx)
		{
			mx = v[i];
			r = i;
		}
	}
	return r;
}