# Simple CLI Task Manager

A lightweight, interactive Command Line Interface (CLI) task management tool built using C++. This application allows users to add, view, and remove daily tasks directly from their terminal.

## 🚀 Features

- **Add Tasks:** Dynamically type and append new tasks to your list.
- **View Tasks:** Display your current active tasks with clean, sequential indexing.
- **Remove Tasks:** Clean up completed tasks using 1-based indexing.
- **Input Validation:** Gracefully handles invalid menu options to ensure a smooth user experience.

## 🛠️ Tech Stack & Concepts Used

- **Language:** C++
- **Data Structures:** Dynamic arrays using `std::vector`
- **Control Flow:** `while` loops, `switch-case` statements, and condition blocks
- **Input/Output Management:** `std::cin`, `getline()`, and input buffer handling (`cin.ignore()`)

## 📦 Getting Started

### Prerequisites

You need a C++ compiler installed on your machine (like `g++` or `clang`).

### Installation & Execution

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com
   ```

2. Navigate into the project folder:
   ```bash
   cd task-manager-tool
   ```

3. Compile the program:
   ```bash
   g++ -o task_manager main.cpp
   ```

4. Run the application:
   ```bash
   ./task_manager
   ```

## 📸 Usage Preview

```text
Welcome to Task List Tool!

Menu Options: 
1. Add Task 
2. View Tasks 
3. Remove Task 
4. Quit 

Task list system initialized and ready!

Choose an option: 1
Enter task description: Finish C++ assignment
Task "Finish C++ assignment" added successfully!
Total tasks: 1
```

## 🔮 Future Enhancements

- [ ] **File Persistent Storage:** Save tasks to a `.txt` file so they don't disappear when you close the program.
- [ ] **Task Status:** Add features to mark tasks as "Pending" or "Completed".
- [ ] **Due Dates:** Incorporate simple deadlines for each task.


