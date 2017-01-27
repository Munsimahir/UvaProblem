#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>c;
    while(c)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
        c--;
    }
    return 0;
}
