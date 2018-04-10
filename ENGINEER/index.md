The day Ankush got 10 CGPA in 10th standard, he decided, to become an Engineer. Little did he know, what was ahead of him. At the start of his engineering journey, he has an initial motivation of $Z$ units.

There are many ups and downs in engineering life. Let's assume the engineering life is divided into $N$ weeks. Each week may or may not have an event associated with it.

The events can be :
- Party: represented by $p$ which increases his motivation by 100 units
- Watching Movie: represented by $m$ which increases his motivation by 50 units
- Playing Cricket: represented by $c$ which increases his motivation by 200 units
- Assignments: represented by $a$ which decreases his motivation by 50
- Internal exams - represented by $i$ which decreases his motivation by 100
- Externals exams - represented by $e$ which decreases his motivation by 150
- No event - represented by $0$ (zero)

Also, the motivation level reduces by 10 every week, irrespective of any event.

Your task is to find out the minimum motivation, Ankush needs to start with ($Z$), such that his motivation level is never negative throughout his journey.

<hr>


###Input:

- First line will contain $T$, number of testcases. Then the testcases follow. 
- Each testcase has one line, containing a string in which each character representing a week's event.

<hr>

###Output:
For each testcase, output in a single line the value of $Z$, i.e. the minimum value of initial motivation Ankush needs, such that it never goes negative throughout his journey.

<hr>

###Constraints 
- $1 \leq T \leq 50$
- $1 \leq$ String Length ($N$) $\leq 10^5$
- $Z \geq 0$

<hr>

###Sample Input:

2

0ipme

00i0ipm0

###Sample Output:

150

250

<hr>
	
###EXPLANATION:

Take motivation level 150 to start with.

- At $0$ motivation level decreases by 10 making it 150-10 = 140.
- $i$: 140-100 = 40. Also 40-10 = 30.
- $p$: 30+100 = 130. Also 130-10 = 120.
- $m$: 120+50 = 170. Also 170-10 = 160.
- $e$: 160-150 = 10. Also 10-10 = 0.

Thus, motivation level of 150 is sufficient for him to survive through his engineering life.