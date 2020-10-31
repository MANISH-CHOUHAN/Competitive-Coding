/*
                         AND-OR Problem

Given an integer x, find two non-negative integers a and b such that (a∧b)+(a∨b)=x, where ∧ is the bitwise AND operation and ∨ is the bitwise OR operation.Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer x.
Output
If there is no valid pair (a,b), print a single line containing the integer −1. Otherwise, print a single line containing two space-separated integers a and b.

If there are multiple solutions, you may print any one of them.

Constraints
1≤T≤105
1≤x≤1018
Subtasks
Subtask #1 (30 points):

1≤T≤200
1≤x≤200
Subtask #2 (70 points): original constraints

Example Input
2
1
8
Example Output
0 1
5 3
*/




#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
int t;
cin>>t;
while(t--)
{
    long long x;
    cin>>x;
    cout<<"0 "<<x<<endl;
}
return 0; 
} 