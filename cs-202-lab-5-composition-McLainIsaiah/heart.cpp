#include "heart.h"

Heart::Heart(int rate)
  : rate{rate} {

}

void Heart::rateSetter(int rateNew){
  rate = rateNew;
}

int Heart::rateGetter(){
  return rate;
}
