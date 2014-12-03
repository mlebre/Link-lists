#include <cstdio>
#include <cstdlib>
#include "image.h"
#include "node.h"
#include "link_list.h"

//Work about the link lists

int main(int argc, char const *argv[])
{
//-------------------------------------------------------------------
// Creation of an image wich we place into a node.	
//-------------------------------------------------------------------
  image testo= image();
  char name[]="gargouille.ppm";
  testo.ppm_read_from_file(name);

//Affection of the image's adress to the node.
  node one=node();
  image* point=&testo;
//  Set_photo(point);
//  printf("%p\n", point);
 // printf("%p\n", &testo);

//Call to the copy constructor  
  node *two= new node ();
  new node(testo, two); // we can't test this method

//Use the link_list class
  link_list trying=link_list();
  printf("%d\n", trying.nb_elements);

  return 0;
}