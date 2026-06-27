#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float r1,r2,D;
    cout<<"input the values of a,b,c"<<endl;
    cin>>a>>b>>c;
    D=b*b - 4*a*c;
    if(D>0){
        cout<<"The roots are positive and real"<<endl;
        r1=(-b+sqrt(D))/2*a;
        r2=(-b-sqrt(D))/2*a;
        cout<<r1<<endl;
        cout<<r2<<endl;
    }
    else if(D==0){
        cout<<"roots are eqaual and real"<<endl;
        r1=-b/2*a;
        cout<<r1;
    }
    else{
        cout << "The roots are imaginary." << endl;
        double realPart = -b/(2.0 * a);
        double imagPart = sqrt(-D)/(2.0 * a);
        cout << "Root 1: " << realPart << " + " << imagPart<<"i"<< endl;
        cout << "Root 2: " << realPart << " - " << imagPart<<"i"<< endl;
    }
    return 0;
}