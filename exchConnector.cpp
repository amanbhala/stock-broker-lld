#include "exchConnector.hpp"
#include "common.hpp"
#include "order.hpp"
#include <mutex>

// We will always reture only one instance when someone will call this class
ExchConnector* ExchConnector::EXCHConnectorInstance = nullptr;
mutex ExchConnector::mtx;   

ExchConnector* ExchConnector::getExchConnectorInstance() {
    // locks are very expensive, so everytime putting a lock is not good, so we will create it only for the first time
    if (EXCHConnectorInstance == nullptr) {
        mtx.lock();
        if(EXCHConnectorInstance==nullptr){
            EXCHConnectorInstance=new ExchConnector();
        }
        mtx.unlock();
    }
    return EXCHConnectorInstance;
}

void ExchConnector::sendOrderToExch(string userId, Order* order) {
    cout<<"Order is sent to exchange"<<endl;
}