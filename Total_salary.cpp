/*
Ninja just got an offer letter from a reputable company. The company sent him an offer letter along with the salary bifurcation.
In that bifurcation,Total Salary was not mentioned but instead a ‘basicSalary’ and an upper case character representing grade was mentioned, depending on which the Total Salary is calculated.
Help Ninja in calculating his total salary, where total salary is defined as:
‘totalSalary’ = ‘basic’ + ‘hra’ + ‘da’ + ‘allowance’ - ‘pf’
The above terms are as follows:
‘hra’ = 20% of ‘basic’
‘da’ = 50% of ‘basic’
‘allowance’ = 1700 if grade = ‘A’
‘allowance’ = 1500 if grade = ‘B’
‘allowance’ = 1300 if grade = ‘C' or any other character
‘pf’ = 11% of ‘basic’.
Note :
Round off the ‘totalSalary’ and then print the integral part only.

'x.5' type values will always be round up, for example, 1.5, 2.5 will be round off to 2, 3 respectively.
Input Format :
The first line of input contains an integer ‘T’ denoting the number of test cases. Then each test case follows:

The first and the only line of each test contains an integer denoting ‘basicSalary’ and an Uppercase character representing Grade (separated by space).
Output Format :
The output will contain a single integer representing Total Salary.

The output of each test case will be printed on a separate line.
Note:
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints :
0 <= 'basicSalary' <= 7 * (10 ^ 5)

Time Limit: 1 sec.
Sample Input 1 :
2
10000 A
4567 B
Sample Output 1 :
17600
8762
Explanation For Sample Input 1:
Test Case 1:
We have been given the basic salary as Rs. 10000. We need to calculate the hra, da and pf. 
Now when we calculate each of the, it turns out to be:
hra =  20% of Rs. 10000 = Rs. 2000
da = 50% od Rs. 10000 = Rs. 5000
pf = 11% of Rs. 10000 = Rs. 1100

Since, the grade is 'A', we take an allowance of Rs. 1700.
On substituting these values to the formula of totalSalary, we get Rs. 17600 and now rounding it off will result in Rs. 17600 and hence the Answer.

Test Case 2:
We have been given the basic salary as Rs. 4567. We need to calculate the hra, da and pf. 
Now when we calculate each of the, it turns out to be:
hra =  20% of Rs. 4567 = Rs. 913.4
da = 50% od Rs. 4567 = Rs. 2283.5
pf = 11% of Rs. 4567 = Rs. 502.37

Since, the grade is 'B', we take an allowance of Rs. 1500.
On substituting these values to the formula of totalSalary, we get Rs. 8761.53 and now rounding it off will result in Rs. 8762 and hence the Answer.
Sample Input 2 :
2
1500 B
5000 C
Sample Output 2 :
3885
9250
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
        int ts,bs,allowance;
        int hra,da,pf;
        string grade;
        cin>>bs;
        cin>>grade;
        
      
        
        if(grade=="A")
            allowance=1700;
        else if(grade=="B")
            allowance=1500;
        else if(grade=="C")
            allowance=1300;
        else
            allowance=1300;
            
        hra=(20/100)*bs;
        da=(50/100)*bs;
        pf=(11/100)*bs;
            
        ts=bs+hra+da+allowance-pf;
        cout<<ts<<endl;
    }
    return 0;
}