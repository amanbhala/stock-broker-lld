#pragma once
#include "common.hpp"

class User{
    string userId; //Here, we are cosidering name as userId
    // funds
    // watchlists
    // portfolio
public:
    User(string pUserId) : userId(pUserId) {}
    string getUserId() { return userId; }
};