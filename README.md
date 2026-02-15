# Trivia Quiz Game (C)

> **A fast-paced, console-based trivia assistant written in C. Test your knowledge, track your performance, and master the command line.**

This project is a lightweight, multi-choice trivia engine. It demonstrates fundamental C programming concepts such as structured data, console I/O, and persistent state tracking during a session.

---

## 🕹 Features

* **Diverse Challenges:** 10 curated trivia questions with 4 multiple-choice options each.
* **Session Statistics:** Real-time tracking of **total games played, wins, and losses**.
* **Immediate Feedback:** Instant validation of answers to keep the gameplay engaging.
* **Minimalist UI:** Clean, menu-driven console interface designed for cross-platform compatibility.
* **State Management:** Intelligent handling of game results and player history within the session.

---

## 📌 How to Play

### 1️⃣ Compilation
Ensure you have a C compiler (like GCC) installed.
```bash
gcc trivia_quiz.c -o trivia_quiz
```

### 2️⃣ Execution
```bash
./trivia_quiz
```

### 3️⃣ Menu Navigation
| Option | Action |
| :--- | :--- |
| **1** | **Start Game:** Begin a new 10-question round. |
| **2** | **Statistics:** View your current record (Wins/Losses/Total). |
| **3** | **Exit:** Securely close the application. |

---

## 🎯 Game Flow

```text
       [ Main Menu ]
             |
      (Option 1 selected)
             v
    [ Initialize Game ] <----------+
             |                     |
             v                     |
 [ Display Question & Options ]    |
             |                     |
             v                     |
      [ User Input 1-4 ]           | (Repeat for 10 Qs)
             |                     |
     /-------+-------\             |
    |                 |            |
 [ Correct ]    [ Incorrect ]      |
    |                 |            |
    \-------+-------/              |
            |                      |
            v                      |
    { Last Question? } ------------/
            |
          (Yes)
            v
    [ Update Statistics ]
            |
            v
       [ Main Menu ]
```

---

## 🛠 Requirements

* **Compiler:** GCC / Clang / MSVC
* **Environment:** Terminal, Command Prompt, or PowerShell
* **Knowledge:** Basic command-line interaction

---

## 📚 Learning Outcomes

This project serves as a practical implementation of:
* **Control Structures:** Nested loops and complex switch-case logic.
* **Data Handling:** Managing arrays of strings and structures for question banks.
* **Memory Management:** Efficient use of stack memory for game states.
* **Modular Programming:** Separating game logic from the user interface.

---

## 🚀 Future Enhancements

- [ ] **File I/O:** Load questions from an external `.txt` or `.json` file.
- [ ] **Timed Mode:** Implement a countdown timer for each question using `time.h`.
- [ ] **Difficulty Tiers:** Add categories (Easy, Medium, Hard).
- [ ] **Persistent Stats:** Save player history to a local file for long-term tracking.
- [ ] **Lifelines:** Add "50/50" or "Skip" options.

---

## 🔗 Resources
* **Documentation:** [C Language Reference](https://en.cppreference.com/w/c)

---
*Created as part of a C programming exploration suite.*
