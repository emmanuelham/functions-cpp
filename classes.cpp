#include <iostream>
#include <string>

include namespace std;

// Define a class "animal"
// class should have 3 attributes:
// weight:
// color:
// numLegs:

class Animal{
  public:
  int weight;
  string color;
  int numLegs;
  // write a constructor that will take inputs
  // weight, color and numLegs
  // all inputs are optional
  Animal(int inWeight = 0, string inColor = "no color", int inNumLegs = 0){
  weight = inWeight;
  color = inColor;
  NumLegs = inNumLegs;}
};

int main(){
  // declare an animal object
Animal myAnimal;
Animal anotherAnimal(10, "grey", 16);
  //set color to be "rainbow"
myAnimal.color = "rainbow";
}
