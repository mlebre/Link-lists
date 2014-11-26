#ifndef __CHARACTER_H__  // si character.h is not defined already, take everything until to #endif
#define __CHARACTER_H__


class node
{
  protected:
//---------------------------------------------------------
//                    Protected attributes
//---------------------------------------------------------
    node * next;
    image* data;

  public:
//---------------------------------------------------------
//                    Public constructors
//---------------------------------------------------------
    node(void);
    node(const node& model);


//---------------------------------------------------------
//                    Public methods
//---------------------------------------------------------
    int * Get_next(void);
    u_char * Get_data(void);


};




#endif