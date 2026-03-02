#include <iostream>
using namespace std;

int main()
{
    float a = 54.4f;
    long double b = 54.4l;
    cout<<"The value of 54.4 is: "<<sizeof(54.4)<<endl;
    cout<<"The value of 54.4f is: "<<sizeof(54.4f)<<endl;
    cout<<"The value of 54.4F is: "<<sizeof(54.4F)<<endl;
    cout<<"The value of 54.4l is: "<<sizeof(54.4l)<<endl;
    cout<<"The value of 54.4L is: "<<sizeof(54.4L)<<endl;
    return 0;
}