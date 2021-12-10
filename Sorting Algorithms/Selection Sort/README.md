## Selection Sort Algorithm ->
(n - 1) + (n - 2) + (n - 3) + ... + 2 + 1 = (n - 1) * (n) / 2 = 0.5 n^2 - 0.5n
---> Worst - Best Case: O(n^2) Time Complexity

### The array ->

#### 10  987  78  8  21  5  1

```
i = 0
j = i + 1; (j = 1)

min_val_index ==> i (i = 0);
array[min_val_index] ==> 10
array[j] ==> 987

if array[min_val] > array[j]:
    min_val_index = j;
else:
    continue;                   <---- Here
j++;

.
.
.

i = 0;
j = 3;
array[min_val_index] ==> 10;
array[j] ==> 8;

if array[min_val] > array[j]:
    min_val_index = j;          <---- Here
else:
    continue;                   

(min_val_index = 3);
j++;

i = 0;
j = 4;
array[min_val_index] ==> now it's 8 !!!;
array[j] ==> 21;

if array[min_val] > array[j]:
    min_val_index = j;
else:
    continue;                   <---- Here          

(min_val_index = 3);
j++;

i = 0;
j = 5;
array[min_val_index] ==> 8
array[j] ==> 5;
if array[min_val] > array[j]:
    min_val_index = j;          <---- Here
else:
    continue;                   

(min_val_index = 5);
j++;

i = 0;
j = 6;
array[min_val_index] ==> now it's 5 !!!;
array[j] ==> 1;
if array[min_val] > array[j]:
    min_val_index = j;          <---- Here
else:
    continue;                   

(min_val_index = 6);
j++;

// finish first "j" count

swap(array[min_val_index], array[i]);
Array => 1  987  78  8  21  5  10;



Then i += 1;

i = 1
j = i + 1; (j = 2)

min_val_index ==> i (i = 1);
array[min_val_index] ==> 987;
array[j] ==> 78

if array[min_val] > array[j]:
    min_val_index = j;          <---- Here
else:
    continue;

(min_val_index = 2);
j++;


i = 1;
j = 3;

min_val_index ==> now it's 2 !!!;
array[min_val_index] ==> 78;
array[j] ==> 8

if array[min_val] > array[j]:
    min_val_index = j;          <---- Here
else:
    continue;

(min_val_index = 3);
j++;


i = 1;
j = 4;

min_val_index ==> now it's 3 !!!;
array[min_val_index] ==> 8;
array[j] ==> 21

if array[min_val] > array[j]:
    min_val_index = j;
else:
    continue;                   <---- Here

(min_val_index = 3);
j++;


i = 1;
j = 5;

min_val_index ==> 3;
array[min_val_index] ==> 8;
array[j] ==> 5

if array[min_val] > array[j]:
    min_val_index = j;          <---- Here
else:
    continue;

(min_val_index = 5);
j++;


i = 1;
j = 6;

min_val_index ==> now it's 5 !!!;
array[min_val_index] ==> 5;
array[j] ==> 10

if array[min_val] > array[j]:
    min_val_index = j;
else:
    continue;                   <---- Here

(min_val_index = 5);
j++;

// finish first "j" count

swap(array[min_val_index], array[i]);
Array => 1  5  78  8  21  987  10;

then i += 1;
.
.
.

Sorted Array --> 1  5  8  10  21  78  987
```
