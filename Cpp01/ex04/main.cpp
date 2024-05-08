#include <iostream>
#include <fstream>

void fileNamefile(std:: string fileName, std::string s1, std::string s2)
{
	std::ifstream file(fileName);
	if(!file)
	{
		std::cerr << "dosya açılamadı" << std::endl;
	}
	std::string line;
	std::ofstream file1("dosya1.txt");
	while(std::getline(file, line))
	{
		size_t nemo = line.find(s1);
        while (nemo != std::string::npos) {
            line = line.substr(0, nemo) + s2 + line.substr(nemo + s1.length());
            nemo = line.find(s1, nemo + s2.length());
        }

		file1 << line;
	}
	file.close();
	file1.close();
}

int main()
{
	std::string fileName1, s11, s21;
	std::cout << "enter file name: ";
	std::cin >> fileName1;
	std::cout << "enter s1: ";
	std::cin >> s11;
	std::cout << "enter s2: ";
	std::cin >> s21;

	fileNamefile(fileName1,s11,s21);
}