#include <iostream>

using namespace std;

// Write a function that will take as input an integer and will return
// double that value
// If there is no input value, then input should be -1
int doubleNum(int inNum = -1) {
return (2*inNum);
}

int main(){
cout << doubleNum(3) << endl;}


// Write a function that will take inputs of floats a, b and c
// a is required 
// if b has no input then value for b is 0.1
// c is required
// output: the sum of a, b and c

float sumFloats(float a, float b = 0.1, float c){
return (a+b+c)}

// Write a function that will take in an array and size as input
// the function should return nothing
// the function should print the array.
void printChars(char myArr[], int size){
  for(int index = 0;int < size; index + 1){
    cout << myArr[index] << endl;}
  cout << endl;
}


int main() {
  cout << doubleNum() << endl;
  cout << sumFloats(0.5, 0.9) << endl;
  const int SIZE = 5;
  char myChars[5] = {'h', 'e', 'l', 'l', 'o'};
  printChars(myChars, 5);}
