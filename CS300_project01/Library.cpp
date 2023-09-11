#include <iostream>
#include <string>
#include <vector>
#include <sstream>

const int Mauthors = 5;
const int Msubjects = 5; 
struct libraryT {
    int book_id;
    std::string Title;
    std::vector<std::string> author;
    int catalognum;
    std::vector<std::string> subject;
    std::string publisher;
    int year;
    bool circulating;
 
};
struct Library {
    libraryT books[1000];
    int num_books;
};

void searchBySubject(const Library& libdata, const std::string& searchSubject) {
    for (int i=0; i <libdata.num_books;i++ ) {
       const libraryT& book = libdata.books[i];
        for (const std::string& subject: book.subject) {
            if (subject == subject) {
                std::cout<< book.Title << std::endl;
                std::cout<< book.author[0]<<std::endl;
                std::cout<< book.catalognum;
                break;
        }
    }
}
}
int main() {
    Library libdata;
    libraryT book1;
    book1.Title = "Book 1";
    book1.author.push_back("Author 1");
    book1.catalognum = 101;
    book1.subject.push_back("Subject A");
    book1.publisher = "Publisher A";
    book1.year = 2023;
    book1.circulating = true;
    libdata.books[libdata.num_books++] = book1;
        libraryT book2;
    book1.Title = "Book 2";
    book1.author.push_back("Author 1");
    book1.catalognum = 102;
    book1.subject.push_back("Subject A");
    book1.publisher = "Publisher A";
    book1.year = 2023;
    book1.circulating = true;
    libdata.books[libdata.num_books++] = book2;
        libraryT book3;
    book1.Title = "Book 3";
    book1.author.push_back("Author 1");
    book1.catalognum = 103;
    book1.subject.push_back("Subject A");
    book1.publisher = "Publisher A";
    book1.year = 2023;
    book1.circulating = true;
    libdata.books[libdata.num_books++] = book3;
        libraryT book4;
    book1.Title = "Book 4";
    book1.author.push_back("Author 1");
    book1.catalognum = 104;
    book1.subject.push_back("Subject A");
    book1.publisher = "Publisher A";
    book1.year = 2023;
    book1.circulating = true;
    libdata.books[libdata.num_books++] = book4;
        libraryT book5;
    book1.Title = "Book 5";
    book1.author.push_back("Author 1");
    book1.catalognum = 105;
    book1.subject.push_back("Subject A");
    book1.publisher = "Publisher A";
    book1.year = 2023;
    book1.circulating = true;
    libdata.books[libdata.num_books++] = book5;

    std::cout<<"what would you like to do?"<<std::endl;
    std::cout<<"1. add book"<<std::endl;
    std::cout<<"2. search by subject"<<std::endl;
    std::cout<<"3. Display all book info"<<std::endl;
    int num1;
    std::cin>>num1;
    std::cin.ignore();
    if (num1==1) {
        libraryT newBook;
        if (libdata.num_books<1000) {
            std::cout<<"title:";
            std::getline(std::cin, newBook.Title);
            std::cout <<"authors (seperated by commas):";
            std::string input;
            std::getline(std::cin,input);
            std::vector <std::string> authors;
            std::stringstream ss(input);
            std::string author;
            while (std::getline(ss, author, ',')) {
                authors.push_back(author);
            }
            newBook.author = authors;
            std::cout<<"enter Catalog Number:"<<std::endl;
            std::cin >> newBook.catalognum;
            std::cout<<"enter subjects (seperated by commas):"<<std::endl;
            std::string input1;
            std::getline(std::cin,input1);
            std::vector <std::string> subjects;
            std::stringstream ss1(input1);
            std::string subject;
            while (std::getline(ss, subject, ',')) {
                authors.push_back(subject);
            }
            newBook.subject = subjects;
            std::cout<<"enter Publisher:";
            std::getline(std::cin,newBook.publisher);
            std::cout<<"enter publication year:";
            std::cin>>newBook.year;
            std::cout<<"is the book circulating?(1 for yes, 0 for no)";
            std::cin>> newBook.circulating;
            libdata.books[libdata.num_books++] = newBook;
        }

    } else if (num1 == 2){
        std::string subject;
        std::cout<<"what subject do you want to search:";
        std::getline(std::cin,subject);
        searchBySubject(libdata,subject); 

    } else if (num1==3){
        for (int i= 0; i <libdata.num_books;i++){
            libraryT book = libdata.books[i];
            std::cout<<book.Title<<std::endl;
            for(std::string author: book.author){
                std::cout <<" \n"<< author;
            }
        }
    }
    libraryT myBooks;
    return 0;
}