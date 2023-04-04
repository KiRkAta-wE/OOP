#include<fstream>
#include<iostream>

int main()
{
	std::ifstream MyFile("qdini.txt");
	std::ofstream out_file("humans.txt", std::ostream::beg);
	char c[100];
	if (!out_file.is_open()&&!MyFile.is_open())
	{
		std::cout << "nope";
		return 0;
	}
	while (!MyFile.eof())
	{
		MyFile.getline(c, 100);
		out_file << c << std::endl;
	}
	
	MyFile.close();
	out_file.close();
	
	return 0;
}