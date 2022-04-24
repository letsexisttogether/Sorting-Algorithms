#include <vector>

#pragma once

template <typename _CompType, int ElementsCount>
void CompareAlgo(void firstSortingAlgorithm(std::vector<_CompType>&),
				 void secondSortingAlgorithm(std::vector<_CompType>&))
{
	std::cout << "Comapring Insertion and Selection\n\n";
	std::vector<_CompType> iVec(ElementsCount);
	double tStart = 0.0, tEnd = 0.0;

	srand(time(0));

	// Generation values of vector
	SH::GenerateVectorInt(iVec, 1, 10000);
	std::vector<_CompType> sVec(iVec);

	std::cout << "Insertion Sort: ";
	tStart = clock();
	firstSortingAlgorithm(iVec);
	tEnd = clock();
	std::cout << (tEnd - tStart) / 1000 << "\n\n";
	// SH::EnterValues(iVec);

	std::cout << "Selection Sort: ";
	tStart = clock();
	secondSortingAlgorithm(sVec);
	tEnd = clock();
	std::cout << (tEnd - tStart) / 1000 << "\n\n";
	// SH::EnterValues(sVec);
}
