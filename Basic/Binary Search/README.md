<h2><a href="https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&difficulty=School,Basic&sortBy=submissions">Binary Search</a></h2><h3>Difficulty Level : Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a sorted array of size <strong style="user-select: auto;">N</strong> and an integer <strong style="user-select: auto;">K</strong>, find the position(0-based indexing) at which <strong style="user-select: auto;">K</strong> is present in the array using binary search.</span></p>
<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5
arr[] = {1 2 3 4 5} 
K = 4
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 4 appears at index 3.</span></pre>
<p style="user-select: auto;"><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 5
arr[] = {11 22 33 44 55} 
K = 445
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> 445 is not present.</span></pre>
<p style="user-select: auto;"><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task: &nbsp;</strong><br style="user-select: auto;">You dont need to read input or print anything. Complete the function <strong style="user-select: auto;">binarysearch()</strong> which takes <strong style="user-select: auto;">arr[]</strong>, <strong style="user-select: auto;">N</strong> and <strong style="user-select: auto;">K</strong> as input parameters and returns the index of <strong style="user-select: auto;">K</strong> in the array. If <strong style="user-select: auto;">K</strong> is not present in the array, return -1.</span></p>
<p style="user-select: auto;"><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(LogN)<br style="user-select: auto;"><strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(LogN) if solving recursively and O(1) otherwise.</span></p>
<p style="user-select: auto;"><br style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span></p>
<ul style="user-select: auto;">
<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10</span><sup style="user-select: auto;"><span style="font-size: 15px; user-select: auto;">5</span></sup></li>
<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">6</sup></span></li>
<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">1 &lt;= K &lt;= 10<sup style="user-select: auto;">6</sup></span></li>
</ul></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Infosys</code>&nbsp;<code>Oracle</code>&nbsp;<code>Wipro</code>&nbsp;<code>Linkedin</code>&nbsp;<code>Qualcomm</code>&nbsp;<code>TCS</code>&nbsp;<code>Cognizant</code>&nbsp;<code>Accenture</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;