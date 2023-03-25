class Data
{
private:
  char d;
public:  
  Data( char d = '\0' );
  void SetData( char d ) { this->d = d; }
  char GetData() const;
};

class Node
{
private:
  Data d;  
public:
  Node( char data = '\0' );
  void SetData( char data ) { d.SetData( data ); }
  char GetData() const;
  Node* next = nullptr;
};

class Stack
{
private:  
  Node* top  = nullptr;
public:
  void Push( char d );
  Node Pop();
  void Print();
  bool isEmpty() const;
};