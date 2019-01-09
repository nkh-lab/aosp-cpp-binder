#ifndef COM_NKH_CPP_BINDER_SERVER_H_
#define COM_NKH_CPP_BINDER_SERVER_H_

#include "com/nkh/cpp_binder/server/BnServer.h"

namespace com {
namespace nkh {
namespace cpp_binder {
namespace server {

class Server : public BnServer
{
public:
    virtual ::android::binder::Status getInt(int32_t* _aidl_return) override;

};  // class Server
}  // namespace server
}  // namespace cpp_binder
}  // namespace nkh
}  // namespace com

#endif  // COM_NKH_CPP_BINDER_SERVER_H_