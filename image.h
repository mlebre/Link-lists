#ifndef __IMAGE_H__  // si character.h is not defined already, take everything until to #endif
#define __IMAGE_H__

class image
{
  private:
//=============================================================
//                        Parameters of picture  	
//=============================================================  	
  	int height;
  	int width;
  	unsigned char * pix;

  public:
//=============================================================
//                        Constructors 	
//=============================================================  

    image(void);
    image(const image& model);

//=============================================================
//                        Destructors  
//=============================================================  
  //  ~image(void);
//=============================================================
//                        Getters 	
//=============================================================  
    int Get_height(void) const;
    int Get_width(void) const;
    unsigned char Get_pix(void) const;

//=============================================================
//                        Setters   
//============================================================= 
    void Set_height(const int number, image& neo);
    void Set_width(const int number, image& neo);
    void Set_pix(const unsigned char *tab, image& neo);


//=============================================================
//                        Methods 	
//=============================================================  
  	void ppm_read_from_file(const char * title);
  	void ppm_desaturate(void);
  	void ppm_write_to_file(const char *title);
  	void ppm_shrink(const int factor);


};
#endif