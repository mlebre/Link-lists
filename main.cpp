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
  node* one=new node();
  one->Set_photo(&testo);
  printf("%p\n", &testo);
  printf("%p\n", one->Get_photo());
  
  delete one;
//-------------------------------------------------------------------
// Link_list  
//-------------------------------------------------------------------
/*  link_list trying=link_list();
  node* first=new node();
  node* second=new node();
//Creation of a list with two nodes
//  trying.Set_nb_elements(2);
//  printf("%d\n", trying.Get_nb_elements());

  delete first;
  delete second;
*/
  return 0;
}