
Difference Pairs

Given an array AA of NN integers and an integer BB.

Find whether there exists a pair of indices (i,j)(1≤i<j≤N) such that abs(Ai−Aj)=B.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    Each test case consists of multiple lines of input.
        The first line of each test case contains two space-separated integers NN and BB.
        The next line contains NN space-separated integers representing array AA.

Output Format

For each test case, output on a new line 11 if there exists a pair of indices (i,j)(i,j) (1≤i<j≤N)(1≤i<j≤N) such that abs(Ai−Aj)=Babs(Ai​−Aj​)=B, or 00 otherwise.
Constraints

    1≤T≤1001≤T≤100
    1≤N≤1051≤N≤105
    −106≤B≤106−106≤B≤106
    −106≤Ai≤106−106≤Ai​≤106
    The sum of NN over all test cases won't exceed 2⋅1052⋅105.

Sample 1:

    input :                                             output :
    3                                                   1                                        
    6 78                                                1
    5 10 3 2 50 80                                      0
    2 30                                        
    -10 20                                      
    4 5                                     
    1 2 3 4                                     

Explanation:

Test case 11: Given AA as [5,10,3,2,50,80][5,10,3,2,50,80]. Elements with difference 7878 are A6=80A6​=80 and A4=2A4​=2.

Test case 22: Given AA as [−10,20][−10,20]. Elements with difference 3030 are A2=20A2​=20 and A1=−10A1​=−10.

Test case 33: Given AA as [1,2,3,4][1,2,3,4]. No such pairs exists where difference of elements is 55.
