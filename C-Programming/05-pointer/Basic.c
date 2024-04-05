// (1)int a=5;
// (2)int *p=&a;(ye jo Pointer variable hai wo a ki address ko store kar liya hai)
// (3)p=&a;     (ye jo Pointer variable hai wo a ki address ko store kar liya hai)

// 2nd and 3rd me kiya difference hai

// 2nd---->declaration करते समय ही address ko store kar liye hai 

// 3rd---->pahele intialised kiye iske bad adress ko store kiye hai isliye p ke upar me * nahi legega.

#include <stdio.h>

int main()
{
  int *p;
  int a = 5;
  p = &a;
  *p = 6;

  printf("a=%d\n",a);
  printf("p=%d",*p);

  return 0;
}