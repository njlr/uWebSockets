#include <uWS/uWS.h>

int main() {

  uWS::Hub h;

  std::string document = "<h1>Hello, world. </h1>";

  h.onHttpRequest([&document](uWS::HttpResponse *res, uWS::HttpRequest req, char *data, size_t length, size_t remainingBytes) {
    res->end(document.data(), document.length());
  });

  h.listen(3000);
  h.run();

  return 0;
}
