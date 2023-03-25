#include "Stack.h"
#include <iostream>

Data::Data(char d) : d(d) {}

char Data::GetData() const { return d; }

Node::Node( char data ) : d(data) {};

char Node::GetData() const { return d.GetData(); }


void Stack::Push( char d )
{
  Node* tmp = new Node(d);

  tmp->next = top;

  top = tmp;

}

Node Stack::Pop()
{
  Node returnNode = {};

  if ( top )
  {
    Node* tmp = top;    
    returnNode.SetData(tmp->GetData());
    top = top->next;
    delete tmp;
    tmp = nullptr;
  }
  
  return returnNode;
}

void Stack::Print()
{
  Node* tmp = top;

  while ( tmp )
  {
    std::cout << tmp->GetData() << " ";
    tmp = tmp->next;
  }

}

bool Stack::isEmpty() const { return top == nullptr; }
