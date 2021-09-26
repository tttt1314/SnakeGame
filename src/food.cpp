#include "food.h"
#include "SDL.h"
void Food::updateState(){
  if(counter < 4) {
    state = State::golden;
  } else if(counter < 9) {
    state = State::silver;
  } else {
    state = State::normal;
  }
}
void Food::counterAdd(){
  counter++;
  counter %= 500;
}