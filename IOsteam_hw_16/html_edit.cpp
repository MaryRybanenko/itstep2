/*#include <iostream>
#include <fstream>
#include <string>


//удалить из HTML- файла все картинки, т.е. удалить значение атрибута src тега <img>.

void main()
{
	std::string buff;
	std::fstream inFile("html.txt", std::ios::binary | std::fstream::in);

	inFile.seekg(0, std::ios::end);
	int fileSize = inFile.tellg();
	inFile.seekg(0, inFile.beg);
	std::getline(inFile, buff, '\0');

	std::cout << buff;

	std::string subStrF = "<IMG SRC=\"";
	std::size_t sizeSubStrF = subStrF.size();
	std::size_t currPos = 0;
	std::size_t found;

	do
	{
		found = buff.find(subStrF, currPos);

		std::size_t first_pos = found + sizeSubStrF;

		if (found != std::string::npos)
		{
			std::size_t found1 = buff.find("\"", first_pos);
			std::size_t last_pos = found1 - first_pos;
			buff.erase(first_pos, last_pos);

			currPos = found1 + 1;
		}

	} while (found != std::string::npos);

	std::cout << "After erase.\n";
	std::cout << std::endl << std::endl << std::endl << buff << std::endl;

	std::ofstream out("html_change.txt", std::ios::binary | std::ios::out | std::ios::trunc);

	int streamSize = buff.size();
	out.write(buff.c_str(), streamSize);

}*/