#include <iostream>

using namespace std;
int x;
int factFinder(int x){
if(x==1){return 1;}
else{return x*factFinder(x-1);}
}

int main()
{

    cout << "please enter a positive integer: " << endl;
    cin>>x;
    cout << x<<"!" <<" ="<<factFinder(x);
    return 0;
}
