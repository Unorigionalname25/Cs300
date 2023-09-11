#include <iostream>
#include <string>
#include "randword.h"

int main() {
    initdictionary();
    std:: string S_word = ChooseRandomWord();
    int count = 0;
    std::string letters (S_word.length(),'-');

while(true) {
    std::cout<<"Secret Word: "<<letters<<std::endl;
    if (letters == S_word){ 
        std::cout<<"Cograts the word was:"<< S_word<< std::endl;
        break;

    }
    if (count >= 8) {
        std::cout<<"Sorry, the word was:"<<S_word<< std::endl;
        break;

    }
    std::cout << "Take a guess:";
    char guess;
    std::cin>>guess;

    if (S_word.find(guess)!= std::string::npos) {
        for (int i=0; i<S_word.length();++i) {
            if(S_word[i]==guess) {
                letters[i]=guess;
            }
        }
    }
    else {
        ++count;
        std::cout<<"Incorrect guess. Take another guess:"<<std::endl;
    }
}

return 0;

}