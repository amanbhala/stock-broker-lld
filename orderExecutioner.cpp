#pragma once
#include "order.hpp"
#include "orderExecutioner.hpp"
#include "exchConnector.hpp"

void OrderExecutioner::placeOrder(string pUserId, Order* order){
    ExchConnector* ExchConnector = ExchConnector::getExchConnectorInstance();
    ExchConnector->sendOrderToExch(pUserId,order);
}