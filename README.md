# 🏨 **HOSTEL / ACCOMMODATION MANAGEMENT SYSTEM (C Programming)**

## 📄 **ABSTRACT**

The **Hostel / Accommodation Management System** is a terminal-based application written in **C** that allows users to efficiently manage hostel room allocations and student/resident records.  
It provides functionalities such as adding residents, allotting rooms, viewing details, searching records, updating information, and deleting entries.  
All records are stored persistently in a binary file **(hostel.txt)** to ensure data remains saved across program executions.

This project demonstrates essential C programming concepts such as **structures, file handling, modularization, loops, and menu-driven design** — making it ideal for engineering students, academic coursework, and beginners.

---

## ✨ **FEATURES**

### **Core Functionalities**
- 🏠 Add new resident records (ID, Name, Age, Room No, Contact, Duration)  
- 📋 Display all residents and room details in a formatted table  
- 🔍 Search resident by **ID** or **Room Number**  
- ✏️ Update resident information  
- ❌ Delete resident records  
- 💾 Persistent storage using **hostel.txt (binary file)**  
- 🖥️ Fully terminal-based, menu-driven interface  
- 👨‍💻 Beginner-friendly code structure  
- ⚙️ Auto-creates data file if missing  
- ⚠️ Basic input validation & error handling  

---

## 🛠️ **TECHNICAL REQUIREMENTS**

### **System Requirements**
- Windows / Linux / macOS  
- Terminal or Command Prompt  
- Minimum **4 MB RAM**  
- Minimal disk space for **hostel.txt**

### **Software Requirements**
- C Compiler: **GCC / MinGW / MSVC / Clang**  
- Editor/IDE: **VS Code, Code::Blocks, Dev-C++, Sublime Text**  
- Optional: Make utility  

### **Programming Requirements**
- Language: **C**  
- Standards: **C89 / C99 / C11**  
- Header Files Required:
  - `stdio.h`
  - `stdlib.h`
  - `string.h`

### **File Handling**
- Read/Write access to directory  
- Records stored in **binary format**  
- File auto-creates if missing  

---

## 📌 **FUNCTIONAL REQUIREMENTS**

### **User Interface**
- Clean menu-driven CLI  
- Input validation  

---

## 🏨 **Hostel / Resident Operations**

### ➕ **Add Resident**
- Enter ID, Name, Age, Room No., Contact, Duration  
- Saved in **hostel.txt**

### 📋 **Display All Residents**
- Shows all occupancy details  
- Displays room availability  

### 🔍 **Search Resident**
- Search by **Resident ID** or **Room Number**

### ✏️ **Update Resident**
- Modify Name, Age, Room No., Contact, Duration  

### ❌ **Delete Resident**
- Permanently delete record  
- Uses temporary-file safe method  

---

## 🔧 **DATA MANAGEMENT**
- Binary storage for fast access  
- Safe update & delete handling  
- Robust error checks  
- Works even if file is missing/empty  

---

## 🔄 **PROGRAM FLOW**
- Repeated menu loop  
- Allows multiple operations  
- Exit option included  
- Clear success/error messages  

---

## ▶️ **RUNNING THE PROGRAM**

### **1️⃣ Compile**
```bash
gcc hostel.c -o hostel
2️⃣ Run
Linux / macOS:
bash
Copy code
./hostel
Windows:
Copy code
hostel.exe
3️⃣ Data File
Automatically creates hostel.txt

Stores all resident & room data in binary format

##📸 Screenshots (Optional)
Add Resident
<img width="437" height="391" alt="image" src="https://github.com/user-attachments/assets/ed5ea0d0-8fae-4573-99e0-7d22cdcfdc0d" />


Display Residents
<img width="377" height="383" alt="image" src="https://github.com/user-attachments/assets/a5cc718d-b315-4936-847b-0489bc675fd3" />


Search Resident
<img width="380" height="398" alt="image" src="https://github.com/user-attachments/assets/ba7b60e3-e133-4f36-9b23-890736cb2226" />


Vacate room 
<img width="352" height="312" alt="image" src="https://github.com/user-attachments/assets/e4165aae-c463-4110-8b9e-9f51cfb0b507" />




Exit Program
<img width="586" height="267" alt="image" src="https://github.com/user-attachments/assets/3e3665cf-99e8-4a82-bbb4-f23233f326d4" />




📝 Author
P. Sasidhar
