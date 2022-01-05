#ifndef _HEART_H_
#define _HEART_H_

class Heart {
private:
  int rate;
public:
  void rateSetter(int rateNew);
  int rateGetter();

  //Overloaded constructor
  Heart(int rate);
};

#endif //_HEART_H_
