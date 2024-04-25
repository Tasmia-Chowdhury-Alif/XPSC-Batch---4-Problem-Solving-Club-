// D - Greedy LIS Algorithm
// Alice recently learnt about the Longest Increasing Subsequence (LIS) problem. She was convinced she found a correct greedy algorithm to solve the problem.

// Let �A be an array of size �N for which we want to find the LIS. Then, the code of Alice's algorithm is as follows :

// int alicelis(int A[], int N)
// {
//     int count = 1;
//     int last = A[1];
//     for (int i = 2; i <= N; i++)
//     {
//         if (A[i] > last)
//         {
//             count++;
//             last = A[i];
//         }
//     }
//     return count;
// }
// C++ To summarise, Alice's LIS algorithm greedily keeps on finding the first valid element she can include in her increasing sequence, includes it and then continues the process.
// Bob noticed that Alice's algorithm is often wrong,
//  for example on a sequence like � = [1,4,2,3,5] A = [ 1, 4, 2, 3, 5 ],
//  the length of the LIS is actually 4 4([1,4,2,3,5][1, 4, 2, 3, 5]) 
//  while Alice's algorithm gives you  3 3([1,4,2,3,5][1, 4, 2, 3, 5])
//      .Note that underlined elements represent the respective sequences.

//  Given integers 
// � N and 
// � X,
//  Bob wants you to find a permutation of length 
// � N, such that :

//     The difference between the length of the actual LIS and the value returned by the alicelis function is exactly 
// � X.If multiple such permutations exist,
//  you may print any.If no such permutation exists, print 
// − 1
// −1.

//     Note that a permutation of length 
// � N is a sequence of length 
// � N,
//  which contains each integer from 1 1 to 
// � N exactly once.

//  Input Format The first line of input will contain a single integer 
// � T,
//  denoting the number of test cases.Each test case consists of 2 2 space - separated integers, 
// � N and 
// � X, the length of the permutation and the required difference between the actual LIS and the alicelis function.Output Format For each test case, output a new line, consisting of 
// � N space - separated integers, representing a permutation of integers from 1 1 to 
// � N.

//                                  If multiple such permutations exist,
//  you may print any.If no such permutation exists, print 
// − 1
// −1.

//                                                       Constraints 1
// ≤
// �
// ≤ 1 0 4 1≤T≤10 4

//                                                       1
// ≤
// �
// ≤ 2
// ⋅ 1 0 5 1≤N≤2⋅10 5

//                                                       0
// ≤
// �
// ≤
// � 0≤X≤N The sum of 
// � N across all test cases won't exceed  2
// ⋅ 1 0 5 2⋅10 5 .Sample 1 Inputcopy Outputcopy 5 3 2 5 0 5 1 1 0 1 1 -
//                                                       1 1 2 3 4 5 1 4 2 3 5 1 - 1 Test case 1 1:
// It can be shown that there doesn't exist any such permutation.

//     Test case 2 2:
// Both Alice's and the actual LIS consists of all  5 5 elements, hence the difference is 0 0.

//     Test case 3 3:
// The case has been explained in the problem statement.