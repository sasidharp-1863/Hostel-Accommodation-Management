🏨 HOSTEL MANAGEMENT SYSTEM (C Programming)
📄 ABSTRACT

The Hostel Management System is a terminal-based application written in C that allows users to efficiently manage hostel accommodation records.
It provides essential functionalities such as adding, viewing, searching, updating, and deleting hostel resident details.

All records are stored persistently in a binary file (hostel.txt) ensuring the data remains saved across program runs.

This project demonstrates key C programming concepts including structures, file handling, control flow, loops, and modular programming, making it suitable for beginners, academic projects, and practical learning.

✨ FEATURES
Core Functionalities

➕ Add new hostel resident records (Room No, Name, Age, Course, Mobile No)
📋 Display all resident records in a formatted table
🔍 Search resident by Room Number
✏️ Update existing resident information
❌ Delete hostel resident records
💾 Persistent data storage using binary file (hostel.txt)
🖥️ Fully terminal-based, menu-driven interface
👨‍💻 Beginner-friendly modular code
⚙️ Auto-creates the data file if missing
⚠️ Includes basic input validation & error handling

🛠️ TECHNICAL REQUIREMENTS
System Requirements

Operating System: Windows / Linux / macOS

Terminal or Command Prompt

At least 4 MB RAM

Minimal disk space for hostel.txt

Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

Code Editor or IDE: VS Code, Code::Blocks, Dev-C++, etc.

Optional: Make utility (if using a Makefile)

Programming Requirements

Language: C

Standard Support: C89 / C99 / C11

Required header files:

stdio.h

stdlib.h

string.h

File Handling

Read/Write permissions in working directory

Records stored in binary format (hostel.txt)

File auto-created if not found

📌 FUNCTIONAL REQUIREMENTS
User Interface

Terminal-based Command Line Interface

Clear, menu-driven navigation

Validates all user input

🏨 Hostel Resident Operations
➕ Add Resident

Enter Room No, Name, Age, Course, Mobile No

Saved in hostel.txt

📋 Display Residents

Shows all hostel resident records in a clean table format

🔍 Search Resident

Search using unique Room Number

✏️ Update Resident

Modify Name, Age, Course, Mobile No, etc.

❌ Delete Resident

Permanently removes a resident record

Uses temporary file method for safe deletion

🔧 DATA MANAGEMENT

Binary file storage → Fast and efficient

Safe updates and deletions

Handles empty/missing file gracefully

🔄 PROGRAM FLOW

Menu runs in a loop

Exit option included

Shows clear success/error messages

▶️ Running the Program
1️⃣ Compile
gcc hostel.c -o hostel

2️⃣ Run
Linux / macOS
./hostel

Windows
hostel.exe

3️⃣ Data File

Automatically creates hostel.txt

Stores all resident data in binary form

📸 Screenshots 
Add Resident

![screenshot](https://github.com/sasidharp-1863/Hostel-Accommodation-Management/blob/main/Screenshot%202025-11-21%20095845.png?raw=true)



Display Residents

![screenshot](https://github.com/sasidharp-1863/Hostel-Accommodation-Management/blob/main/Screenshot%202025-11-21%20100248.png?raw=true)


Search Resident

![screenshot](https://github.com/sasidharp-1863/Hostel-Accommodation-Management/blob/main/Screenshot%202025-11-21%20100344.png?raw=true)


Update Resident


Delete Resident

Exit
(Add screenshot)

📝 Author

P. Sasidhar
