//destructors -> reverse order of called, delete dynammic memory.

//using Copy Constructor

#include <bits/stdc++.h>
using namespace std;

class Learn{
  private:
    int x, y;
  public:
    Learn(int x, int y){
      this->x = x;
      this->y = y;
    }

    Learn(const Learn& ob1){
      this->x = ob1.x;
      this->y = ob1.y;
    }

    print(){ // writing void is not nesseary
      cout << this->x <<"  " << this->y << endl;
    }

    __init__(){
      this->x = 0;
      this->y = 0;
    }
};
int main(int argc, char const *argv[]) {
  Learn o1(1,2);
  o1.print();
  Learn o2(o1);  // Copy Constructor
  o2.__init__();

  o1.print();
  o2.print();
  return 0;
}
