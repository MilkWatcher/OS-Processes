#include <iostream> // for printing
#include <unistd.h> // for getting process IDs

int main(){
// print the current process ID
  std::cout << "My process ID: " << getpid() << std::endl;
// print parent process ID
  std::cout << "My parent process ID: " << getppid() << std::endl;
  return 0;
}
