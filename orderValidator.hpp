#pragma once
#include "order.hpp"
#include "system.hpp"
#include "user.hpp"

class OrderValidator{
public:
    bool ValidateOrder(string UserId, Order* order) {
        User* user = System::GetUser(UserId);
		if (order->getTxnType() == TXN_TYPE::BUY) {
			cout << "Checking if user " << user->getUserId() << " has enough funds to buy " << endl;
			cout << " For now, let's assume user is a good person and return true" << endl;
		}
		else {
			cout << "Checking if user " << UserId << " has enough stocks to sell in portfolio " << endl;
			cout << " For now, let's assume user is a good person and return true" << endl;
		}
		return true;
    }
};