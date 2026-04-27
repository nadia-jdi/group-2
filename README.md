# Console based Tic Tac Toe
A robust,interactive 3x3 grid Tic Tac Toe game developed in C.The project focuses on procedural logic, modular design and strict input validation to create a seamless , local competitive experience. 
##🔍 Project Overview
This project implements a classic logic game where two players compete to align three identical symbols ('X' or 'O') horizontally, vertically, or diagonally. The game is designed to be fast, bug-free and  interactive, featuring a unique 🚩**Penalty System**🚩  for invalid moves to encourage precise play.

## 📍 Key Features
*   **Modular Design**: Functions are separated into logic, drawing, and validation.
*   **2D Array Logic**: Uses a 3x3 character grid for efficient state management.
*   **Smart Mapping**: Mathematical formulas convert user input (1-9) into grid coordinates.
*   **Penalty System**: Unlike standard versions, players lose their turn if they attempt an invalid or "double-booked" move.
*   **Buffer Management**: Uses `getchar()` to resolve input buffer bugs, ensuring smooth gameplay.

## 🗃️ Repository Structure
*   main.c`: The entry point containing the Game Engine (While Loop).
*   requirements.txt`: System requirements and compiler details.
*   'data/`: Directory for any external datasets .
*   'support/`: Contains other code files.
*   'others/`: Contains the PPTX presentations, PDF reports, and the 1-minute demo video.

## 🛠️ Methodology & Design
### Logic Flow
1.  **Initialize**: `resetBoard()` fills the grid with numbers 1-9 using nested loops.
2.  **Input**: Players select a cell number.
3.  **Process**: 
    *   **Mapping**: Row: `(choice - 1) / 3` | Column: `(choice - 1) % 3`.
    *   **Validation**: Checks for out-of-bounds or occupied cells.
    *   **Referee**: `checkWin()` scans rows, columns, and diagonals for a winner.
4.  **Output**: `drawBoard()` refreshes the screen with a clean 3x3 grid using `|` and `-`.

## 🚀 How to Run
1.  **Clone the Repository**:
    ```bash
    git clone [your-repository-link]
    ```
2.  **Compile**:
    Navigate to the root directory and run:
    ```bash
    gcc main.c support/*.c -o tictactoe
    ```
3.  **Run**:
    ```bash
    ./tictactoe
    ```

## 👩‍🎓👩‍🎓👩‍🎓👩‍🎓 Group Members
*   Nadia Nower
*   Humira Anjum
*   Toufa Mahmud
*   Halimatuz Lubana Biva







