#include <string>
#include <iostream>


template <class firstvalueType, class another_value_Type>
class Mynewclass {
    public :
    Mynewclass(firstvalueType a,another_value_Type b) : x{ a} , y {b}
    {
        
    }
    
    Mynewclass(firstvalueType a, firstvalueType b ,another_value_Type c) : x{ a} , y {c} , z {b}
    {
        
    }
    
    void print(){
        std::cout << " first  value is : " << x <<"--- second value is : " << y << std::endl;
    }
    void print(bool flag){
        std::cout << " first  value is : " << x <<"--- second value is : " << y <<" --- Third value is : " << z<< std::endl;
    }
    
private:
    firstvalueType x;
    another_value_Type y;
    firstvalueType z;
    
};

int main(int argc, const char * argv[]) {
    Mynewclass<int,double> obj{12,22};
    obj.print();
    Mynewclass<int,char> obj2{12,'b'};
    obj2.print();
    Mynewclass<std::string,float> obj3{"hey whats up",122.0f};
    obj3.print();
    Mynewclass<int,char> obj4{12,500,'G'};
    obj4.print(1);
    return 0;
}
