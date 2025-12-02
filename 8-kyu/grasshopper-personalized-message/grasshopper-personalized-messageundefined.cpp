#include <string>
​
std::string greet(const std::string& name, const std::string& owner) {
  if(name==owner){
    return "Hello boss";
  }
  else {
  return "Hello guest";
    }
}
