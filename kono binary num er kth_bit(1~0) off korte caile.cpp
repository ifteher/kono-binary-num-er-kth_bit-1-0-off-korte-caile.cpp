#include<bits/stdc++.h>
using namespace std;

int turn_off_kth_bit(int x,int k)
{
    return(x&(~(1 << k)));//1 ke 'k'bar leftshift kore je value pawa jabe,tar not(~tiled) korle oita chara sob 1 hoye jay,pore sei value er sathe x number ta and korle i holo.
}
int main()
{
 cout<<turn_off_kth_bit(44,3)<<endl;
return 0;
}
///44 er 3th bit ke 0 korle 32+4=36 hoy.
