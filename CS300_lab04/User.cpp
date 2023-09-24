#include "user.h"

User::User(const std::string& name, const std::string& userEmail) : userName(name), email(userEmail) {}

void User::setUserName(const std::string& name) {
    userName = name;
}

std::string User::getUserName() {
    return userName;
}

void User::setEmail(const std::string& userEmail) {
    email = userEmail;
}

std::string User::getEmail() {
    return email;
}

void User::addFriend(User* friendUser) {
    friendList.push_back(friendUser);
}

void User::removeFriend(const std::string& friendUserName) {
    for (auto it = friendList.begin(); it != friendList.end(); ++it) {
        if ((*it)->getUserName() == friendUserName) {
            friendList.erase(it);
            break;
        }
    }
}

int User::numFriends() {
    return friendList.size();
}

User* User::getFriendAt(int index) {
    if (index >= 0 && index < numFriends()) {
        return friendList[index];
    }
    return nullptr;
}

