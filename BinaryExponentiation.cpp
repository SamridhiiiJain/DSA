#include<iostream>
using namespace std;

double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(x==0) return 0.0;
        if(x==1) return 1.0;
        if(x==-1 && n%2==0) return 1.0;
        if(x==-1 && n%2!=0) return -1.0;
        long Bf=n;
        if(n<0){
            x=1/x;
            Bf=-Bf;
        }
        double ans=1;
        while(Bf>0)
        {
            if(Bf%2==1)
            {
                ans*=x;
            }
            x*=x;
            Bf/=2;
        }
        return ans;
    }
int main()
{
    double y=20;
    int n=20;
    myPow(y,n);
    return 0;
}