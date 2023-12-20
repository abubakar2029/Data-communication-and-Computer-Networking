#include<iostream>
using namespace std;

int final(int *right, int &left){
    ++ *right;
    cout<<"Right"<<*right<<endl;
    out=*right + ++left -left++;
}
int main()
{
    int a=3,b=5;
    for(int i = -2; i < -1; i++)
    {
     cout << final(&b,a);  
    }
    cout << a*a<<b*a;
    
    return 0;
}