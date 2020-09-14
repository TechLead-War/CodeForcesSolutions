//make shallow copy
#include <bits/stdc++.h>
using namespace std;
class Learn{
  private:
    int* arr, size;
  public:
    Learn(int size){
      this->size = size;
      arr = new int[size];
      for(int i = 0; i < size; i++){
        arr[i] = i;
      }
    }
    Learn(const Learn& ob){

    }
    print(){
      for(int i = 0; i < this->size; i++){
        cout << arr[i] << " ";
      }
      cout << "\n";
    }
    change(int index, int item){
      arr[index] = item;
    }
};
int main(int argc, char const *argv[]) {
  Learn ob1(5);
  Learn ob2(ob1);
  ob1.change(1,8);
  ob1.print();
  ob2.print();
  return 0;
}
