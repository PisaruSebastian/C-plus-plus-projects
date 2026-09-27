#include <iostream>



int main()
{
 double a;
 double b,d;
 char c;

 std::cout<<"Introdu primele numere" << '\n' << "a:"; //output of calculator
 std::cin >> a ;
 std::cout<<"b: ";
 std::cin>>b;
 std::cout<<"Introdu operatorul: " ; // output for operator
 std::cin >> c;

 if (c=='+')
 {
    d=a+b;
    std::cout <<"Rezultatul: "<<d << '\n';
 }
 else if (c=='-')
 {
    d=a-b;
    std::cout <<"Rezultatul: "<<d << '\n';
 }
 else if (c=='*')
 {
    d=a*b;
    std::cout <<"Rezultatul: "<<d << '\n';
 }
 else if (c=='/') 
 {
    if(b == 0) // rule for divide 
    {
        std::cout << "Nu se poate calcula"<< '\n';
    }
    else {
         d=a/b;
        std::cout <<"Rezultatul: "<<d << '\n';
    }

   
 }
 

 
 

}