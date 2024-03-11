#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *thread_function(void *arg) {
  printf("Hilo en ejecución\n");
  return NULL;
}

int main() {
  pid_t pid;
  pid = fork();

  if (pid == 0) { /* child process */
    fork();
    pthread_t thread;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_create(&thread, &attr, thread_function, NULL);
  }

  fork();
  return 0;
}
