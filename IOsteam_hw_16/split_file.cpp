/*#include <iostream>
#include <fstream>

void splitFile(std::ifstream &in, const int &chunkSize, const int &fileSize)
{
	char bufft[15];
	char currCh;

	if (!in)
	{
		std::cout << "Error!\n";
		return;
	}

	int dim1 = fileSize / chunkSize + 1;
	int dim2 = chunkSize;

	char **buff = new char*[dim1];
	for (int i = 0; i < dim1; i++)
	{
		buff[i] = new char[dim2];
	}

	while (!in.eof())
	{
		for (int i = 0; i < dim1; i++)
		{
			in.read(buff[i], dim2);
		}
	}

	for (int i = 0; i < dim1; i++)
	{
		sprintf(bufft, "split_%d.txt", i);
		std::ofstream out(bufft, std::ios::binary | std::ios::out | std::ios::trunc);
		if (!out)
		{
			std::cout << "Error!\n";
			return;
		}
		out.write(buff[i], dim2);
		out.close();
	}

	std::cout << "File splited!";

	for (int i = 0; i < dim1; i++)
	{
		delete[] buff[i];
	}
	delete[] buff;
}

void reestablishFile(std::ofstream &out, const int &chunkSize, const int &fileSize)
{
	char bufft[15];
	char* temp = new char[chunkSize];

	int dim1 = fileSize / chunkSize + 1;
	int dim2 = chunkSize;

	for (int i = 0; i < dim1; i++)
	{
		sprintf(bufft, "split_%d.txt", i);
		std::ifstream in(bufft, std::ios::binary | std::ios::in);
		if (!in)
		{
			std::cout << "Error!\n";
			return;
		}

		in.read(temp, dim2);
		/*if (i == dim1 - 1)
		{
			int lastSize = sizeof(temp);
			out.write(temp, lastSize);
		}
		else
		{}*/
		/*out.write(temp, dim2);

		in.close();
	}

	delete [] temp;
}


void main()
{
	int chunkSize;
	std::ifstream inFile("file2.txt", std::ios::binary | std::ios::in);

	inFile.seekg(0, std::ios::end);
	int fileSize = inFile.tellg();
	inFile.seekg(0, inFile.beg);

	std::cout << "File size: " << fileSize << std::endl;
	std::cout << "Enter chank size:\n";
	std::cin >> chunkSize;

	splitFile(inFile, chunkSize, fileSize);
	inFile.close();

	std::ofstream outFile("reestablish.txt", std::ios::binary | std::ios::out | std::ios::trunc);

	reestablishFile(outFile, chunkSize, fileSize);
	std::cout << "Reestablish file.\n";

	outFile.close();
}*/