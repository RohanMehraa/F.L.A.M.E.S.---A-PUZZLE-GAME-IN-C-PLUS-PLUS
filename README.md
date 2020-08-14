# F.L.A.M.E.S.---A-PUZZLE-GAME-IN-C++ BY ROHAN MEHRA.

Abstract:
Analyze your future relationship. You can now use the acronym "FLAME" to figure out just what the future holds for your and this other person. Match the letter you ended on with the following meaning of each letter of the word "FLAME":

Introduction:
Flames Game is a relationship calculating algorithm famous between the youngsters. Once upon a time everyone might heard about this and many of them tried out this secretly. Some took this as very serious also. So what FLAMES stance for? 

F - Friendship 

L - Lovers 
A - Affection 
M - Marriage 
E - Enemy 
S - Soulmates
 
Methodology:
It is very easy to explain with some example: 
Your name: asd 
Partner name: abcd 
Mainly two steps are there:
Get the flames count
Take the two names ('asd' and 'abcd')
Remove the common characters (two common characters 'a', 'd')
Get the count of the characters that are left (Removed a,d and the rest are s,b,c. So total 3.)
Get the flames result
We take FLAMES letters ('F', 'L', 'A', 'M', 'E', 'S')
And start removing letters using the flames count we got.
And the letter which last the process is the result.
 
Implementation:
 
In our example we got flames count = 3. So first we takes FLAMES. 
FLAMES 
Then we start count from left up to flames count 3. Then remove the letter which is in the position 3. In this case it is 'A'. So the letters become: 
FLMES 
Then we start count again from the letter which is removed ie, from 'M'. So the next character to remove is 'S'. So our letters become: 
FLME 
After next step: 
FLE 
Then: 
FE 
Last: 
F 
So the result is 'Friend'.

Rules:
There should not be any Spelling Mistakes.
There should not be any Grammatical Errors.
Answers must not contain any bad words.
Answer should be complete in itself

EXCEPTION:
If the user enters the same name in both entries, which is a rare case but still might exist. Then in that case, no resultant string is found. And the resultant sting lenght is '0'. And with zero we can't start operation on the Flames string.
So, in order to address this scenario. I've implemented an exception case. In this scenario, the result will be showed purely on the basis of luck/fate of the couple, as a random output is generated in such a case.

Eg: Name1 : Manpreet
    Name2 : Manpreet
    
Then in such a case no resultant string is found. And the result will be printed purely on couple's fate/luck. As a random output is generated among the 6 possible outcomes. i.e 'F'.'L'.'A'.'M'.'E'.'S'.
