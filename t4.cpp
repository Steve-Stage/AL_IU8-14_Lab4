#include <vector>
#include <limits>
#include <cmath>

void sort(std::vector<float>& v) // merge sort algorithm
{
	constexpr float INF = std::numeric_limits<float>::max(); // if element is INF then it is non-existent
	std::vector<std::vector<float>> oml(int(1 << int(std::ceil(std::log2(v.size())))), std::vector<float>(1, INF)), nml; // oml size is 2^(log2(size of v))
	for (int i = 0; i < v.size(); i++)
	{
		oml[i][0] = v[i];
	}
	while (oml.size() > 1) // while multiple subarrays
	{
		for (int i1 = 0, i2 = 1; i2 < oml.size(); i1 += 2, i2 += 2)
		{
			int j1 = 0, j2 = 0;
			nml.push_back(std::vector<float>(0));
			auto& nr = nml[nml.size() - 1];
			for (; j1 < oml[i1].size() && j2 < oml[i2].size() && oml[i1][j1] != INF && oml[i2][j2] != INF;) // while there are elements in two selected subarrays to sort - for() continues
			{
				if (oml[i1][j1] <= oml[i2][j2])
				{
					nr.push_back(oml[i1][j1]);
					j1++;
				}
				else
				{
					nr.push_back(oml[i2][j2]);
					j2++;
				}
			}
			while (j1 < oml[i1].size()) // if elements in one of arrays ended - we add all elements of other array into the end
			{
				nr.push_back(oml[i1][j1]);
				j1++;
			}
			while (j2 < oml[i2].size())
			{
				nr.push_back(oml[i2][j2]);
				j2++;
			}
		}
		oml = nml;
		nml = std::vector<std::vector<float>>(0);
	}
	nml = std::vector<std::vector<float>>(1, std::vector<float>(0));
	for (auto i : oml[0])
	{
		if (i == INF) // if element is INF - ignore it
			continue;
		nml[0].push_back(i);
	}
	v = nml[0]; // in the end we have one subarray with sorted elements
}
