void CompareInsAndSel()
{
	std::cout << "Comapring Insertion and Selection\n\n";
	std::vector<int> iVec(10000);
	double tStart = 0.0, tEnd = 0.0;

	srand(time(0));

	// Generation values of vector
	SH::GenerateVectorInt(iVec, 0.0, 10000.0);
	std::vector<int> sVec(iVec);

	std::cout << "Insertion Sort: ";
	tStart = clock();
	Insertion(iVec);
	tEnd = clock();
	std::cout << (tEnd - tStart) / 1000 << "\n\n";
	// SH::EnterValues(iVec);

	std::cout << "Selection Sort: ";
	tStart = clock();
	Selection(sVec);
	tEnd = clock();
	std::cout << (tEnd - tStart) / 1000 << "\n\n";
	// SH::EnterValues(sVec);
}
