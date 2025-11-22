# 🏨 **HOSTEL MANAGEMENT SYSTEM (C Programming)**

## 📄 **ABSTRACT**

The **Hostel Management System** is a terminal-based application written in **C** that allows users to manage student records efficiently.
It provides essential functionalities such as **adding**,** viewing**, **searching**, **updating**, and deleting hostel resident details.

All records are stored persistently in a binary file (`hostel.txt`) ensuring the data remains saved across program runs.

This project demonstrates key C programming concepts including **structures**, **file handling**, **control flow**, **loops**, and **modular programming**, making it suitable for **beginners**, **academic projects**, and **practical learning**.

---

 ## ✨ **FEATURES**
 
### **Core Functionalities**
- ➕ **Add new hostel resident records** (Room No, Name, Age, Course, Mobile No)
- 📋 **Display all resident records** in a formatted table
- 🔍 **Search resident by Room Number**
- ✏️ **Update existing resident information**
- ❌ **Delete hostel resident records**
- 💾 Persistent data storage using binary file (`hostel.txt`)
- 🖥️ Fully terminal-based, menu-driven interface
- 👨‍💻 Beginner-friendly modular code
- ⚙️ Auto-creates the data file if missing
- ⚠️ Includes basic input validation & error handling
 
---

## 🛠️ **TECHNICAL REQUIREMENTS**

### **System Requirements**
- Operating System: **Windows / Linux / macOS**
- Terminal or Command Prompt
- At least **4 MB RAM**
- Minimal disk space for `hostel.txt`

### **Software Requirements**
- C Compiler: **GCC / MinGW / Clang / MSVC**
- Code Editor or IDE: VS Code, Code::Blocks, Dev-C++, etc.
- Optional: **Make utility** (if using a Makefile)

### **Programming Requirements**
- Language: **C**
- Standard Supported: **C89 / C99 / C11**
- Header files required:
  - `stdio.h`
  - `stdlib.h`
  - `string.h`

### **File Handling**
- Read/Write permissions in working directory
- Records stor-ed in binary format (`hostel.txt`)
- File auto-created if not found

---

## 📌 **FUNCTIONAL REQUIREMENTS**

### **User Interface**
- Terminal-based CLI
- Clean menu-driven navigation
- Validates user input

---

## 🏨 **Hostel Resident Operations**

## ➕ **Add Resident**
- Enter Room No, Name, Age, Course, Mobile No
- Saved in `hostel.txt`

### 📋**Display Residents**
- Shows all hostel resident records in a clean table format

### 🔍 **Search Resident**
- Search using **unique Room Number**

### ✏️ **Update Resident**
- Modify Name, Age, Course, Mobile No, etc.

### ❌ **Delete Resident**
- Permanently removes a resident record using **temporary file method**

### 🔧 **DATA MANAGEMENT**
- Binary file storage → Fast and efficient
- Safe updates and deletions
- Handles empty/missing file gracefully

### 🔄 **PROGRAM FLOW**
- Menu runs in a **loop**
- Exit option included
- Shows clear success/error messages appropriately

---

## ▶️ **Running the Program**

### 1️⃣Compile
```bash
gcc ostel.c -o student
````

### 2️⃣ Run

**Linux / macOS**

```bash
./hostel
```

**Windows**

```bash
hostel.exe
```

### 3️⃣ Data File

*Automatically creates `hostel.txt`
*Stores all resident data in binary form

---

## 📸 **Screenshots (Optional)**

*Add Resident
*<img width="438" height="391" alt="Screenshot 2025-11-21 095845" src="https://github.com/user-attachments/assets/29963e40-938a-452d-b950-ffa47ed30aa7" />

*Display Residents
*<img width="378" height="384" alt="Screenshot 2025-11-21 100248" src="https://github.com/user-attachments/assets/596017d5-3dc5-42b1-939b-445aba6e3d3f" />

*Search Resident
*<img width="380" height="399" alt="Screenshot 2025-11-21 100344" src="https://github.com/user-attachments/assets/5c1c9027-eee9-468b-955d-30b2bdcaa4c9" />

*Vacate room
*<img width="353" height="312" alt="Screenshot 2025-11-21 100618" src="https://github.com/user-attachments/assets/228fb825-3744-487a-b240-21b410cc5428" />

*Exit
*<img width="586" height="267" alt="Screenshot 2025-11-21 100902" src="https://github.com/user-attachments/assets/bd537caf-7fa7-48ef-b6b7-3337a438041b" />


---

##📝 **Author**

**P.Sasidhar**
