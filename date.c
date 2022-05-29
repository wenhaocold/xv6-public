#include "types.h"
#include "user.h"
#include "date.h"

int main(int argc, char *argv[])
{ 
  struct rtcdate r;

  if (date(&r))
  { 
    printf(2, "date failed\n");
    exit();
  }
  printf(1, "%d-%d-%d\n", r.year, r.month, r.day);
// your code to print the time in any format you like...

  exit();

}
