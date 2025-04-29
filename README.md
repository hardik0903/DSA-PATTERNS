# 🌟 Pattern Printing in C++ 💻

This 📁 contains C++ 🧾 to print 🖨️ various 🎨 using 🔁 loops. Each 🎨 is 🔧 as a function 🔂, and `main` reads 🧠 the number 🔢 of test 🧪 and values of `n` to 🖨️ the 🎨. The patterns designed below are the ones which we are going to solve further.

### Pattern 1: Full Square
```
* * * * *
* * * * *
* * * * *
* * * * *
```

### Pattern 2: Right-Angled Triangle
```
*
* *
* * *
* * * *
```

### Pattern 3: Increasing Number Triangle
```
1
12
123
1234
```

### Pattern 4: Repeated Number Triangle
```
1
22
333
4444
```

### Pattern 5: Inverted Star Triangle
```
* * * * *
* * * *
* * *
* *
*
```

### Pattern 6: Inverted Numeric Triangle
```
12345
1234
123
12
1
```

### Pattern 7: Centered Pyramid of Stars
```
    *
   ***
  *****
 *******
*********
```

### Pattern 8: Inverted Centered Pyramid of Stars
```
*********
 *******
  *****
   ***
    *
```

### Pattern 9: Diamond of Stars
```
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```

### Pattern 10: Increasing + Decreasing Stars
```
*
**
***
****
*****
****
***
**
*
```

### Pattern 11: Alternating Binary Triangle
```
1
01
101
0101
10101
```

### Pattern 12: Numeric Palindromic Pyramid
```
1        1
12      21
123    321
1234  4321
1234554321
```

### Pattern 13: Floyd’s Triangle
```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

### Pattern 14: Alphabetical Triangle
```
A
A B
A B C
A B C D
A B C D E
```

### Pattern 15: Inverted Alphabetical Triangle
```
A B C D E
A B C D
A B C
A B
A
```

### Pattern 16: Repeated Letter Triangle
```
A
BB
CCC
DDDD
EEEEE
```

### Pattern 17: Alphabetic Palindromic Pyramid
```
   A   
  ABA  
 ABCBA 
ABCDCBA
```

### Pattern 18: Reverse Alphabetical Triangle
```
E
D E
C D E
B C D E
A B C D E
```

### Pattern 19: Hourglass Star Pattern
```
**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********
```

### Pattern 20: Double Arrowhead Star Pattern
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

### Pattern 21: Hollow Square Star Pattern
```
****
*  *
*  *
****
```

### Pattern 22: Concentric Number Square Pattern
```
4444444
4333334
4322234
4321234
4322234
4333334
4444444
```


## 📚 Table of Contents

1. [🔲 Pattern 1: Full Square](#-pattern-1-full-square)
2. [📐 Pattern 2: Right-Angled Triangle ⭐](#-pattern-2-right-angled-triangle-)
3. [🔢 Pattern 3: Increasing Number Triangle](#-pattern-3-increasing-number-triangle)
4. [🔁 Pattern 4: Repeated Number Triangle](#-pattern-4-repeated-number-triangle)
5. [🔽 Pattern 5: Inverted ⭐ Triangle](#-pattern-5-inverted-star-triangle-)
6. [🔽 Pattern 6: Inverted 🔢 Triangle](#-pattern-6-inverted-numeric-triangle-)
7. [⛰️ Pattern 7: Centered ⭐ Pyramid](#pattern-7-centered-pyramid-of-stars)
8. [🔻 Pattern 8: Inverted Centered ⭐ Pyramid](#-pattern-8-inverted-centered-pyramid-of-stars-)
9. [💎 Pattern 9: Diamond of ⭐](#-pattern-9-diamond-of-stars-)
10. [⬆️⬇️ Pattern 10: Increasing + Decreasing ⭐](#pattern-10-increasing-and-decreasing-stars)
11. [0️⃣1️⃣ Pattern 11: Alternating Binary Triangle](#pattern-11-alternating-binary-triangle)
12. [🔢 Pattern 12: Numeric Palindromic Pyramid](#-pattern-12-numeric-palindromic-pyramid)  
13. [🔢 Pattern 13: Floyd’s Triangle](#-pattern-13-floyds-triangle)  
14. [🔤 Pattern 14: Alphabetical Triangle](#-pattern-14-alphabetical-triangle)  
15. [🔤 Pattern 15: Inverted Alphabetical Triangle](#-pattern-15-inverted-alphabetical-triangle)  
16. [🔤 Pattern 16: Repeated Letter Triangle](#-pattern-16-repeated-letter-triangle)  
17. [🔤 Pattern 17: Alphabetic Palindromic Pyramid](#-pattern-17-alphabetic-palindromic-pyramid)  
18. [🔤 Pattern 18: Reverse Alphabetical Triangle](#-pattern-18-reverse-alphabetical-triangle)  
19. [⭐ Pattern 19: Hourglass Star Pattern](#-pattern-19-hourglass-star-pattern)  
20. [⭐ Pattern 20: Double Arrowhead Star Pattern](#-pattern-20-double-arrowhead-star-pattern)  
21. [⭐ Pattern 21: Hollow Square Star Pattern](#-pattern-21-hollow-square-star-pattern)  
22. [🔢 Pattern 22: Concentric Number Square Pattern](#-pattern-22-concentric-number-square-pattern) 
23. [🔗 Pattern Connections](#-pattern-connections)  

---

## 🔲 Pattern 1: Full Square

**🎯 Goal:**
```
* * * * *
* * * * *
* * * * *
* * * * *
```

**🧠 Approach:**
- Use 🔁 loops: outer ↕️ (`i`: 0 → n-1), inner ↔️ (`j`: 0 → n-1).
- Print "* " ➕ newline 🆕 for each row.

---

## 📐 Pattern 2: Right-Angled Triangle ⭐

**🎯 Goal:**
```
*
* *
* * *
* * * *
```

**🧠 Approach:**
- Outer 🔁 for rows.
- Inner 🔁 (`j`: 0 → i) prints ⭐.
- Builds on Pattern 1 ➕ more ⭐.

---

## 🔢 Pattern 3: Increasing Number Triangle

**🎯 Goal:**
```
1
12
123
1234
```

**🧠 Approach:**
- Outer 🔁 (`i`: 1 → n).
- Inner 🔁 (`j`: 1 → i) prints 🔢.
- Shows dynamic printing 📈 over static 🔣.

---

## 🔁 Pattern 4: Repeated Number Triangle

**🎯 Goal:**
```
1
22
333
4444
```

**🧠 Approach:**
- Like Pattern 3 but repeat `i` 🔁 `i` times.

---

## 🔽 Pattern 5: Inverted Star Triangle ⭐

**🎯 Goal:**
```
* * * * *
* * * *
* * *
* *
*
```

**🧠 Approach:**
- Outer 🔁: `i` from 1 → n
- Inner 🔁 prints ⭐ from `n-i+1` → 1
- Reverse 🔁 of Pattern 2 🔄

---

## 🔽 Pattern 6: Inverted Numeric Triangle 🔢

**🎯 Goal:**
```
12345
1234
123
12
1
```

**🧠 Approach:**
- Outer 🔁: `i` from 1 → n
- Inner 🔁 prints 🔢 from 1 → `n-i+1`
- Mirror Pattern 3 🪞

---

## Pattern 7: Centered Pyramid of Stars

**🎯 Goal:**
```
    *
   ***
  *****
 *******
*********
```

**🧠 Approach:**
- Loop ↕️ levels
- Spaces: `n-i-1`, ⭐: `2*i+1`
- Print 🧊➕🌟➕🧊

---

## 🔻 Pattern 8: Inverted Centered Pyramid of Stars ⭐

**🎯 Goal:**
```
*********
 *******
  *****
   ***
    *
```

**🧠 Approach:**
- Outer 🔁 (`i`: 0 → n-1)
- Print `i` spaces, then ⭐: `2*(n-i)-1`, then `i` spaces.
- Upside-down ⛰️ from Pattern 7 🙃

---

## 💎 Pattern 9: Diamond of Stars ⭐

**🎯 Goal:**
```
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```

**🧠 Approach:**
- Combine ⛰️ (7) + 🔻 (8)
- First ⬆️ then ⬇️

---

## Pattern 10: Increasing and Decreasing Stars

**🎯 Goal:**
```
*
**
***
****
*****
****
***
**
*
```

**🧠 Approach:**
- Loop `i`: 1 → `2*n-1`
- If `i <= n` → ⭐=`i`, else ⭐=`2*n-i`
- Similar to 💎 but only half ↕️

---

## Pattern 11: Alternating Binary Triangle
**🎯 Goal:**
```
1
01
101
0101
10101
```

**🧠 Approach:**
- Outer 🔁 (`i` rows)
- Start bit: 1️⃣ if even, 0️⃣ if odd
- Flip 🔄 after every 🔢
- Adds binary 🔀 to numeric 🎨

---

## 🔢 Pattern 12: Numeric Palindromic Pyramid

**🎯 Goal:**
```
1        1
12      21
123    321
1234  4321
1234554321
```

**🧠 Approach:**
- Build left side by printing numbers from 1 to `i`.
- Compute spaces: start at `2*(n-1)` and decrease by 2 each row.
- Print right side in reverse from `i` back to 1, forming a palindrome.
- Mirrors Pattern 9's symmetry and numeric sequencing.

---

## 🔢 Pattern 13: Floyd's Triangle

**🎯 Goal:**
```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

**🧠 Approach:**
- Maintain a running counter starting at 1.
- For each row `i` (1 to `n`), print `i` numbers, incrementing the counter each time.
- Demonstrates sequential number generation across rows.

---

## 🔤 Pattern 14: Alphabetical Triangle

**🎯 Goal:**
```
A
A B
A B C
A B C D
A B C D E
```

**🧠 Approach:**
- Loop `i` from 0 to `n-1`.
- For each position, print characters from 'A' through 'A'+`i`.
- Illustrates iterative character printing using ASCII offsets.

---

## 🔤 Pattern 15: Inverted Alphabetical Triangle

**🎯 Goal:**
```
A B C D E
A B C D
A B C
A B
A
```

**🧠 Approach:**
- Reverse of Pattern 14.
- For each row `i` (0 to `n-1`), print letters from 'A' to 'A'+(n-i-1).
- Demonstrates decrementing loop bounds.

---

## 🔤 Pattern 16: Repeated Letter Triangle

**🎯 Goal:**
```
A
BB
CCC
DDDD
EEEEE
```

**🧠 Approach:**
- For row `i`, compute character `ch = 'A'+i`.
- Print `ch` exactly `i+1` times.
- Combines letter sequencing with repetition logic.

---

## 🔤 Pattern 17: Alphabetic Palindromic Pyramid

**🎯 Goal:**
```
   A   
  ABA  
 ABCBA 
ABCDCBA
```

**🧠 Approach:**
- Center aligns using spaces: `n-i-1` on each side.
- Build a peak at 'A'+`i`, increasing then decreasing character values.
- Mirrors numeric palindromes in Pattern 12 but with letters.

---

## 🔤 Pattern 18: Reverse Alphabetical Triangle

**🎯 Goal:**
```
E
D E
C D E
B C D E
A B C D E
```

**🧠 Approach:**
- For row `i`, start at the character `'E'-i` and iterate up to 'E'.
- Demonstrates reverse ASCII traversal expanding across rows.

---

## ⭐ Pattern 19: Hourglass Star Pattern

**🎯 Goal:**
```
**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********
```

**🧠 Approach:**
- Top half: decreasing stars outward, increasing spaces inward.
- Bottom half: reverse of top, restoring star count.
- Uses two nested sequences to form an hourglass shape.

---

## ⭐ Pattern 20: Double Arrowhead Star Pattern

**🎯 Goal:**
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

**🧠 Approach:**
- Loop rows from 1 to `2*n-1`, compute `stars = i <= n ? i : 2*n-i`.
- Print `stars`, then `space = 2*(n-stars)`, then `stars` again.
- Symmetric arrowheads meeting at the center line.

---

## ⭐ Pattern 21: Hollow Square Star Pattern

**🎯 Goal:**
```
****
*  *
*  *
****
```

**🧠 Approach:**
- Print stars on borders: first/last row and first/last column.
- Print spaces in the interior cells.
- Highlights conditional printing within a grid.

---

## 🔢 Pattern 22: Concentric Number Square Pattern

**🎯 Goal:**
```
4444444
4333334
4322234
4321234
4322234
4333334
4444444
```

**🧠 Approach:**
- Grid size is `2*n-1`.
- For each cell `(i,j)`, compute minimum distance to any edge: `min(top, bottom, left, right)`.
- Print `n - distance`, creating concentric layers of decreasing numbers.
- Generalizes nested loops to multi-directional indexing.

---

## 🔗 Pattern Connections

- 🧩 2–6 evolve from 🔲 1 by modifying row 📏 & content 📄
- ⛰️ 7 → 🔻 8 → 💎 9 form aligned & layered ⭐
- ⬆️⬇️ 10 is 💎's half 💫
- 0️⃣1️⃣ 11 plays with bits 🎭 & shows logic via flip 🔁
- 🎭 Patterns 12 & 17: numeric vs. alphabetic palindromes.
- 🔢 Patterns 13 & 20: sequential numbers vs. symmetrical stars.
- 🔤 Patterns 14–18: various alphabetical sequences and orientations.
- ⭐ Patterns 19 & 20: star shapes using expansion and contraction logic.
- 🧩 Many mirror or extend earlier patterns, showcasing symmetry and loop control.

---
> "Code is like humor. When you have to explain it, it’s bad."

---

[![Pattern Printing in C++ Tutorial](https://img.youtube.com/vi/tNm_NNSB3_w/0.jpg)](https://www.youtube.com/watch?v=tNm_NNSB3_w)

---
> I learned these patterns from this video tutorial. It offers clear, step-by-step explanations and practical examples. Highly recommend it for reinforcing these concepts.

---

**🔗 Connect with me:**  
- GitHub: [hardik0903](https://github.com/hardik0903)  
- LinkedIn: [Hardik Pandey](https://www.linkedin.com/in/hardik-pandey-4a836628a/)
