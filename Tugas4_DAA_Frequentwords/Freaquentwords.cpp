#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

	ifstream in("dict.txt");
	typedef	map<string, int>StringIntMap;
	
void count_words(std::istream &in, StringIntMap &words)
{
    std::string text;
    while (in >> text)
    {
        ++words[text];
    }
}

int main(int argc, char **argv)
{
	StringIntMap words_map;
    count_words(in, words_map);

    for (StringIntMap::iterator it = words_map.begin(); it != words_map.end(); ++it)
    {
    	std::cout << "Kata>> " << it->first;
        std::cout << " \t\t ||Jumlah Frequency: " << it->second << std::endl;
    }
}
