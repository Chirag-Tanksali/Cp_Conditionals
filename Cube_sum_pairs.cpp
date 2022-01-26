/*
You are given a positive integer N, and you have to find the number of ways to represent N as a sum of cubes of two integers(let’s say A and B), such that:
N = A^3 + B^3.
Note:
1. A should be greater than or equal to one (A>=1).
2. B should be greater than or equal to zero (B>=0).
3. (A, B) and (B, A) should be considered different solutions, if A is not equal to B, i.e (A, B) and (B, A) will not be distinct if A=B.
Input Format:
The first line of the input contains an integer T denoting the number of test cases.

The first and only line of each test case consists of a single positive integer N.
Output Format:
For each test case, print an integer that denotes the count of the number of ways of representing N as a sum of cubes of 2 integers (A and B) in a separate line.
Note:
You don't have to print anything, it has already been taken care of. Just Implement the given function.
Constraints:
1 <= T <= 10^3
1 <= N <= 10^8
Time Limit: 1 sec.
Sample Input 1:
1
9
Sample Output 1:
2
Explanation For Sample Input 1:
There are 2 ways to represent N in the (A^3 + B^3) form ie. {(1, 2), (2, 1)}.
Eg. 1^3 + 2^3 = 9 and 2^3 + 1^3 = 9. 
Sample Input 2:
1
27
Sample Output 2:
1
Explanation For Sample Input 2:
There is only 1 way to represent N in the (A^3 + B^3) form ie. {(3, 0)}.
Eg. 3^3 + 0^3 = 27.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int i,j,x,y,count=0;
        
        for(i=1;i<=n;i++){
            for(j=0;j<=n;j++){
                if((i*i*i + j*j*j) == n)
                    count++;
            }
        }
        
        cout<<count<<endl;
        
    }
    return 0;
}