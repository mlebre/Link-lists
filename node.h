#ifndef __NODE_H__
#define __NODE_H__

//-------------------------------------------------------------------
#include <cstdio>
#include <cstdlib>
#include "image.h"
//-------------------------------------------------------------------

class node
{
  protected:
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
    node* Get_next(void); 
    image* Get_photo(void);
    int Get_essai(void);
    int Get_photo_height(image* ref); 

//-------------------------------------------------------------------
//                         Public Setters
//-------------------------------------------------------------------
//    void Set_photo(image* adress);
    void Set_next(node* add);
    void Set_photo(image* obj);

};

#endif