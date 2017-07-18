/*#include <iostream>
#include <fstream>



void main()
{
	char currCh;
	int wordCounter = 0;
	int stringCounter = 0;


	std::ifstream in("C:\\Users\\Mary\\Desktop\\Програми\\IOsteam_hw_16\\file1.txt"); 
	if (!in.is_open())
	{
		std::cout << "Error!\n";
		return;
	}

	while (!in.eof()) 
	{
		in.get(currCh);
		if (currCh == ' ' || currCh == '\n' || currCh == '\t')
			wordCounter++;

		if (currCh == '\n')
			stringCounter++;

	}
	in.close(); 

	wordCounter++;
	stringCounter++;

	std::cout << "Words in file: " << wordCounter << std::endl;
	std::cout << "Strings in file: " << stringCounter << std::endl;

}*/