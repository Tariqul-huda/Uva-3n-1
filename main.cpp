#include <iostream>
#include<cstdio>
using namespace std;
int countNumber(int i,int j);
int main()
{
    int i,j;
    freopen("number.txt","r",stdin);
    while(scanf("%d %d",&i,&j)==2)
    {
        cout<<i<<" "<<j<<" "<<countNumber(i,j)<<endl;
    }
    return 0;
}

int countNumber(int small,int large)
{
    if(small>large)
    {
        int swapp=small;
        small=large;
        large=swapp;

    }
    int maximum=0;
    int t=0;
    for( int temp=large; temp>=small; temp--)
    {
        int c=1;
        t=temp;
        while(t!=1)
        {
            if(t%2!=0)
            {
                t=3*t+1;
            }
            else
                t=t/2;
            c++;
        }
        if(c>maximum)
            maximum=c;
    }

    return maximum;

}
