                https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP69?tab=statement
            
Remove Duplicates

You are given an array A1,A2,…,ANA1​,A2​,…,AN​ of length NN sorted in non-decreasing order. Your task is to remove all the duplicates and find the sorted increasing array of distinct elements consisting of all distinct elements present in AA.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    The first line of each test case contains an integer NN - the length of the array AA.
    The second line of each test case contains NN space-separated integers A1,A2,…,ANA1​,A2​,…,AN​.

Output Format

For each test case, output two lines:

    The first line should contain a single integer MM - the size of the array.
    The second line should contain MM space-separated integers denoting the elements of the array.

Constraints

    1≤T≤1001≤T≤100
    1≤N≤1051≤N≤105
    1≤Ai≤1091≤Ai​≤109
    The sum of NN over all test cases won't exceed 2⋅1052⋅105.

Sample 1:

    Input :                                Output :
    3                                      2
    2                                      5 10
    5 10                                   3
    4                                      1 5 10
    1 5 5 10                               3
    5                                      4 6 8
    4 4 6 6 8

Explanation:

Test case 11: Distinct elements will be 55, 1010. So the array will be [5,10][5,10].

Test case 22: Distinct elements will be 11, 55, 1010. So the array will be [1,5,10][1,5,10].

Test case 33: Distinct elements will be 44, 66, 88. So the array will be [4,6,8][4,6,8].

