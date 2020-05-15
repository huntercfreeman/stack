#ifndef stackLibrary
#define stackLibrary

typedef struct stackNode {
  int value;
  struct stackNode* next;
} stackNode;

typedef struct stackAPIStruct {
  stackNode* (* const Push)(stackNode* head, int value);
  stackNode* (* const Constructor)(int value);
  char* (* const ToString)(stackNode* head);
  int (* const Pop)(stackNode* head);
} stackAPIStruct;

stackAPIStruct const stackAPI;

#endif
