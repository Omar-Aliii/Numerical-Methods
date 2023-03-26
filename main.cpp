#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void Bisection();
void Bisection_Power1();
void Bisection_Power2();
void Bisection_Power3();


int main()
{
    int choice;
    cout<<"Enter the number of the equation"<<endl
    <<"1: Bisection"<<endl
    <<"2: False Position"<<endl
    <<"3: Newton"<<endl;

    cin>>choice;
    if(choice == 1){
    Bisection();
    }
    else if(choice == 2){

    }
    else if(choice == 3){

    }
    else return 0;
}

void Bisection(){
    cout<<"Enter the number of the equation"<<endl
    <<"1: bX + c = 0"<<endl
    <<"2: aX^2 + bX + c = 0"<<endl
    <<"3: aX^3 + bX^2 + cX + d = 0"<<endl;
    int choice_bisection;
    cin>>choice_bisection;
    if(choice_bisection == 1){
    Bisection_Power1();
    }
    else if(choice_bisection == 2){
    Bisection_Power2();
    }
    else if(choice_bisection == 3){
    Bisection_Power3();
    }
}

void Bisection_Power1(){
std::cout << std::setprecision(4) << std::fixed;
    double a,b,x,y,error;
    bool check = true;
    cout<<"aX + b = 0"<<endl;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter the beginning of the interval [X,Y]"<<endl;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;
    cout<<"Error<?"<<endl;
    cout<<"Enter Error: ";
    cin>>error;

    double F_first,F_second;
    F_first = (a*x) + b;
    F_second = (a*y) + b;

    if(F_first*F_second<0){
        check = true;
    }
    else check = false;

    if(check==true){
        cout<<"Iter\tx1\tx3\tx2\tf(x1)\tf(x3)\tf(x2)\tError"<<endl;
        double x1,x3,x2,fx1,fx3,fx2,error2;
        int iteration=0;
        x1=x;
        x2=y;
        x3=(x1+x2)/2;
        fx1=(a*x1) + b;
        fx2=(a*x2) + b;
        fx3=(a*x3) + b;
        error2=(x2-x1)/2.0;
        iteration++;
        cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        for(;;){
        iteration++;
        if(fx1*fx3<0){
            x2=x3;
            x3=(x1+x2)/2;
        fx1=(a*x1) + b;
        fx2=(a*x2) + b;
        fx3=(a*x3) + b;
            error2=(x2-x1)/2;
            cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        }
        else if(fx1*fx3>=0){
            x1=x3;
            x3=(x1+x2)/2;
        fx1=(a*x1) + b;
        fx2=(a*x2) + b;
        fx3=(a*x3) + b;
            error2=(x2-x1)/2.0;
            cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        }
        if(error2<error){
        break;}
        }

    }
}

void Bisection_Power2(){
std::cout << std::setprecision(4) << std::fixed;
    double a,b,c,x,y,error;
    bool check = true;
    cout<<"aX^2 + bX + c = 0"<<endl;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter the beginning of the interval [X,Y]"<<endl;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;
    cout<<"Error<?"<<endl;
    cout<<"Enter Error: ";
    cin>>error;

    double F_first,F_second;
    F_first = (a*pow(x,2)) + (b*x) + c;
    F_second = (a*pow(y,2)) + (b*y) + c;

    if(F_first*F_second<0){
        check = true;
    }
    else check = false;

    if(check==true){
        cout<<"Iter\tx1\tx3\tx2\tf(x1)\tf(x3)\tf(x2)\tError"<<endl;
        double x1,x3,x2,fx1,fx3,fx2,error2;
        int iteration=0;
        x1=x;
        x2=y;
        x3=(x1+x2)/2;
        fx1=(a*pow(x1,2)) + (b*x1) + c;
        fx2=(a*pow(x2,2)) + (b*x2) + c;
        fx3=(a*pow(x3,2)) + (b*x3) + c;
        error2=(x2-x1)/2.0;
        iteration++;
        cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        for(;;){
        iteration++;
        if(fx1*fx3<0){
            x2=x3;
            x3=(x1+x2)/2;
        fx1=(a*pow(x1,2)) + (b*x1) + c;
        fx2=(a*pow(x2,2)) + (b*x2) + c;
        fx3=(a*pow(x3,2)) + (b*x3) + c;
            error2=(x2-x1)/2;
            cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        }
        else if(fx1*fx3>=0){
            x1=x3;
            x3=(x1+x2)/2;
        fx1=(a*pow(x1,2)) + (b*x1) + c;
        fx2=(a*pow(x2,2)) + (b*x2) + c;
        fx3=(a*pow(x3,2)) + (b*x3) + c;
            error2=(x2-x1)/2.0;
            cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        }
        if(error2<error){
        break;}
        }

    }
}

void Bisection_Power3(){
    std::cout << std::setprecision(4) << std::fixed;
    double a,b,c,d,x,y,error;
    bool check = true;
    cout<<"aX^3 + bX^2 + cX + d = 0"<<endl;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter d: ";
    cin>>d;
    cout<<"Enter the beginning of the interval [X,Y]"<<endl;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;
    cout<<"Error<?"<<endl;
    cout<<"Enter Error: ";
    cin>>error;

    double F_first,F_second;
    F_first = (a*pow(x,3)) + (b*pow(x,2)) + (c*x) + d;
    F_second = (a*pow(y,3)) + (b*pow(y,2)) + (c*y) + d;

    if(F_first*F_second<0){
        check = true;
    }
    else check = false;

    if(check==true){
        cout<<"Iter\tx1\tx3\tx2\tf(x1)\tf(x3)\tf(x2)\tError"<<endl;
        double x1,x3,x2,fx1,fx3,fx2,error2;
        int iteration=0;
        x1=x;
        x2=y;
        x3=(x1+x2)/2;
        fx1=(a*pow(x1,3)) + (b*pow(x1,2)) + (c*x1) + d;
        fx2=(a*pow(x2,3)) + (b*pow(x2,2)) + (c*x2) + d;
        fx3=(a*pow(x3,3)) + (b*pow(x3,2)) + (c*x3) + d;
        error2=(x2-x1)/2.0;
        iteration++;
        cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        for(;;){
        iteration++;
        if(fx1*fx3<0){
            x2=x3;
            x3=(x1+x2)/2;
            fx1=(a*pow(x1,3)) + (b*pow(x1,2)) + (c*x1) + d;
            fx2=(a*pow(x2,3)) + (b*pow(x2,2)) + (c*x2) + d;
            fx3=(a*pow(x3,3)) + (b*pow(x3,2)) + (c*x3) + d;
            error2=(x2-x1)/2;
            cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        }
        else if(fx1*fx3>=0){
            x1=x3;
            x3=(x1+x2)/2;
            fx1=(a*pow(x1,3)) + (b*pow(x1,2)) + (c*x1) + d;
            fx2=(a*pow(x2,3)) + (b*pow(x2,2)) + (c*x2) + d;
            fx3=(a*pow(x3,3)) + (b*pow(x3,2)) + (c*x3) + d;
            error2=(x2-x1)/2.0;
            cout<<iteration<<"\t"<<x1<<"\t"<<x3<<"\t"<<x2<<"\t"<<fx1<<"\t"<<fx3<<"\t"<<fx2<<"\t"<<error2<<endl;
        }
        if(error2<error){
        break;}
        }

    }
}
