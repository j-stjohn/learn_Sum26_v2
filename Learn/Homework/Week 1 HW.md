# Week 1 Homework Assignment
## CSCI 101 • SYS 101 • NET 101
### Theme: Binary, Logic, and the Terminal
### Estimated Time: 6–10 Hours (Completed Throughout the Week)

---

# Notes

## CSCI 101

-  [[Code]]
-  [[CS50 Notes]]

## SYS 101

-  [[Notes for How Linux Works]]

## NET 101
-   [[Notes for Internet Routing Architectures]]

---
# Assignment Overview

This week's homework is designed to reinforce the core concepts introduced during Week 1:

- How computers represent information using binary
- Basic programming concepts in C
- Linux command-line navigation
- Internet and home network fundamentals
- Technical note-taking and documentation

The assignment consists of:

1. Written Questions
2. Practical Linux Exercises
3. Networking Exercises
4. Mini Project: Personal Computing and Network Documentation Portfolio

---

# Part I — Computer Science Theory (CSCI 101)

## Written Questions

Answer the following in complete sentences in your `Obsidian` notes.

### Binary and Logic
1. Why do computers use binary instead of decimal?
	-  Computers use binary as machine code. The CPU understands two states, on and off. We convert our decimal numbers into binary.
2. Convert the following decimal numbers to binary:
   
   - 5
    ``` Math
	    5 / 2 = 2 r 1
	    2 / 2 = 1 r 0
	    1 / 2 = 0 r 1
	```
	101

   - 13
	```Math
	    13 / 2 = 6 r 1
	    6 / 2 = 3 r 0
	    3 / 2 = 1 r 1
	    1 / 2 = 0 r 1
	```
	1101
   
   - 42
	```Math
		64 32 16 8 4 2 1
		 0  1  0 1 0 1 0
		 
		 42 / 2 = 21 r 0
		 21 / 2 = 10 r 1
		 10 / 2 = 5 r 0
		 5 / 2 = 2 r 1
		 2 / 2 = 1 r 0
		 1 / 2 = 0 r 1
	```
	
   
   - 255
	```Math
		255 / 2 = 127 r 1
		127 / 2 = 63 r 1
		63 / 2 = 31 r 1
		31 / 2 = 15 r 1
		15 / 2 = 7 r 1
		7 / 2 = 3 r 1
		3 / 2 = 1 r 1
		1 / 2 = 0 r 1
	```
	11111111
	
1. Convert the following binary numbers to decimal:
   - `1010`
	```Math
	8 4 2 1
	1 0 1 0
	
	8 + 2 = 10
	```
	10
   - `11111111`
```Math
  128 64 32 16 8 4 2 1
   1   1  1  1 1 1 1 1

  = 255
```
   - `100000`
```Math
  128 64 32 16 8 4 2 1
   0   0  1  0 0 0 0 0

  = 32
```
   
1. Explain the difference between hardware and software.
	-  Hardware are the physical components subject to physics transmitting electrons at the direction and conditions of software. Software then intercepts those electrons in the form of data and conducts processes.
2. What is an algorithm?
	-  An algorithm is the instructions to complete a task or process. It is the logic on how to do something.
3. What is a compiler?
	-  A compiler takes the source code and converts it into machine code for the system to use and operate with. 
4. What is the purpose of header files in C?
	-  A header file provides the short commands and functions of certain libraries within C & C++. They end in `.h`
5. What is the difference between source code and machine code?
	-  Source code is the readable human code in which those instructions are then compiled into binary machine code for which the system hardware will be able to understand.

---

# Part II — Linux Systems Administration (SYS 101)

## Command-Line Exercises

Create a directory named `week1_lab`.

Inside it, perform the following tasks:

1. Create three files:
   - `notes.txt`
   - `commands.txt`
   - `network.txt`

2. Copy `notes.txt` to `backup_notes.txt`.

3. Rename `commands.txt` to `linux_commands.txt`.

4. Display the contents of all `.txt` files.

5. Search all files for the word `Linux`.

6. Find all `.txt` files in the directory.

7. Remove `backup_notes.txt`.

## Commands to Practice
- `pwd`
- `ls -la`
- `mkdir`
- `touch`
- `cp`
- `mv`
- `cat`
- `grep`
- `find`
- `rm`

---

# Part III — Networking Fundamentals (NET 101)

## Networking Questions
1. What is an IP address?
2. What is the difference between a private IP and a public IP?
3. What is a router?
4. What is an Autonomous System (AS)?
5. What is the purpose of `traceroute`?
6. What is the default gateway on your network?

## Command Output Collection

Run and save the output of:

- `ip a`
- `ip route`
- `ping -c 4 8.8.8.8`
- `traceroute 8.8.8.8`
- `curl https://ipinfo.io/ip`

---

# Part IV — Mini Project
# Personal Computing and Network Documentation Portfolio

## Objective
Create a professional technical document that explains your computing environment and home network.

## Required Sections

### 1. Computer Hardware Summary
- CPU
- RAM
- Storage
- Operating system

### 2. Linux Command Cheat Sheet
Document each command learned with a brief explanation.

### 3. Home Network Diagram
Include:
- ISP
- Modem/ONT
- Firewall/router
- Switches
- Access points
- Servers
- Personal devices

### 4. How Data Travels to the Internet
Write a one-page explanation describing what happens when you visit a website.

### 5. Reflection
Discuss:
- What was most interesting
- What was most difficult
- How these topics relate to your homelab and career goals

---

# Deliverables

Create the following files in your `Obsidian` vault:

- `Week 1 Homework.md`
- `Linux Command Cheat Sheet.md`
- `Home Network Diagram`
- `How Data Travels to the Internet.md`

---

# Optional Challenge Problems

1. Write a Bash script that creates the `week1_lab` directory automatically.
2. Convert decimal numbers 1–32 to binary.
3. Research your ISP's Autonomous System Number (ASN).

---

# Grading Rubric (Self-Evaluation)

| Category                       |  Points |
| ------------------------------ | ------: |
| Computer Science Questions     |      25 |
| Linux Lab                      |      25 |
| Networking Questions           |      20 |
| Mini Project                   |      25 |
| Organization and Documentation |       5 |
| **Total**                      | **100** |

---

# Learning Outcomes

Upon completion, you should be able to:

- Explain binary representation and basic computing concepts
- Navigate Linux confidently from the command line
- Describe the major components of a network
- Document a technical environment professionally
- Connect foundational theory to practical systems

---

# Submission Instructions

Store all work in your `Summer 2026` folder and mark the following checklist:

- [ ] Written questions completed
- [ ] Linux lab completed
- [ ] Networking questions answered
- [ ] Mini project completed
- [ ] Reflection written
- [ ] Notes organized in Obsidian