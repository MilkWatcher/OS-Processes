#include <iostream> // for printing
#include <unistd.h> // for fork and sleep
#include <sys/wait.h> // for wait
#include <signal.h> // for kill
using namespace std;

int main(){
// create a child process
  pid_t pid = fork();

// child process
  if(pid == 0){
    std::cout << "Child starting, PID: " << getpid() << std::endl;
    sleep(2);  // pretending to do some work...

    std::cout << "Child finished their work (real)" << std::endl;
    _exit(0);  // exiting normally

// parent process
  else{
    std::cout << "Parent - I've created child PID: " << pid << std::endl;
    sleep(1);  // wait for child to start

  // sending kill signal
    if(kill(pid, SIGTERM)==0){
      std::cout << "Parent - I've sent a SIGTERM to child for pretending to work!" << std::endl;
    }
  wait(NULL);
  std::cout << "Parent - My child is gone D:" << std::endl;
  }
return 0;
}
