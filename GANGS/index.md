The Director of your college needs to find out the total number of friend circles (gangs) in your college to enforce a new discipline strategy. He also needs to know the number of students in the biggest gang. You being the best programmer in your college are chosen for this task.

A survey was done in your college and any two people found talking a lot, giving hi-fives, sharing lunch, were added to a list. You are provided with the results of this survey.

The survey has a list of pairs of roll numbers. Each pair suggests a mutual friendship. The friendship is also transitive, i.e. if A is friends with B and B is friends with C means A, B & C are all in the same gang, irrespective of whether A and C are friends or not. No member of one gang is friends with any member of another gang.

Your task is to find the number of gangs in your college($N$) and the number of students in the largest gang($Z$).

<hr>

###Input:

- First line will contain $T$, number of testcases. Then the testcases follow. 
- The first line of each test case will contain $P$, number of pairs in the list to follow.
- Following $P$ lines will each contain two names(only first names) separated by a space, representing a friendship between them.

<hr>

###Output:
For each testcase, output in a single line two integers (separated by a space), the total number of gangs and the number of students in the largest gang.

<hr>

###Constraints 
- $1 \leq T \leq 10$
- $1 \leq P \leq 100000 (10^5)$

<hr>

###Sample Input:

2

6

Danny Jon

Cersi Gregor

Varys Baelish

Sansa Arya

Jon Sansa

Cersi Jaime

2

Ross Rachel

Chandler Joey

###Sample Output:

3 4

2 2

<hr>

###EXPLANATION:
- CASE 1: There are three groups forming, {Danny, Jon, Sansa, Arya,}, {Varys, Baelish}, {Cersi, Jaime, Gregor}.

- CASE 2: There are two groups forming, {Ross, Rachel}, {Chandler, Joey}.