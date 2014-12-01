//#ifndef __IMAGE_H__
//#define __IMAGE_H__

//-------------------------------------------------------------------

#include <cstdio>
#include <cstdlib>
#include "image.h"
//-------------------------------------------------------------------

class node
{
  private:
//-------------------------------------------------------------------
//                          Private attributs
//-------------------------------------------------------------------
    node * next;
    image * photo;
    int essai;

  public:
//-------------------------------------------------------------------
//                         Public constructors
//-------------------------------------------------------------------
    node(void);
    node(image *model); //subsitute of the copy constructor

//-------------------------------------------------------------------
//                         Public methods
//-------------------------------------------------------------------
    int Get_essai(void);

};

//#endif