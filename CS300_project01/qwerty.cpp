#include <iostream>
#include <string>

static std::string  decode(const std:: string encodedMessage) {
  std:: string message1= "";
  std:: string keyboard ="1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
    for (char c:encodedMessage){
      if (c==' ') {
	message1+=' ';
    } else if (std::isalpha(c) || std::ispunct(c)) {
        size_t pos =  keyboard.find(c);
	if (pos != std::string::npos) {
	  message1+=keyboard[pos-1];
	} else {
	  message1+= c;
	}
      } else {
	message1+=c;
      }
    }
  return message1;
	
}
int main (){
  std:: string encodedMessage;

  std::cout<<"what is your message:";
  std::getline(std::cin, encodedMessage);
  std:: string Op= decode(encodedMessage);
  std::cout <<Op<<std::endl;
}
