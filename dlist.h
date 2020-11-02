#ifndef __DLIST_H__
#define __DLIST_H__


/***************************************
 * Do not modify the class declarations!
 ***************************************/
class emptyList {
  // OVERVIEW: an exception class
};

template <typename T>
class Dlist {
  // OVERVIEW: contains a double-ended list of Objects

 public:

  // Operational methods

  bool IsEmpty() const;
  // EFFECTS: returns true if list is empty, false otherwise

  void InsertFront(const T &o);
  // MODIFIES this
  // EFFECTS inserts o at the front of the list
    
  void InsertBack(const T &o);
  // MODIFIES this
  // EFFECTS inserts o at the back of the list

  T RemoveFront();
  // MODIFIES this
  // EFFECTS removes and returns first object from non-empty list
  //         throws an instance of emptyList if empty

  T RemoveBack();
  // MODIFIES this
  // EFFECTS removes and returns last object from non-empty list
  //         throws an instance of emptyList if empty

  // Maintenance methods
  Dlist();                                   // ctor
  Dlist(const Dlist &l);                     // copy ctor
  Dlist &operator=(const Dlist &l);          // assignment
  ~Dlist();                                  // dtor

 private:
  // A private type
  struct node {
    node   *next;
    node   *prev;
    T      o;
  };

  node   *first; // The pointer to the first node (0 if none)
  node   *last;  // The pointer to the last node (0 if none)
  //How us this different than the doubly linked list in class?

  // Utility methods

  void MakeEmpty();
  // EFFECT: called by constructors to establish empty
  // list invariant
    
  void RemoveAll();
  // EFFECT: called by destructor and operator= to remove and destroy
  // all list nodes

  void CopyAll(const Dlist &l);
  // EFFECT: called by copy constructor/operator= to copy nodes
  // from a source instance l to this instance
};

/**** DO NOT MODIFY ABOVE THIS LINE *****/

/***************************************
 *ADD  Member function implementations here
 ***************************************/
 //Works Good
template <typename T>
Dlist<T>::Dlist(){
  MakeEmpty();
  // std::cout << "Inside of Dlist()";
} 

template <typename T>
Dlist<T>::Dlist( const Dlist &l){
  MakeEmpty();
  CopyAll(l);
} 

//Works Good
template <typename T>
bool Dlist<T>::IsEmpty() const {

  return (!first && !last);
  
}

//Works Good
template <typename T>
void Dlist<T>::InsertFront(const T &o){
  
  node *newNode = new node;
  newNode->o = o;

  newNode->prev = nullptr; 
  newNode->next = nullptr; 

  if(first == nullptr){
    // first = newNode;
    last = newNode;
    first = newNode;

  }else{
    newNode->next = first;
    first->prev = newNode; 
    first = newNode;

  }
}

//Works Good
template <typename T>
void Dlist<T>::InsertBack(const T &o){
  // std::cout << "Inside of InsertBack()";

  node *newNode = new node;
  newNode->next = nullptr;
  newNode->prev = nullptr;
  newNode->o = o;

  if(last == nullptr){
    first = newNode;
    last = newNode;
  }else{
    newNode->prev = last;
    last->next = newNode;
    last = newNode;
  }

}

template <typename T>
T Dlist<T>::RemoveFront(){
 
  if(IsEmpty()){
    emptyList e;
    throw e;
  }

  node* temp = first;
  T data = temp->o;

  if(first->next){
    first = first->next;
    first->prev = nullptr;
    delete temp;
  }else{
    RemoveAll();
  }
    return data;

}

template <typename T>
T Dlist<T>::RemoveBack(){

  if(IsEmpty()){
    emptyList e;
    throw e;
  }

  node* temp = last;
  T data = temp->o;

  if(last->prev){
    last= last->prev;
    last->next = nullptr;
    delete temp;
  }else{
    RemoveAll();
  }
    return data;
}

//Works Good
template <typename T>
void Dlist<T>::MakeEmpty(){
  // std::cout << "Inside of MakeEmpty()";
  first = nullptr;
  last = nullptr;
}

template <typename T>
void Dlist<T>::RemoveAll(){

  while(first){
    node *temp = first;
    first = first->next;
    delete temp;
  }
  MakeEmpty();
}

template <typename T>
void Dlist<T>::CopyAll(const Dlist &l){
  
      node* temp = l.first;
      while (temp) {
        InsertBack(temp->o);
        temp = temp->next;
    }


}

template <typename T>
Dlist<T>& Dlist<T>::operator=(const Dlist &l){
  if(this != &l){
    RemoveAll();
    CopyAll(l);
  }
  return *this;                
}   

//destructor
template <typename T>
Dlist<T>::~Dlist(){
  RemoveAll();
  //MakeEmpty();
}

/* this must be at the end of the file */
#endif /* __DLIST_H__ */
