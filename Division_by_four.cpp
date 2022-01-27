/*
You are given an array/list, 'arr’ of size ‘N’ update each element of the array by the value obtained by dividing the element by 4 (take only integer part). If the value obtained by dividing element by 4 comes out to be 0, then update the element with value -1.
Note:
Do not return or print the array and make changes in the same array.
Example:
Let the array be [1,32,4], after dividing each number by 4 our array will become [0, 8, 1].
Now replace the 0 by -1 so that [0, 8, 1] -> [-1, 8, 1].
Hence the modified array will be [-1, 8, 1].
Input Format :
The first line contains an Integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow

The first line of each test case  contains an Integer ‘N’  denoting the size of the array

The second line of each test case contains ‘N’ space-separated integers denoting the elements of the array ‘arr’.
Output Format :
For each test case print, ‘N’ space-separated integers denoting the changed elements of the array ‘arr’.

Output for each test case will be printed in a separate line.
Note:
You are not required to print anything, it has already been taken care of. Just implement the function.
Constraints :
1 <= T <= 100
1 <= N <= 5*10^3
0 <= arr[i] <= 100

Time Limit: 1 sec
Sample Input 1 :
2
2 
3 8
3
4 8 12
Sample Output 1 :
-1 2
1 2 3
Explanation For Sample Output 1:
Test case 1:   
The  given array is  [3,8]

After dividing each element by 4, our list becomes [0,2]. 
So as the first element is 0 so replace it with -1.

So, the output is [-1,2].
Sample Input 2 :
2
4 
0 0 0 0
1
484
Sample Output 2 :
-1 -1 -1 -1
121
Explanation For Sample Output 2:
Test case 1:   
The  given array is  [0,0,0,0]

After dividing each element by 4, our list becomes [0,0,0,0]. 
So as all the elements are 0 so replace them with -1.

So, the output is [-1,-1,-1,-1].
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
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(i=0;i<n;i++){
            if(a[i]%4 == 0){
                cout<<a[i]/4<<" ";
            }
            else if (a[i]%4 != 0 || a[i] == 0){
                cout<<"-1"<< " ";
            }
        }
    }
    return 0;
}