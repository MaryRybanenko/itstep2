#include <iostream>
#include <fstream>



void main()
{
	char currCh;
	int chunkSize = 50;
	std::ifstream in("file2.txt", std::ios::binary | std::ios::in);
	if (!in)
	{
		std::cout << "Error!\n";
		return;
	}
	in.seekg(0, std::ios::end);
	int fileSize =  in.tellg();
	in.seekg(0, in.beg);

	int dim1 = fileSize / chunkSize + 1;
	int dim2 = chunkSize;

	char **buff = new char*[dim1];
	for (int i = 0; i < dim1; i++)
	{
		buff[i] = new char[dim2];
	}

	while(!in.eof())
	{
		for (int i = 0; i < dim1; i++)
		{
			in.read(buff[i], dim2);
		}
	}

	std::cout << "\nCopy file.\n";
	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim2; j++)
		{
			std::cout << buff[i][j];
		}
	}

	in.close();

	std::ofstream out("text2.1.txt", std::ios::binary | std::ios::out | std::ios::trunc);
	if (!out)
	{
		std::cout << "Error!\n";
		return;
	}

	while (!out.eof())
	{
		for (int i = 0; i < dim1; i++)
		{
			out.write(buff[i], dim2);
		}
	}



}