# 🧰 MiniLang – Compiler Design Project  
### *A Mini Language Processor Built in C*

MiniLang is a collection of text-processing and basic compiler-design related utilities written in **C**.  
This project was developed as part of a university **Compiler Design course**, demonstrating fundamental concepts such as tokenization, identifier validation, comment detection, lexical analysis, and string manipulation.

---

## 📌 Features (Functions Included)

### 🔤 **String Operations**
- Reverse a string  
- Tokenize a string into words  
- Concatenate multiple strings  
- Remove white spaces  
- Remove special characters  
- Generate next 3 characters of input  

---

### 📝 **Text Analysis**
- Count vowels, consonants, digits  
- Count spaces  
- Count non-space characters  
- Count frequency of a specific word  
- Count occurrences of articles: **a, an, the**

---

### 🧠 **Code Analysis**
- Detect **single-line** and **multi-line** comments  
- Check whether a string is a **valid identifier**  
- Perform basic lexical recognition (keywords vs identifiers)

---

### 📄 **Miscellaneous**
- Count lines from a multi-line input  

---

## 📂 Project Structure
```
MiniLang_Project/
│── main.c
│── article_counter.c
│── Identifi_comment.c
│── Line_counting.c
│── char_counter.c
│── count_vcd.c
│── frequency_of_the_word.c
│── identifiers.c
│── marge_string.c
│── remove_special_character.c
│── remove_white_space.c
│── rev_str.c
│── space_counter.c
│── take_3_characters.c
│── tokenizing.c
│── headers/ (if used)
│── README.md
```

---

## ⚙️ How to Compile
Use GCC to compile all files at once:

```bash
gcc *.c -o minilang
```

Or list them:

```bash
gcc main.c article_counter.c rev_str.c char_counter.c \
take_3_characters.c remove_white_space.c space_counter.c \
remove_special_character.c Line_counting.c Identifi_comment.c \
marge_string.c count_vcd.c tokenizing.c identifiers.c \
frequency_of_the_word.c -o minilang
```

---

## ▶️ How to Run
```bash
./minilang      # Linux / MSYS2
minilang.exe    # Windows
```

---

## 🧪 Sample Menu Output

```
--- String Operations ---
1. Reverse a string
2. Tokenize a string
3. Concatenate strings
4. Remove white spaces
5. Remove special characters

--- Text Analysis ---
6. Count vowels, consonants, digits
7. Count articles (a, an, the)
8. Count frequency of a word
9. Count non-space characters
10. Count spaces

--- Code Analysis ---
11. Detect comments
12. Validate identifier
13. Next 3 characters

--- Misc ---
14. Count lines
```

---

## 🎯 Learning Outcomes
This project demonstrates:

✔ Understanding of lexical analysis  
✔ String processing techniques  
✔ Implementation of tokenizers  
✔ Identifier rules in C  
✔ Comment detection logic  
✔ Input parsing and validation  
✔ Modular programming with multiple `.c` and `.h` files  
✔ Compiler Design fundamentals  

---

## 👨‍💻 Author
ABDULLAH AL RIFAT  
Compiler Design – Course Project  
Daffodil International University  

---

## 📜 License
This project is free to use for educational purposes.

---
