#include <iostream>

using namespace std;
class operator_overloading{
    private:
      int real;
      int imaginary;
      
    public:
      operator_overloading(){                           
          real=0;                                       //initiliazing the real and imaginary parts as 0
          imaginary=0;
      }
      operator_overloading(int r1,int i1){
          real=r1;                                     //parameterized constructor for real and imaginary parts
          imaginary=i1;
      }
      
      operator_overloading operator +(operator_overloading o1){                //creating a function with return type of class
          operator_overloading o2;                                            //using operator keyword and '+' symbol to add 2 objects
          o2.real = real + o1.real;                                          //adding real part of 1st object to 2nd object 
          o2.imaginary = imaginary + o1.imaginary;                          //adding imaginary part of 1st object to 2nd object
          return o2;                                                       //returning the 2nd object as the result 
       }
       
       void display(){
           cout<<"The Real part is = "<<real<<endl<<"The Imaginary part is = "<<imaginary;                                  //function to display the result
       }
};

int main()
{
    operator_overloading o3(2,3);                //adding 2+2(real parts) and 3+2(imaginary parts)
    operator_overloading o4(2,2);
    operator_overloading o5;                     //creating o5 object which stores the result of o3 + o4
    o5 = o3 + o4;
    o5.display();                               //displaying the result of o5
    return 0;
}