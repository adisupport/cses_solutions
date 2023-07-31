## Number of Ways to Find Distinct Elements in the Array.
Sample Test Case : [1,6,2,1,2,3,5,4,5,6]
### 1. SORTING
after sorting the array.
arr : [1,1,2,2,3,4,5,5,6,6]
> Algo
- sort the array
- while looping the array
  - if previous elements and current element is not equal then increment count of a distinct variable. 
```
  sort(arr.begin(),arr.end());
  int distinct = 1;
  for(int i=1;i<n;i++)
    if(arr[i-1]!=arr[i])
      distinct++;
  return distinct;
```
### 2. Using Data Structure.
using Binary Search Tree
```
Set<int>elem;
for(int i:arr)
  elem.insert(i)
return elem.size();
```
using Map
```
unordered_map<int,int>mp;
for(int i:arr)
  mp[i]++;
return mp.size(); // return distinct number of key. 
```
|Solution | Time Complexity|
|:-------------------------:|-----------------:|
|Using Sorting|0.04s|
|Using Set|0.14s|
|Using Unordered Map|TLE|
