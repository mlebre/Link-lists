#include <cstdio>
#include <cstdlib>
#include "node.h"
#include "image.h"

//---------------------------------------------------------
//                    Constructors
//---------------------------------------------------------
node::node(void)
{
	next=NULL;  
    data=NULL;
}

/*node::node(const node& model)
{
    next=model.Get_next();
    data=model.Get_data();

}*/

//---------------------------------------------------------
//                    Methods
//---------------------------------------------------------
int * node::Get_next(void)
{
  return next;
}
u_char * node::Get_data(void)
{
  return data;
} 