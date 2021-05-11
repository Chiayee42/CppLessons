#include <iostream>
using namespace std;
class Building{
    public:
        friend void swap(Building &a);
        Building(){};
        Building(int l,int s){
            livingroom = l;
            sittingroom = s;
        }
        void show(){
            cout << "livingroom: " << this->livingroom << endl;
            cout << "sittingroom: " << this->sittingroom << endl;
        }       
        Building operator+(Building &b){
            Building sum;
            sum.livingroom = this->livingroom + b.livingroom;
            sum.sittingroom = this->sittingroom + b.sittingroom;
            return sum;
        }
    private:
        int livingroom;
        int sittingroom;
};
void swap(Building &a){
    int temp;
    temp = a.livingroom;
    a.livingroom = a.sittingroom;
    a.sittingroom = temp;
}

int main(){
    Building a(20,30);
    Building b(5,8);
    a.show();
    swap(a);
    a.show();
    Building c = a + b;
    c.show();
}
