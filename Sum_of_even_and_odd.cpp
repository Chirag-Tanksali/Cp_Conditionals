/*
Ninja got a test problem in which he was given an integer and he had to find the sum of even digits and odd digits separately.
Ninja is very weak in studies and didn’t know much about odd and even concepts. But he said if he got the solution he can easily understand the concepts of even and odd very clearly on his own.
Ninja asks for your help to find the solution. Can you help Ninja out?
Note:
Digits mean numbers, not the places. That is if the given integer is "13245",  even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input Format :
The first line of input contains an integer ‘T’ denoting the number of test cases. Then each test case follows:

The first and only line of each test case contains an integer ‘N’ denoting the input integer.
Output Format :
The only line of output contains two single space-separated integers denoting the sum of even digits and sum of odd digits respectively.

Output for each test cases will be printed on a separate line
Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints
 1 <= T <= 5
 0 <= N <= 10 ^ 18


Time Limit: 1 sec.
Sample Input 1:
2
1234
552245
Sample Output 1:
6 4
8 15
Explanation For Sample Input 1:
Test Case 1:
For the given input, the even digits are 2 and 4 and if we take the sum of these digits it will come out to be 6(2 + 4) and similarly, if we look at the odd digits, they are 1 and 3 which makes a sum of 4(1 + 3). Hence the answer would be, 6(evenSum) <single space> 4(oddSum).

Test Case 2:
For the given input, the even digits are 2, 2 and 4 and if we take the sum of these digits it will come out to be 8(2 + 2 + 4) and similarly, if we look at the odd digits, they are, 5, 5 and 5 which makes a sum of 15(5 + 5 + 5). Hence the answer would be, 8(evenSum) <single space> 15(oddSum).
Sample Input 2:
2
5451
1452
Sample Output 2:
4 11
6 6
*/

#include<iostream>
#include<string>
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
        int sum_odd=0,sum_even=0;
        while(n!=0){
            int i=n%10;
            if(i%2==1){
                sum_odd=sum_odd+i;  //sum of odd
                
            }
            else if(i%2==0){
                sum_even=sum_even+i;  //sum of even
                
            }
            
            n=n/10;
            
        }
        cout<<sum_odd<<" ";
        cout<<sum_even<<" ";
    }
    return 0;
}