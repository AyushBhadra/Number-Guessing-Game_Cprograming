# 🎲 Number Guessing Game in C

A simple yet interactive Command Line Interface (CLI) game developed in C to demonstrate logic building, loops, and random number generation.

## 🚀 Overview
The computer selects a random number between **1 and 100**, and the player has to guess it. The program provides real-time feedback ("Too High" or "Too Low") to guide the player toward the correct answer. It tracks the number of attempts taken to win.

## 🛠️ Tech Stack
- **Language:** C (Standard C99)
- **Libraries Used:** `stdio.h`, `stdlib.h`, `time.h`
- **Tools:** VS Code / GCC Compiler

## ✨ Key Features
- **Dynamic Randomness:** Uses `srand(time(0))` ensuring a unique number is generated every time the game runs.
- **Input Validation:** Prevents the game from crashing if the user enters a number outside the 1-100 range.
- **Attempt Counter:** Tracks and displays the total guesses taken to win.
- **User-Friendly Interface:** Clear prompts and feedback messages.

## 💻 How to Run
1. Clone the repository:
   ```bash
   git clone [https://github.com/YourUsername/RepoName.git](https://github.com/YourUsername/RepoName.git)