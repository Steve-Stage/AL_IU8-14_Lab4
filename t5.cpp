#include <vector>

bool remove_first_negative_element(std::vector<int>& v, int& re)
{
	re = 0;
	if (!v.size())
		return false;
	else
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] < 0)
			{
				re = v[i];
				v.erase(std::next(v.begin(), i));
				return true;
			}
		}
	}
	return false;
}