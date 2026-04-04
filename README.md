# vehicle-fleet-management-system
📌 Project Title
Vehicle Fleet Management System using CRUD Operations with Dynamic Memory Allocation in C
Team Members
Student1 M.Sai Charan
Student2 P.Vishnu vardhan

📌 Problem Statement
In traditional systems, managing vehicle records manually is inefficient, error-prone, and time-consuming. There is a need for a system that can efficiently store, retrieve, update, and delete vehicle information dynamically without fixed memory limits.

This project aims to develop a menu-driven Vehicle Fleet Management System using dynamic memory allocation to perform CRUD operations efficiently.

🌍 Real-world Application Vehicle tracking systems Transport and logistics management Rental vehicle services Fleet maintenance systems Taxi and delivery services

This concept is widely used in database systems and real-time applications where data size is not fixed.

🧠 Data Structure Used 👉 Dynamic Memory Allocation (Structures)

Each record represents a vehicle containing:
Vehicle ID Name Type Mileage Pointer to next record / dynamic memory block Why Dynamic Memory? Dynamic size (no limit like arrays) Efficient insertion and deletion Memory allocated at runtime

⚙️ System Design
Components: Structure (struct Vehicle) Dynamic Memory Allocation Functions
Functions: Add Vehicle (Create) Display (Read) Update Vehicle Delete Vehicle Search Vehicle
Flow: User selects operation from menu Corresponding function is called Data is dynamically modified

🧩 Algorithm
Add Vehicle (Create) Allocate memory using malloc()/realloc() Input vehicle details Insert record
Display (Read) Traverse all records Print each record
Update Vehicle Input vehicle ID Traverse records If found → update details Else → show not found
Delete Vehicle Input vehicle ID Traverse records Adjust memory Free memory using free()
Search Vehicle Input vehicle ID Traverse records If found → display details Else → not found

💻 Implementation Language: C
Concepts Used: struct Pointers malloc() realloc() free() Functions (modular programming) Menu-driven logic

<img width="689" height="392" alt="Screenshot 2026-04-04 084621" src="https://github.com/user-attachments/assets/ecba54e6-aff1-43a9-8f81-86519d276e99" />
<img width="597" height="362" alt="Screenshot 2026-04-04 084702" src="https://github.com/user-attachments/assets/bc446405-5273-402b-b9b7-a43337ed607d" />
<img width="558" height="294" alt="Screenshot 2026-04-04 084726" src="https://github.com/user-attachments/assets/ceae1599-7fb1-4435-8fef-2a13e748972a" />
<img width="624" height="383" alt="Screenshot 2026-04-04 084737" src="https://github.com/user-attachments/assets/41ef0004-f6fc-4fd9-8b5a-ec8ed045f419" />
<img width="579" height="423" alt="Screenshot 2026-04-04 084814" src="https://github.com/user-attachments/assets/90ec4324-5fa5-4396-94b7-b0b39b9496d0" />
<img width="525" height="237" alt="Screenshot 2026-04-04 084823" src="https://github.com/user-attachments/assets/2805f180-217d-4594-b5c4-f754d604d47a" />


✅ Conclusion
This project demonstrates how dynamic memory allocation can be used to efficiently manage data in real-time applications. It provides a flexible and scalable solution for handling vehicle records compared to static memory systems.

