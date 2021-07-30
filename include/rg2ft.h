#include <memory>
#include <httplib.h>

class rg2ft
{
public:
rg2ft();
bool gripperState(int width, int force);

private:
std::shared_ptr<httplib::Client> http_client;


};