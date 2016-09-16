#include <string>
#include <iostream>
#include "array.h"

using namespace std;

using std::string;

void Lista::initList (int t) {
   i = new int[t];
   tam = t;
   ult = 0;
}

int Lista::taCheia (void) {
   if (ult == tam) return 1;
   return 0;
}

int Lista::insereList (int n) {
   if (taCheia()) realoca();
   i[ult] = n; ++ult;
   return 1;
}

int Lista::len (void) {
   return tam;
}

void Lista::aliment (void) {  
   int i;
   while (i < tam) {
      this->i[i] = i;
      ++i;
   }
}

bool Lista::removeIdc (int in) {
   for (int i = 0; i < ult; i++) {
      if (in == i) {
         for (int j = i; j < ult; j++) {
            this->i[j] = this->i[j+1];
         }
      --ult;
      return true;
      }
   }
   return false;
}

bool Lista::removeItem (int item) {
   for (int i = 0; i < ult; i++) {
      if (item == this->i[i]) {
         for (int j = i; j < ult; j++) {
            this->i[j] = this->i[j+1];
         }
      --ult;
      return true;
      }
   }
   return false;
}

void Lista::imprime (void) {
   int j = 0;
   cout << "[ ";
   while (j < ult) {
      cout << i[j] << " ";
      ++j;
   }
   cout << "]\n";
}

void Lista::getIt(int n) {
   cout << this->i[n] << "\n";
}

void Lista::realoca () {
   int *n = new int[tam + (tam / 2)];
   for (int i = 0; i < ult; i++) {
      n[i] = this->i[i];
   }
   this->i = n;
}

int Lista::getUlt () {
   return ult;
}
