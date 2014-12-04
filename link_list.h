
//-------------------------------------------------------------------
#include "image.h"
#include "node.h"
//-------------------------------------------------------------------

class link_list
{
  private:
    int nb_elements;
    node* first;

  public:
//-------------------------------------------------------------------
//                    Constructors & Desructors
//-------------------------------------------------------------------
    link_list(void);
    ~link_list(void);
//-------------------------------------------------------------------
//                         Publics methods
//-------------------------------------------------------------------
    int Get_nb_elements(void);
    void Set_nb_elements(int x);
    void append(node* add, node* last);

};



