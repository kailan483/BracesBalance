#include "Stack.h"
#include <fstream>
#include <sstream>
#include <iostream>

int main()
{
  std::ifstream file("code.txt");
  std::stringstream stream;
  std::string str = "";

  stream << file.rdbuf();
  str = stream.str();  

  Stack s;

  for ( int i = 0; i < str.size(); i++ )
  {
    if ( str[i] == '{' )
      s.Push(str[i]);
    else if (str[i] == '}')
    {
      Node tmp = s.Pop();    
      if ( tmp.GetData() == '\0' )
      {
        std::cout << "Error while checking bracers!!!" << std::endl;
        break;
      }
        
    }      
  }

  if ( !s.isEmpty() )
    std::cout << "Error while checking bracers!!!" << std::endl;  
}