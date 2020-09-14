#include <bits/stdc++.h>
using namespace std;
class Learn{
  private:
    int x, y;
  public:
    Learn(): x(0), y(0){   //initilizer list
      cout << "Constructor called" << endl;
    }

    Learn(int x, int y){
      this->x = x;  // use -> operator since this refers to the pointer variable
      this->y = y;
    }

    ~Learn(){
      cout << "Destructor called" << endl;
    }
};
int main() {
  Learn o1 = Learn();
  Learn o2 = Learn(1,2);
  Learn o3(1,2);
  return 0;
}
