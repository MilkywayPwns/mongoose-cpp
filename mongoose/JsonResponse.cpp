#include <sstream>
#include "json11.hpp"
#include "JsonResponse.h"

using namespace std;

namespace Mongoose
{
    JsonResponse::JsonResponse()
        : humanReadable(false)
    {
    }

    string JsonResponse::getBody()
    {
        return json11::Json(*this).dump();
    }

    void JsonResponse::setHuman(bool human)
    {
        humanReadable = human;
    }
}
