#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int main()
{
  stackNode* head = stackAPI.Constructor(5);
  printf("%s\n", stackAPI.ToString(head));

  head = stackAPI.Push(head, 10);
  printf("%s\n", stackAPI.ToString(head));

  head = stackAPI.Push(head, 1);
  printf("%s\n", stackAPI.ToString(head));

  int value = stackAPI.Pop(head);
  printf("%i\n", value);
  printf("%s\n", stackAPI.ToString(head));
}
