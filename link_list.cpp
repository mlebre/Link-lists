#include <cstdio>
#include <cstdlib>
#include "image.h"
#include "node.h"
#include "link_list.h"

//-------------------------------------------------------------------
//                         Constructors & Destructors
//-------------------------------------------------------------------
link_list::link_list(void)
{
  nb_elements=0;
  first=NULL;
}

link_list::~link_list(void)
{
}

//-------------------------------------------------------------------
//                         Methods
//-------------------------------------------------------------------
int link_list::Get_nb_elements(void)
{
  return nb_elements;
}

void link_list::Set_nb_elements(int x)
{
  nb_elements=x;
}
//In main, the last node of this list call this method
void link_list::append(node* add, node* last)
{
  last->Set_next(add);
}