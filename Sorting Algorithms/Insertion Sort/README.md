## Insertion Sort Algorithm ->
(n - 1) + (n - 2) + (n - 3) + ... + 2 + 1 = (n - 1) * (n) / 2 = 0.5 n^2 - 0.5n

--> Worst Case: O(n^2) Time Complexity
--> Best Case: O(n) Time Complexity

### The array ->

#### 10  987  78  8  21  5  1

```
i = 1;
j = i - 1; (j = 0);
...

i = 2;
j = i - 1; (j = 1);
array[i] = 78;
array[j] = 987;
key = array[i]; (key = 78);
while (j >= 0 && array[j] > key) {
    array[j + 1] = array[j];
    j--;
}
Now array => 10  987  987  8  21  5  1;
j = it's now 0 !!!
array[j + 1] = key;
Now array => 10  78  987  8  21  5  1;

i = 3;
j = i - 1; (j = 2);
array[i] = 8;
array[j] = 987;
key = array[i]; (key = 8);
while (j >= 0 && array[j] > key) {
    array[j + 1] = array[j];
    j--;
}
Now array => 10  10  78  987  21  5  1;
j = it's now -1 !!!
array[j + 1] = key;
Now array => 8  10  78  987  21  5  1;
...
Sorted Array --> 1  5  8  10  21  78  987

```
