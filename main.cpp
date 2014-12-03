#include <cstdio>
#include <cstdlib>
#include "image.h"
#include "node.h"


//Work about the link lists

int main(int argc, char const *argv[])
{
//-------------------------------------------------------------------
// Creation of an image wich we place into a node.	
//-------------------------------------------------------------------
  image testo=image();
  char name[]="gargouille.ppm";
  testo.ppm_read_from_file(name);
  node *two= new node ();
  new node(testo, two); // we can't test this methods

  return 0;
}