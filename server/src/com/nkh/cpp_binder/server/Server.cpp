#include "Server.h"

namespace com {
namespace nkh {
namespace cpp_binder {
namespace server {

::android::binder::Status Server::getInt(int32_t* _aidl_return)
{
    static int ret = 123;

    _aidl_return = &ret;

    return ::android::binder::Status::ok();
}

}  // namespace server
}  // namespace cpp_binder
}  // namespace nkh
}  // namespace com