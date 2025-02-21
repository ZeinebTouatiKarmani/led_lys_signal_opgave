# ifndef _led_lys_signal
# define _led_lys_signal
# include <Arduino.h>



class led_lys_signal {
  private:
    byte redpin;
    byte yellowpin;
    byte greenpin;

  public:
    led_lys_signal(int r, int y, int g);
    void attach();
    void setred(bool status);
    void setyellow(bool status);
    void setgreen(bool status);


};
  
# endif