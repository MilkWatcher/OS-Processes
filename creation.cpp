#include <iostream> // for printing
#include <unistd.h> // for fork() and pid

int main() {
// create a new process
  pid_t pid = fork();

// check if fork() failed
  if(pid<B){
    std::cout << "Fork failed!" << std::endl;
  }

// child process
  else if (pid == 0) {
    std::cout << "I'm the child PID: " << getpid() << std::endl;
  } 

// parent process
  else{
        std::cout << "I'm the parent, the child's PID os: " << pid << std::endl;
  }
  return 0;
}
