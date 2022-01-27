/*
Ninja is feeling very bored and wants to try something new. So, he decides to find the reverse of a given number. But he cannot do it on his own and needs your help.
Note:
If a number has trailing zeros, then its reverse will not include them. For e.g., the reverse of 10400 will be 401 instead of 00401.
Input Format:
The first line contains an integer 'T' which denotes the number of test cases or queries to be run.

The first line of each test case contains one integer ‘N’ denoting the given number.
Output Format:
For each case, you need to print the reverse of the given number.

The output of each test case will be printed on a separate line.
Note:
You do not need to input or print anything, it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 5
1 <= N <= 10 ^ 18

Time Limit = 1 sec
Sample Input 1:
2
10400
12345
Sample Output 1:
401
54321
Explanation of Sample Input 1:
Test case 1:
For the first test case of sample output 1, as the number is ‘10400’, after finding the reverse, it turns out to be ‘00401’ but we need to leave the trailing zeros. Therefore our solution is 401

Test case 2:   
For the second test case of sample output 1, as the number is ‘12345’, the reverse will be ‘54321’
Sample Input 2:
2
1000
7654321
Sample Output 2:
1
1234567
Explanation of Sample Input 2:
Test case 1:
For the first test case of sample output 2, as the input number is ‘1000’, we get the reverse as ‘1’.

Test case 2:   
For the second test case of sample output 2, as the input number is ‘7654321’, we get the reverse as ‘1234567’.
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
        int num,i,rev=0;
        cin>>num;
        
        while(num>0){
        rev = rev*10 + num%10;
        num = num / 10;
    }
    
    cout<<rev<<"  ";
    }
    return 0;
}