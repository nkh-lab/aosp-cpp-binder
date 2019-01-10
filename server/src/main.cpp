#include <log/log.h>
#include <utils/String16.h>
#include <binder/IPCThreadState.h>
#include <binder/IServiceManager.h>

#include "com/nkh/cpp_binder/server/Server.h"

namespace nkh_server = com::nkh::cpp_binder::server;

// 1. Start service
// $su system
// $nkh-server
//
// 2. Check in service list
// $service list
// 0	nkh-server: [com.nkh.cpp_binder.server.IServer]

int main()
{
    ALOGI("Service registration");
    android::defaultServiceManager()->addService(android::String16("nkh-server"), new nkh_server::Server());

    android::ProcessState::self()->startThreadPool();
    ALOGI("Service is now ready");
    android::IPCThreadState::self()->joinThreadPool();
    ALOGI("Service thread joined");

    return 0;
}