#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#include "stringBuilder.h"

static stackNode* Constructor(int value)
{
  stackNode* stackNode = malloc(sizeof(stackNode));
  stackNode->value = value;
  stackNode->next = NULL;

  return stackNode;
}

static stackNode* Push(stackNode* head, int value)
{
  if(head == NULL) return NULL;

  stackNode* temporary = stackAPI.Constructor(value);
  temporary->next = head;
  head = temporary;

  return head;
}

static char* ToString(stackNode* head)
{
  if(head == NULL) return "";

  stringBuilder* stringBuilder = stringBuilderAPI.Constructor();
  stringBuilderAPI.AppendInt(stringBuilder, head->value);

  while((head = head->next) != NULL)
  {
    stringBuilderAPI.AppendChars(stringBuilder, "->");
    stringBuilderAPI.AppendInt(stringBuilder, head->value);
  }

  return stringBuilder->string;
}

static int Pop(stackNode* head)
{
  int temporary = head->value;
  stackNode* temporaryStackNode = head->next;

  head->value = head->next->value;
  head->next = head->next->next;

  free(temporaryStackNode);
  temporaryStackNode = NULL;

  return temporary;
}

stackAPIStruct const stackAPI =
{
  Push,
  Constructor,
  ToString,
  Pop
};
