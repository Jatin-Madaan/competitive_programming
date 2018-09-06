/*Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each of the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in your array.

For example, the length of your array of zeros n=10. Your list of queries is as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of k between the indices a and b inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is 10 after all operations are performed.
Output Format

Return the integer maximum value in the finished array.

Sample Input

5 3
1 2 100
2 5 100
3 4 100
Sample Output

200
Explanation

After the first update list will be 100 100 0 0 0. 
After the second update list will be 100 200 100 100 100. 
After the third update list will be 100 200 200 200 100. 
The required answer will be 200. */

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {


    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
int n = scan.nextInt();
int m = scan.nextInt();
        

long[] arr = new long[n];
        
int lower;
int upper;
long sum;

for(int i=0;i<n;i++) arr[i]=0;

for(int i=0;i<m;i++){
    lower=scan.nextInt();
    upper=scan.nextInt();
    sum=scan.nextInt();
    arr[lower-1]+=sum;
    if(upper<n) arr[upper]-=sum; 
}
        
long max=0;
long temp=0;

for(int i=0;i<n;i++){
    temp += arr[i];
    if(temp> max) max=temp;
}

System.out.println(max);
        
    }
}
