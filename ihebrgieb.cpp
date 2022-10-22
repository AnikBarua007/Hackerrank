//anik barua
//hackerrank:: https://www.hackerrank.com/challenges/restaurant/problem?isFullScreen=true
//10.22.2022

#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--)
    {
        getchar();
        int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    cout<<gcd<<endl;
    return 0;
    }
}
