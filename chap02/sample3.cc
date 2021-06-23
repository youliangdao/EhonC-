#include <stdio.h>
#include <string.h>

void DispString(const char *ptr)
{
  strcpy(ptr, "dog");
}

void ChangeString(const char* ptr){
  char* buf;
  buf = ptr;
}

int main(void)
{
  const char *buf = "cat";
  DispString(buf);
  return 0;
}


