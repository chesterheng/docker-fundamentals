#include <stdio.h> 
#include <unistd.h> 
int main()
{
  int delay = 3600; //sleep for 1 hour
  printf ("Sleeping for %d second(s)...\n", delay); 
  sleep(delay);
  return 0;
}