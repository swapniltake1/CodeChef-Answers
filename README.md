# CodeChef-Answers
Codechef Problem Java Answers Files uploaded Here 

File DISCOUNT.java
Problem

Alice buys a toy with a selling price of 100100 rupees. There is a discount of xx percent on the toy. Find the amount Alice needs to pay for it.

Input Format

The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains a single integer, xx — the discount on the toy.
Output Format

For each test case, output on a new line the price that Alice needs to pay.

Constraints

1 \leq T \leq 1001≤T≤100
0 \leq x \lt 1000≤x<100

Sample 1:
Input
4
5
9
11
21

Output
95
91
89
79


Explanation:
Test case 11: The discount is 55 percent, i.e. 55 rupees. So, Alice will have to pay 100-5=95100−5=95 rupees.

![image](https://user-images.githubusercontent.com/61576958/183946356-cde7e613-437d-4ec1-a612-14eb69d5a1c2.png)

2. POPULATION.cpp

Problem
There were initially XX million people in a town, out of which YY million people left the town and ZZ million people immigrated to this town.

Determine the final population of town in millions.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case consists of three integers XX, YY and ZZ.
Output Format
For each test case, output the final population of the town in millions.

Constraints
1 \leq T \leq 1001≤T≤100
1 \leq X, Y, Z \leq 101≤X,Y,Z≤10
Y \leq XY≤X
Sample 1:
Input
Output
4
3 1 2
2 2 2
4 1 8
10 1 10
4
2
11
19
Explanation:
Test case 11: The initial population of the town was 33 million, out of which 11 million people left and 22 million people entered the town. So, final population = 3 - 1 + 2 = 4=3−1+2=4 million.

Test case 22: The initial population of the town was 22 million, out of which 22 million left and 22 million immigrated. The final population is thus 2+2-2 = 22+2−2=2 million.


3. Problem TVDISC
Chef is looking to buy a TV and has shortlisted two models. The first one costs AA rupees, while the second one costs BB rupees.

Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of CC rupees on the first TV, and a flat discount of DD rupees on the second one.

Help Chef determine which of the two TVs would be cheaper to buy during the sale.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four space-separated integers AA, BB, CC and DD — the marked price (in rupees) of the first TV, the marked price (in rupees) of the second TV, the flat discount (in rupees) of the first TV, and the flat discount (in rupees) of the second TV.
Output Format
For each test case, print a single line containing the string First if the first TV is cheaper to buy with discount, or Second if the second TV is cheaper to buy with discount. If both of them cost the same after discount, print Any.

You may print each character of the string in uppercase or lowercase (for example, the strings first, First, fIRSt, and FIRST will all be treated as identical).

