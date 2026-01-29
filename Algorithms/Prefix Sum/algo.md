# Prefix Sum Algorithm (Beginner Friendly Guide)

## 📌 What is Prefix Sum?

**Prefix Sum** is a technique where we preprocess an array so that we can answer **range sum queries** efficiently.

Instead of calculating the sum again and again for different ranges, we compute a helper array called the **prefix sum array**.

---

## 🧠 Why Prefix Sum is Needed?

Suppose you are given an array and many queries like:

> What is the sum of elements from index `L` to `R`?

### ❌ Without Prefix Sum

* For every query, you loop from `L` to `R`
* Time per query = `O(n)`
* Total = `O(n × q)` (slow)

### ✅ With Prefix Sum

* Precompute once
* Each query answered in `O(1)`
* Total = `O(n + q)` (fast)

---

## 📦 Prefix Sum Definition

Given an array:

```
arr = [a0, a1, a2, a3, ...]
```

Prefix sum array `pref` is defined as:

```
pref[0] = arr[0]
pref[i] = pref[i-1] + arr[i]
```

---

## ✏️ Example

### Input Array

```
arr = [2, 4, 1, 3, 5]
```

### Prefix Sum Array

```
pref = [2, 6, 7, 10, 15]
```

| Index | 0 | 1 | 2 | 3  | 4  |
| ----- | - | - | - | -- | -- |
| arr   | 2 | 4 | 1 | 3  | 5  |
| pref  | 2 | 6 | 7 | 10 | 15 |

---

## 🧮 Range Sum Formula

To find sum from index `L` to `R` (0-based):

```
if L == 0:
    sum = pref[R]
else:
    sum = pref[R] - pref[L-1]
```

### Example

Sum from index `1` to `3`:

```
pref[3] - pref[0] = 10 - 2 = 8
```

(4 + 1 + 3 = 8)

---

## 💻 C++ Implementation

### Building Prefix Sum

```cpp
vector<int> prefix(n);
prefix[0] = arr[0];
for(int i = 1; i < n; i++) {
    prefix[i] = prefix[i-1] + arr[i];
}
```

### Answering a Query

```cpp
int rangeSum(int L, int R, vector<int>& prefix) {
    if(L == 0) return prefix[R];
    return prefix[R] - prefix[L-1];
}
```

---

## ⏱ Complexity

* **Preprocessing Time:** `O(n)`
* **Query Time:** `O(1)`
* **Extra Space:** `O(n)`

---

## 🔥 Where Prefix Sum is Used

* Range sum queries
* Frequency queries
* Subarray sum problems
* 2D matrix sum problems
* Competitive programming

---
