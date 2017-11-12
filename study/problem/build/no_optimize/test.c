#include <stdlib.h>
#include <stdio.h>

#ifdef CONFIG_TARGET_X86_64
static void A( )
{
	printf("A\n");
}
#else
static void A( )
{
}
#endif

static void B( )
{
	printf("B\n");
}


inline int xx( )
{
#ifdef CONFIG_TARGET_X86_64
  return 1;
#else
  return 0;
#endif
}

int main(void)
{
  if (xx( ))
    A( );
  else
    B( );
}
