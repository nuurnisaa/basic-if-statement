#include <iostream>
#include <cmath>

using namespace std;


int main()

{
bool isMale = false;
bool isTall= false;

if(isMale && isTall)
{
    cout<<"You are male";
}
else if(isMale && !isTall)
{
    cout<<"You are confuse";
}
else if(!isMale && isTall)
{
    cout<<"You are confuse seriously";
}
else
{
cout<<"You are female";
}


    return 0;
}
