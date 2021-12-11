## Shell Sort Algorithm ->
---> Best Case: O(n.log n) Time Complexity
---> Worst Case: O(n^2) Time Complexity
---> Average Case: O(n.log n) Time Complexity

---> O(1) Space Complexity
---> In-place
---> Non-stable

### The array ->

#### 10  987  78  8  21  5  1
```
N = Array Length;
N = 7;

Gap = N / 2 ==> 7 / 2 ==> 3.5 ~> 3;

i = Gap;
i = 3;
array[i] => 8;
array[i - gap] => 10;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);     <--- Here
else:
    continue;

Array -->> 8  987  78  10  21  5  1;

i++;
i = 4;
array[i] => 21;
array[i - gap] => 987;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);     <--- Here
else:
    continue;

Array -->> 8  21  78  10  987  5  1;

i++;
i = 5;
array[i] => 5;
array[i - gap] => 78;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);     <--- Here
else:
    continue;

Array -->> 8  987  5  10  21  78  1;

i++;
i = 6;
array[i] => 1;
array[i - gap] => 10;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);     <--- Here
else:
    continue;

Array -->> 8  987  78  1  21  5  10;


// i - gap >= gap so;

i -= gap ==> i = gap ==> i = 3;

array[i] => 1;
array[i - gap] => 8;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);     <--- Here
else:
    continue;

Array -->> 1  987  78  8  21  5  10;
i++;

// i == n (length); so reached end of the this cycle;
gap /= 2 ==> gap = 3 / 2 ==> 1.5 ~> 1;

i = Gap;
i = 1;
array[i] => 987;
array[i - gap] => 1;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);
else:
    continue;                           <--- Here

Array -->> 1  987  78  8  21  5  10;
i++;

i = 2;
array[i] => 78;
array[i - gap] => 987;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);     <--- Here
else:
    continue;

Array -->> 1  78  987  8  21  5  10;

// i - gap >= gap so;

i -= gap ==> i = gap ==> i = 1;
i = 1;
array[i] => 78;
array[i - gap] => 1;
if array[i - gap] > array[i]:
    swap(array[i - gap], array[i]);
else:
    continue;                           <--- Here

Array -->> 1  78  987  8  21  5  10;
i++;
i = 3;
.
.
.
Array -->> 1  78  (987)  (8)  21  5  10;
Array -->> 1  (78)  (8)  987  21  5  10;
Array -->> 1  8  78  987  21  5  10;
Array -->> 1  8  78  (987)  (21)  5  10;
Array -->> 1  8  (78)  (21)  987  5  10;
Array -->> 1  8  21  78  987  5  10;
Array -->> 1  8  21  78  (987)  (5)  10;
Array -->> 1  8  21  (78)  (5)  987  10;
Array -->> 1  8  (21)  (5)  78  987  10;
Array -->> 1  (8)  (5)  21  78  987  10;
Array -->> 1  5  8  21  78  987  10;
Array -->> 1  5  8  21  78  (987)  (10);
Array -->> 1  5  8  21  (78)  (10)  987;
Array -->> 1  5  8  (21)  (10)  78  987;
Array -->> 1  5  8  10  21  78  987;
```
