#include <iostream>

using namespace std;

class testing
{
private:
    int x;
    int y;
    int z;
public:
    int &aX = x;
    int &aY = y;
    static int info;
    template<typename T>
    void swap(T& x,T& y);

    int getThreeVar(string str)
    {
        if(str == "x")
            return x;
        if(str == "y")
            return y;
        if(str == "z")
            return z;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    void setZ(int z)
    {
        this->z = z;
    }
    int showX()
    {
        return x;
    }
    int showY()
    {
        return y;
    }
    int showZ()
    {
        return z;
    }
};
int testing::info = 99;

template<typename T>
void testing::swap(T& x,T& y)
{
     T temp;
     temp=x;
     x=y;
     y=temp;
}

int main()
{
    testing a;
    a.setX(5);
    a.setY(7);
    a.setZ(9);
    cout << "initial : X=5,Y=7,Z=9"<<endl;
    cout << "static var :" <<testing::info <<endl;
    cout << "Before swap :" <<a.showX() << " " <<a.showY() << " " <<a.showZ()<<endl;
    cout << "what var you want: (x , y, z):" ;

    string input;
    cin >> input;
    cout << a.getThreeVar(input) <<endl;

    a.swap(a.aX,a.aY);
    cout << "After swap :" <<a.showX() << " " <<a.showY() << " " <<a.showZ()<<endl;
    return 0;
}
