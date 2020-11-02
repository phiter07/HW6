/*
#include <iostream>
#include <string>
#include "dlist.h"

using namespace std;

enum Job {STUDENT, FACULTY, STAFF};

struct Document {
  string name;
  string uniqname;
  Job job;
};

int main() {

  // cout << "inside of main" << endl;
  // std::cout << "First";
  Dlist<Document*> catsweb; //records are big, so store pointer
  // Dlist<double> catsweb; 
  
  Document* a = new Document;
  a->name = "Kobe";
  a->uniqname = "mamba";
  a->job = FACULTY;
  catsweb.InsertBack( a );

  // // do something with "catsweb"

  Document* b = new Document;
  b->name = "Carly";
  b->uniqname = "paige";
  b->job = FACULTY;
  catsweb.InsertBack( b );

  Document* c = new Document;
  c->name = "Travis";
  c->uniqname = "Anakin";
  c->job = FACULTY;
  catsweb.InsertBack( c );

  Document* d = new Document;
  d->name = "Leeroy";
  d->uniqname = "jenkins";
  d->job = FACULTY;
  catsweb.InsertBack( d );

  Document* e = new Document;
  e->name = "Jackson";
  e->uniqname = "jax";
  e->job = FACULTY;
  catsweb.InsertFront( e );

  Document* f = new Document;
  f->name = "vans";
  f->uniqname = "offwall";
  catsweb.InsertFront( f );

  //   catsweb.InsertBack(z);


  //don't forget to delete objects on the heap
  while (!catsweb.IsEmpty() ) {
    // std::cout << "Inside of while" << "\n";
    Document *g = catsweb.RemoveBack(); // Getting Segmentation Fault HERE
    //double l = catsweb.RemoveBack();
    cout << g->uniqname << endl;
    delete g;
    //cout << l << endl;
  }


  return 0;
}
*/