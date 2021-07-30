#include <rg2ft.h>

rg2ft::rg2ft(){
     http_client.reset(new httplib::Client("http://192.168.1.1:80"));
}

bool rg2ft::gripperState(int width, int force)
{
  std::string req_url = "/api/dc/rg2ft/set_width/" + std::to_string(width) + "/" + std::to_string(force) + "";
  auto res = http_client->Get(req_url.c_str());
  if (res)
  {
    if (res->status == 200)
    {
      std::cout << res->body << std::endl;
      return true;
    }
  }
  else
  {
    auto err = res.error();       
    std::cout << "Error opening gripper: " << err << std::endl;
  }
  return false;
}