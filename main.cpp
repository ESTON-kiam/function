#include <iostream>

using namespace std;
double circleArea(double radius,const double PI  ){
return(PI*radius*radius);
}

int main()
{
    double radius;
    const double PI = 3.1415;
    cout<<"Enter the radius of circle:"<<endl;
    cin>>radius;
    cout<<"The area of circle is "<<circleArea(radius,PI);

    return 0;
}
