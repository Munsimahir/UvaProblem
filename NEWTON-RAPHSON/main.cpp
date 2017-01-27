#include <iostream>

using namespace std;
// p(x) x*x+x-2
double f(double x){
return ((x*x)+x-2);
}
double fp(double x){
return ((2*x)+1);
}
int main()
{
    double x0,x1;
  cout<<"Initial Guess:";
  cin>>x0;
  int i=1;
    while(1){
    x1=x0-(f(x0)/fp(x0));
    if((x1-x0)/(-x1)<=0.0001 ){
        cout<<"ROOT:"<<x1;

        break;
    }
    cout<<i<<"iteration:"<<x1<<endl<<endl;
    x0=x1;
    i++;
  }

    return 0;
}





































































































































