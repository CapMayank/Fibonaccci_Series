#include <iostream>
using namespace std;
int main()
{
    int n, sum=0, t1=0, t2=1;
    cout<<" Enter the number for fibonacci series::";
    cin>>n;
    cout<<t1<<endl;
    cout<<t2<<endl;
    n=n-2;
    for(int index=0; index<=n; ++index)
    {
        sum=t1+t2;
        cout<<sum<<endl;
        t1=t2;
        t2=sum;

    }
    return 0;
}

