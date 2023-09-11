#include <iostream>
#include <string>

int reverseNum(int num){
    int reversed = 0;
    while (num!=0) {
      int digit = num%10;
      reversed=reversed*10+digit;
      num = num/10;
    }
    return reversed;
  }
bool Palindrome(int num) {
  return num==reverseNum(num);
}
int main(){
    int testC;
  std::cout<<"How many test cases"<< std::endl;
  std::cin>>testC;
  std::cout<<"What are the numbers:"<<std::endl;
  int myArry[testC];
  for (int i=0;i < testC;i++) {
      int temp;
      std::cin>>temp;
      myArry[i]=temp;

    }
  for (int x=0;x<testC;x++){
    int num = myArry[x];
    for(int count = 0; count <100; count++) {
    int reversed = reverseNum(num);
    int sum = reversed + num ;
    if (Palindrome(sum)) {
      std::cout<<count+1<<' '<<sum<< std:: endl;
      break; 
    }
    num = sum;
    }
  }
  return 0;
    
}
