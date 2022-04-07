#include <iostream>
#include <cstring>
using namespace std;
template<typename T>
class ab{
T x;
T y;
public:
void setX(T x){
    this->x=x;
}
T getX(){
    return x;
}
void setY(T y){
    this->y=y;
}
T getY(){
    return y;
}
};
int main()
{
    system("cls");
    ab<int> a;
    a.setX(10);
    a.setY(20);
    cout<<a.getX()<<"  "<<a.getY()<<endl;
    ab<char> b;
    b.setX('a');
    b.setY('b');
    cout<<b.getX()<<"  "<<b.getY()<<endl;
    
}