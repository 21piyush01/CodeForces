#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <iomanip> 
using namespace std;

int main()
{
 string A ;
 cin >> A ;
 int i, n = A.size() ;
 if(A[0]>=97 && A[0]<=122)
 { A[0]-=32 ; }
 for(i=1;i<n;i++)
 {
    if(A[i]>=65 && A[i]<=90)
    { A[i]+=32 ; }
 }	
 cout << A ;
 return 0 ; 
} 