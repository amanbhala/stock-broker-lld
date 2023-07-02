#pragma once
#include "common.hpp"
#include "stock.hpp"

class Order{
    TXN_TYPE txnType;
    ORDER_TYPE orderType;
    double price;
    int qty;
    Stock* stock;
    EXCH exch;
    // transactions
    // ORDER_TYPE status
    // time
public:
    Order(TXN_TYPE pTxnType,ORDER_TYPE pOrderType,double pPrice, int pQty, Stock* pStock, EXCH pExch) :
        txnType(pTxnType),orderType(pOrderType),price(pPrice),qty(pQty),stock(pStock),exch(pExch) {}

// Setter method
    TXN_TYPE getTxnType(){
        return txnType;
    }
};