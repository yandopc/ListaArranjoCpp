#include <iostream>
#include "array.h"

using namespace std;

int main (int argc, char const* argv[]) {
   
   Lista a;
   a.initList(5);
   a.insereList(5);
   a.insereList(12);
   a.insereList(9);
   a.insereList(7);
   a.insereList(3);
   a.insereList(11);
   a.imprime();
   //a.removeIdc(1);
   a.removeIdc(2);
   a.getIt(2);
   a.imprime();
   a.removeItem(11);
   a.imprime();
}
