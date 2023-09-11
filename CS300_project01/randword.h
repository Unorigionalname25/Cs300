#ifndef _randword_h
#define _randword_h
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <ctime>


std::vector<std::string> words;
int initdictionary () {

std::ifstream dictionary("Dictionary.txt");

std::string line;
while (std::getline(dictionary, line)) {
    words.push_back(line);
    }
return 0;
}

std::string ChooseRandomWord() {
std::srand(static_cast<unsigned>(std::time(nullptr)));
size_t randInd = std::rand() % words.size();

return words[randInd];

}


#endif
