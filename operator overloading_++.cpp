#include <iostream>
using namespace std;

class wce {

public:
   int x ,y;
   wce(){
       x = 100;
       y = 9;
   }
   // int n post increa
   wce operator--(int n){
       x--;
       y--;
       return *this;
   }
   // *this is object and this is pointer to object


};
int main() {
   // cout<<"Hello World!";
    wce obj;
    cout<<(obj--).x;
}
