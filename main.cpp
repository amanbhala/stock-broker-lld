#include "common.hpp"
#include "user.hpp"
#include "stock.hpp"
#include "OrderMgr.hpp"
#include "order.hpp"

int main(){
    User* user = new User("Aman Bhala");
    System::AddUser("Aman Bhala", user);
    Stock* stock = new Stock("RELIANCE",2500.0,EXCH::NSE);
    Order* order = new Order(TXN_TYPE::BUY,ORDER_TYPE::LIMIT,2500.0,10,stock,EXCH::NSE);
    OrderMgr* orderMgr = new OrderMgr();
    orderMgr->PlaceOrder("Aman Bhala",order);
    return 0;
}