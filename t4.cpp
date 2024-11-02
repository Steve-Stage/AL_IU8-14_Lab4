#include <vector>
#include <limits>
#include <cmath>

void sort(std::vector<float>& v)
{
	constexpr float INF = std::numeric_limits<float>::max();
	std::vector<std::vector<float>> oml(int(1 << int(std::ceil(std::log2(v.size())))), std::vector<float>(1, INF)), nml;
	for (int i = 0; i < v.size(); i++)
	{
		oml[i][0] = v[i];
	}
	while (oml.size() > 1)
	{
		for (int i1 = 0, i2 = 1; i2 < oml.size(); i1 += 2, i2 += 2)
		{
			int j1 = 0, j2 = 0;
			nml.push_back(std::vector<float>(0));
			auto& nr = nml[nml.size() - 1];
			for (; j1 < oml[i1].size() && j2 < oml[i2].size() && oml[i1][j1] != INF && oml[i2][j2] != INF;)
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
			while (j1 < oml[i1].size())
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
		if (i == INF)
			continue;
		nml[0].push_back(i);
	}
	v = nml[0];
}