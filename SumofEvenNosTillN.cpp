/*
You have been given a number 'N'. Your task is to find the sum of all even numbers from 1 to 'N' (both inclusive).
Example :
Given 'N' : 6
Sum of all even numbers till 'N' will be : 2 + 4 + 6 = 12
Input Format :
The first line of the input contains an integer 'T', denoting the number of test cases.

The first line and the only line of each test case contains an integer 'N'.
Output Format :
For each test case, print a single integer representing the sum of even numbers till 'N'.

Print a single line for each test case.
Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints :
1 <= T <= 10
1 <= N <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
6
2
Sample Output 1 :
12
2
Explanation For Sample Input 1 :
For test case 1 :
Sum of all even numbers till 6 will be : 2 + 4 + 6 = 12

For test case 2 :
Sum of all even numbers till 2 will be : 2
Sample Input 2 :
2
4
5
Sample Output 2 :
6
6
Explanation For Sample Input 2 :
For test case 1 :
Sum of all even numbers till 4 will be : 2 + 4 = 6

For test case 2 :
Sum of all even numbers till 5 will be : 2 + 4 = 6
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
        int sum=0;
        for(int i=0;i<=n;i=i+2)
            sum=sum+i;
        cout<<sum<<endl;
    }
    return 0;
}