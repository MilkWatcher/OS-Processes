#include <iostream> // for printing
#include <unistd.h> // for nice function
#include <sys/resource.h> // for getting priority
using namespace std;

int main(){
// get the current nice value
  int old_nice = getpriority(PRIO_PROCESS, 0);
  std::cout << "Current nice value: " << old_nice << std::endl;

// add 5 to nice value to loweer its priority
  if( nice(5) == -1 ){
    std::cout << "Couldn't change the nice value!" << std::endl;
    retun -1;
  }

// get the nice value
  int new_nice = getpriority(PRIO_PROCESS, 0);
  std::cout << "New nice value: " << new_nice << std::endl;
  return 0;
}
