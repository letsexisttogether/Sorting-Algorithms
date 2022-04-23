#include <iostream>
#include <vector>

#pragma once

namespace SH
{
	// Generation int values
	void GenerateVectorInt(std::vector<int>& gVec, int minValue, int maxValue)
	{
		for (auto& genElement : gVec)
			genElement = rand() % (maxValue - minValue) + 1;
	}

	// Entering vector 
	template <typename _EntType>
	void EnterValues(const std::vector<_EntType>& eVec)
	{
		int i = 0;
		for (const auto enterElement : eVec)
		{
			std::cout << enterElement << " ";
			if (i && i % 10 == 0)
				std::cout << "\n";
			++i;
		}
	}
}
