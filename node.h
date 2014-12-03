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
    node(const image& model, node *ref); //subsitute of the copy constructor

//-------------------------------------------------------------------
//                         Public destructors
//-------------------------------------------------------------------
    ~node(void);


//-------------------------------------------------------------------
//                         Public Getters
//-------------------------------------------------------------------
    int Get_essai(void); 
    image* Get_photo(void);
    int Get_photo_height(image* ref); 

};

//#endif