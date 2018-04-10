Oh, it's time for college exams. The students are sitting in an examination hall. It consists of seats arranged in such a manner that it forms $m$ rows and $n$ columns.

There is a special question about Dynamic Programming in the exam. The students who know the answer to this question are represented by $1$, and the students who don't, are represented by $0$.

So, the students who don't know the answer, have only one option to pass the exam and that is to cheat from another student who knows the answer himself.

A student can only cheat from any of the 8 people, sitting around him which include the student at the immediate (front, behind, left, right, front-left, front-right, behind-left, behind-right).

Also, any student who cheated doesn't show the answer to anyone further, because he's not sure about it himself.

You are given the 2-D matrix representing the sitting plan of the examination hall.
The matrix has 0s and 1s representing students.

You need to print the number of students that pass the exam (i.e. the number of students who wrote the answer to the aforementioned question).

<hr>

###Input:

- First line will contain $T$, number of testcases. Then the testcases follow. 
- The first line of each test case contains $m$ and $n$ separated by a space.
- The next $m$ lines, each contains $n$ space separated integers(0s & 1s) forming the 2-D matrix.

<hr>

###Output:
Print T lines each representing the number of students who pass the exam in each test case.

<hr>

###Constraints 
- $1 \leq T \leq 10$
- $2 \leq m, n \leq 1000 (10^3)$

<hr>

###Sample Input:

1

3 3

0 0 0

0 0 0

1 0 0

###Sample Output:
4
	
###EXPLANATION:
The three students (labelled as $0$) around bottom-left corner student (labelled as $1$) can cheat from him. Thus, 4 students pass the exam(the three students who managed to cheat and the one who already knew the answer).