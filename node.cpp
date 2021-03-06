#include "node.h"
#include <cstdio>
#include <cstdlib>
#include "image.h"

//-------------------------------------------------------------------
//                              Constructors
//-------------------------------------------------------------------

node::node(void) 
{
  next=NULL;
  photo=NULL;
  essai=6;
}

//A sort of a copy constructor
node::node(const image& model, node *ref)
{
  ref=new node();
  ref->photo=new image(model);
}

//-------------------------------------------------------------------
//                              Destructors
//-------------------------------------------------------------------
node::~node(void)
{
	delete [] next;
	delete [] photo;
	next=NULL;
}

//-------------------------------------------------------------------
//                              Getters
//-------------------------------------------------------------------
node* node::Get_next(void)  
{
  return next;
}

image* node::Get_photo(void)  
{
  return photo;
}

int node::Get_essai(void)  
{
  return essai;
}
//Use to see the parameters include the node
int node::Get_photo_height(image* ref) 
{
  int a=ref->Get_height();
  printf("'%d\n", a);
  return a;
}

//-------------------------------------------------------------------
//                              Setters
//-------------------------------------------------------------------
void node::Set_next(node* add)  
{
  next=add;
}

//Allow the affectation to photo the adress of the picture
void node::Set_photo(image* obj)  
{
  photo=obj;
}
