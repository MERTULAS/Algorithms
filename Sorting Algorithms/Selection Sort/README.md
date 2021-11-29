## Selection Sort Algorithm ->
(n - 1) + (n - 2) + (n - 3) + ... + 2 + 1 = (n - 1) * (n) / 2 = 0.5 n^2 - 0.5n
---> O(n^2) Time Complexity

### The array ->

#### 10  987  78  8  21  5  1

```
i = 0
j = i + 1; (j = 1)

array[i] ==> 10
array[j] ==> 987

if array[i] > array[j]:
    swap(array[j], array[i]);
j++;
Array => 10  987  78  8  21  5  1;
.
.
.

i = 0;
j = 3;
array[i] ==> 10;
array[j] ==> 8;

if array[i] > array[j]:
    swap(array[j], array[i]);
j++;
Array => 8  987  78  10  21  5  1;

.
.
.

i = 0;
j = 5;
array[i] ==> now it's 8 !!!;
array[j] ==> 5;
if array[i] > array[j]:
    swap(array[j], array[i]);
j++;
Array => 5  987  78  10  21  8  1;

i = 0;
j = 6;
array[i] ==> now it's 5 !!!;
array[j] ==> 1;
if array[i] > array[j]:
    swap(array[j], array[i]);
j++;
Array => 1  987  78  10  21  8  5;

Then i += 1;

i = 1;
j = i + 1;
j = 2;
array[i] ==> 987;
array[j] ==> 78;
if array[i] > array[j]:
    swap(array[j], array[i]);
j++;
Array => 1  78  987  10  21  8  5;

.
.
.

Sorted Array --> 1  5  8  10  21  78  987
```
