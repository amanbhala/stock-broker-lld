#pragma once
#include "user.hpp"
#include "unordered_map"

class System{
    static unordered_map<string, User*> users;
public:
    static void AddUser(string userId,User* user);
    static User* GetUser(string userId);
};