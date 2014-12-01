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

node::node(image *model)
{
  Set_height(model->Get_height(), photo);
  Set_width(model->Get_width(), photo);
  Set_pix(model->Get_pix(), photo);
}


//-------------------------------------------------------------------
//                              Getters
//-------------------------------------------------------------------
int node::Get_essai(void)
{
  return essai;
}


