#include <iostream> // for printing
#include <unistd.h> // for fork() and pid

int main() {
// create a new process
  pid_t pid = fork();

// check if fork() failed
  if(pid<0){
    std::cout << "Fork failed!" << std::endl;
    return 1;
  }

// child process
  else if (pid == 0) {
    std::cout << "I'm the child PID: " << getpid() << std::endl;
  } 

// parent process
  else{
        std::cout << "I'm the parent, the child's PID is: " << pid << std::endl;
  }
  return 0;
}
