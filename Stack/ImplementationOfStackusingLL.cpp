

#include <iostream>
using namespace std;

// Definition of StackNode
class StackNode {
public:
    int data;
    StackNode* next;
    StackNode(int x) { // Constructor to initialize node
        data = x;
        next = nullptr;
    }
};

class MyStack {
    private:
      StackNode *top;
  
    public:
      MyStack() 
      { 
          top = nullptr; 
          
      }
      void push(int x) {
          StackNode * newNode=new StackNode(x);
          newNode->next=top;
          top=newNode;
      }
  
      int pop() {
          if(top==nullptr)
          {
              return -1;
          }
          int poppedValue = top->data;
          StackNode* temp=top;
          top=top->next;
          delete temp;
          return poppedValue;
      }
  
     
  };
  int main() {
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Popped: " << s.pop() << endl; // Should return 30
    
    return 0;
}