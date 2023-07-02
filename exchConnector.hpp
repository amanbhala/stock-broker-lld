#pragma once
#include "common.hpp"
#include "order.hpp"
#include <mutex>

class ExchConnector{
    ExchConnector() {}     //Making constructor as private so noone is able to call it, we will just have one instance of it
    static mutex mtx;
    static ExchConnector* EXCHConnectorInstance;    //Creating a single instance
public:
    static ExchConnector* getExchConnectorInstance();
    static void sendOrderToExch(string userId, Order* order);
};