#pragma once
#include "orderValidator.hpp"
#include "orderExecutioner.hpp"

class OrderMgr{
    OrderValidator* validator;
	OrderExecutioner* executioner;
public:
    OrderMgr() {
        validator=new OrderValidator();
        executioner=new OrderExecutioner();
    }
    void PlaceOrder(string userId, Order* order){
        if(validator->ValidateOrder(userId,order)){
            executioner->placeOrder(userId,order);
        }else {
			cout << "Can't execute the order" << endl;
		}
    }
};