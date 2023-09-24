#ifndef _user_h
#define _user_h

#include <string>
#include <vector>

class User {
private:
    std::string userName;
    std::string email;
    std::vector<User*> friendList;

public:
    User(const std::string& name, const std::string& userEmail);

    void setUserName(const std::string& name);
    std::string getUserName();

    void setEmail(const std::string& userEmail);
    std::string getEmail();

    void addFriend(User* friendUser);
    void removeFriend(const std::string& friendUserName);
    int numFriends();
    User* getFriendAt(int index);
};

#endif
