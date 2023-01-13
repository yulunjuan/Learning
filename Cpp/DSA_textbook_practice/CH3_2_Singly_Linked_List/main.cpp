#include <iostream>
#include <cstdlib>
using namespace std;

class StringNode{                   // a node in a list of strings
private:                            
    string elem;                    // element value
    StringNode* next;               // next item in the list

    friend class StringLinkedList;  // provide StringLinkedList access
};

class StringLinkedList{             // a linked list of strings
public:                             
    StringLinkedList();             // empty list constructor
    ~StringLinkedList();            // destructor
    bool empty() const;             // is list empty?
    const string& front() const;    // get front element
    void addFront(const string& e); // add to front of list
    void removeFront();             // remove front item list
private:
    StringNode* head;               // pointer to the head of the list
};

StringLinkedList::StringLinkedList():head(NULL) {}  //constructor

StringLinkedList::~StringLinkedList() 
{ while (!empty()) removeFront();}      // destructor

bool StringLinkedList::empty() const 
{ return head == NULL; }                 // is list empty?

const string& StringLinkedList::front() const   // get front element
{ return head -> elem; }

void StringLinkedList::addFront(const string& e){
    StringNode* v = new StringNode;
    v -> elem = e;
    v -> next = head;
    head = v;
}

void StringLinkedList::removeFront() {      // remove front item
    StringNode* old = head;                 // save current head
    head = old -> next;                     // skip over old head
    delete old;                             // delete the old head
}

template <typename E>
class SNode {                       // singly linked list node
private:
    E elem;                         // linked list element value
    SNode<E>* next;                 // next item in the list
    friend class SLinkedList<E>;    // provide SLinkedList access
};

template <typename E>
class SLinkedList {             // a singly linked list
public:
    SLinkedList();              // empty list constructor
    ~SLinkedList();             // destructor
    bool empty() const;         // is list empty?
    const E& front() const;     // return front element
    void addFront(const E& e);  // add to front of list
    void removeFront();         // remove front item list
protected:
    SNode<E>* head;             // head of the list
};

template <typename E>
SLinkedList<E>::SLinkedList():head(NULL) { }            // constructor


template <typename E>   
bool SLinkedList<E>::empty() const          // is list empty?
{ return head == NULL; }

template <typename E>
const E& SLinkedList<E>::front() const      // return front element
{ return head -> elem; }

template <typename E>
SLinkedList<E>::~SLinkedList()              // destructor
{ while (!empty()) removeFront(); }

template <typename E>
void SLinkedList<E>::addFront(const E& e) { // add to front of list
    SNode<E>* v = new SNode<E>;             // create new node
    v -> elem = e;                          // store data
    v -> next = head;                       // head now follows v
    head = v;                               // v is now the head
}

template <typename E>
void SLinkedList<E>::removeFront() {        // remove front item
    SNode<E>* old = head;                   // save current head
    head = old -> next;                     // skip over old head
    delete old;                             // delete the old head
}







int main(){   

    
    

    return 0;
}