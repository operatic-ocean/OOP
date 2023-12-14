#include<iostream>
using namespace std;

//operator overloading 

class Complex{

    float x;
    float y;

    Complex(){
        x = 0;
        y = 0;
    }
    complex operator +(complex);
    complex operator *(complex);

    friend istream &operator >> (istream &input , complex &t){
        cout<<"Enter real number : ";
        input>>t.x;
        cout<<"Enter imaginary number :";
        input>>t.y;
    }

    friend ostream &operator << (ostream &output , complex &t){
        cout<<t.x<<"+"<<t.y<<"i\n"
    }


};


Complex complex :: operator + (complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return(temp);
}

Complex complex :: operator * (complex c){
    complex temp2;
    temp2.x = (x*c.x) - (y*c.y);
    temp2.y = (y*c.y) + (x*c.y);
    return(temp2);
}

int main(){

    Complex c1 , c2 , c2 , c3 , c4;
    cout<<"Enter value of C1 :";
    cin>>c1;
    cout<<"Enter value of C2 :";
    cin>>c2;
    c3 = c1+c2;
    c4 = c1*c2;
    cout<<"The first number is :"<<c1;
    cout<<"The second numer is :"<<c2;
    cout<<"Addition is :"<<c3;
    cout<<"Multiplication is :"<<c4;

    return 0;
}