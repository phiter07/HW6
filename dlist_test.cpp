
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
  Dlist<Document*> catsweb; 
  
  Document* a = new Document;
  a->name = "Kobe";
  a->uniqname = "mamba";
  a->job = FACULTY;
  catsweb.InsertBack( a );

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

  while (!catsweb.IsEmpty() ) {
    Document *g = catsweb.RemoveBack();
    cout << g->uniqname << endl;
    delete g;
  }
  return 0;
}
