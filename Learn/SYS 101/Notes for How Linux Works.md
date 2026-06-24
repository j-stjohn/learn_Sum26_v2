Machine Specs#Gaming Rig (The Monster)# How Linux Works
## What Every Superuser Should Know

---

# Chapter 1 - The Big Picture

Linux is very complicated, like all operating systems, but it can be compared to a car. You do not need to understand every finite detail related to a car in order to drive it safely down the street. The same applies to Linux.

A passenger, like a normal user, only needs a basic understanding of the car’s operations and methods. The driver, however, requires a deeper understanding because obstacles may require changes in how the vehicle operates.

Software developers use **abstraction** as a tool when building operating systems and applications. Not every system, subsystem, module, or component is considered internally at all times; instead, developers often interact with them externally through interfaces and behaviors.

---

## 1.1 Levels and Layers of Abstraction in a Linux System

Components in Linux are arranged in layers or levels.

- Applications such as web browsers and games sit at the top layer.
- At the bottom layer are the physical hardware components and memory — the raw `0s` and `1s`.
- The operating system occupies the layers in between.

A Linux system is divided into three primary levels:

1. Hardware
2. Kernel
3. User Processes

### Kernel vs User Processes

#### Kernel Mode

- The kernel runs in **kernel mode**.
- Code in kernel mode has unrestricted access to:
  - The processor
  - Main memory
- This level of access is powerful but dangerous.
- A faulty kernel process can crash the entire operating system.
- The memory area where the kernel operates is called **kernel space**.

#### User Mode

- User processes run in **user mode**.
- User mode restricts access to:
  - Memory
  - CPU operations
- User processes operate in **user space**.
- This separation prevents failures from spreading.

> Example: If a web browser crashes, the calculator application should continue functioning normally.

---
## 1.2 Hardware — Understanding Main Memory

Main memory is one of the most important components of a computer system.

- It stores raw bits.
- Processes and kernels are ultimately large collections of bits.
- The CPU operates on memory by:
  - Reading instructions
  - Writing data back into memory

### State

A **state** refers to a particular arrangement of bits.

Examples:

```text
0110
0001
1011
```

Each arrangement represents a different state.

---
## 1.3 The Kernel

The kernel operates directly with main memory.

Its task is to:

- Split memory into subdivisions
- Maintain system state information


#### Four General Systems Managed by the Kernel

##### Processes

The kernel decides which processes are allowed to use the CPU.

##### Memory

The kernel tracks:

- Used memory
- Shared memory
- Free memory

##### Device Drivers

The kernel acts as the interface between:

- Hardware
- Processes

##### System Calls and Support

Processes communicate with the kernel through **system calls**.

---

### 1.3.1 Process Management

Process management involves:

- Starting processes
- Pausing processes
- Resuming processes
- Terminating processes

Starting and terminating processes are relatively simple concepts. CPU scheduling is more complex.

#### Simple Single-Core CPU

A single-core CPU can process only one task at a time.

The CPU rapidly switches between processes in fractions of a second. This switching process is called:

> **Context Switching**

The kernel allocates a small amount of processing time to each process called a:

> **Time Slice**

Although tasks execute sequentially, the switching happens so quickly that the CPU appears to multitask.

#### How Context Switching Works

1. The CPU interrupts the current process using an internal timer.
2. The CPU switches into kernel mode.
3. Control returns to the kernel.
4. The kernel records the current CPU and memory state.
5. The kernel performs pending system tasks.
6. The kernel selects another ready process.
7. The kernel prepares memory and CPU state for the new process.
8. The kernel assigns a new time slice.
9. The CPU switches back into user mode.
10. Control returns to the selected process.

> “The context switch answers the question of when the kernel runs. It runs between process time slices during a context switch.”

#### Multi-CPU Systems

Multi-CPU systems operate similarly but with additional complexity.

- The kernel does not always need to relinquish control to allow another CPU to run processes.
- Some systems may still coordinate CPUs in this way.

---

### 1.3.2 Memory Management


The kernel also manages memory during context switching.

#### Memory Management Requirements

- The kernel must maintain private memory inaccessible to user processes.
- Each user process requires its own memory section.
- Processes cannot access another process’s private memory.
- Processes may share memory when appropriate.
- Some memory regions may be read-only.
- Systems may use disk storage as auxiliary memory.

Modern CPUs include a:

> **Memory Management Unit (MMU)**

The MMU enables:

> **Virtual Memory**


#### Virtual Memory


Each process behaves as though it has:

- Its own machine
- Unlimited RAM resources

The MMU maintains this illusion.

##### How It Works

- Active portions of a process remain in physical RAM.
- Unused portions may be moved to disk.
- This frees RAM for active tasks.

The kernel continuously updates the MMU memory map depending on the running process.

---

### 1.3.3 Device Drivers and Management

The kernel controls hardware directly because user mode restrictions would limit hardware access.

Example:

- Improper power control from user mode could crash the system.

Different hardware devices use different programming interfaces.

Device drivers:

- Operate at the kernel level
- Provide a consistent interface to user processes

---

### 1.3.4 System Calls and Support

Several kernel features are accessible from user processes.

#### System Calls

Common system calls include:

##### File Operations

System calls are used for:

- Opening files
- Reading files
- Writing files

##### `fork()`

When a process calls:

```c
fork()
```

The kernel creates a nearly identical copy of the process.

##### `exec()`

When a process calls:

```c
exec(program)
```

The kernel starts a new program that replaces the currently running process.

---

Outside of `init`, all user processes begin as a result of:

```c
fork()
```

Processes frequently use:

```c
exec()
```

To start new programs instead of running copied versions of themselves.

#### Example — Running `ls`

```text
shell
 ├─ fork()
 │   └─ copy of shell
 │       └─ exec(ls)
 │           └─ ls
```

#### Pseudo-Devices

The kernel also supports user processes through non-traditional system calls.

One common example is:

> **Pseudo-devices**

Pseudo-devices:

- Behave like hardware devices
- Are implemented entirely in software
- Often run in kernel space for practical reasons

Even when using pseudo-devices, user processes still interact through system calls.


---

---
## 1.4 User Space

The main memory that the kernel allocates for user processes is called user space. Since a process is just a state in memory, user spaces refers to memory for the entire collection of running processes.

Most things in Linux occur in _User Space_. All processes are viewed equally from the kernel’s perspective. There are no rules in user space, just norms followed. Most applications and services write diagnostic messages known as logs. Most programs use the standard syslog service to write log messages, but some prefer logging themselves.

```text
# Typical syslog example:

##  RFC 3164 Example
<34>Oct 3 10:15:32 mymachine su: 'su root' failed for user on /dev/pts/0 

##  RFC 5424 Example
<34>1 2025-01-03T14:07:15.003Z mymachine.example.com su 12345 ID47 - 'su root' failed for user on /dev/pts/0   
```

> **Breakdown of how User Processes work
> 
> - Top - Applications like Web Browsers, human interaction
> - Middle - Utility services to allow applications to work to their fullest. *Mail, print, and database services*
> - Bottom - Basic Services interacting directly with the kernel. *Network Configuration, Communication Bus, Diagnostic Logging*

Categorizing these services can be fluid as something like server management software technically is considered a top level application. It becomes a middle level User Process when its becomes a dependency for another service above it. 
`Think about how you install server plugins while technically the minecraft server itself is the application, it becomes a dependancy for running the minecraft world, plugins, mods etc`

---
## 1.5 Users
---

-  The Linux kernel supports the traditional concept of a `Unix user`
-  A `user` is an entity that can run processes and own files

### **How the Kernel understands and manages users**
 The kernel does not manage `usernames` it manages `userids`
	 simple numeric identifies [[#Chapter 7]]

### **Every user space has a user owner**
Processes are to run *as* the owner
- User may terminate or change process behavior, but cannot interfere with other users processes
- Users may own files and choose whether to share them with other users

### **Users besides the human also exist within the machine**
>[[# Chapter 3]]

#### Root
> is the most important user to understand in the beginning
-  Root has control over other users processes and files
-  Root is known as the *superuser*
-  A person who can operate as root is considered to have *root access* and is an administrator in the traditional Unix sense.
#### Groups
> can also exist, this divides the systems users among a set of other user to be able to share files between each other.

```NOTE
Operating as root can be dangerous. It can be difficult to identify and correct mistakes because the
system will let you do anything, even if what you’re doing is harmful to the system. For this reason,
system designers constantly try to make root access as unnecessary as possible, for example, by
not requiring root access to switch between wireless networks on a notebook. In addition, as
powerful as the root user is, it still runs in the operating system’s user mode, not kernel mode.
```

---
## 1.6 Looking Forward
---
We now have a basic understanding of running the Linux system, now the chapter moving forward is about the basics of using the Linux system.

# Chapter 2 - Basic Commands and Directory Hierarchy
---

## Chapter 2 — Basic Commands and Directory Hierarchy

### Core Concept
- Linux systems are controlled primarily through the shell.
- Most interactions with Linux occur by entering commands.
- Understanding the filesystem is more important than memorizing commands.
- Commands become useful because they allow navigation and manipulation of the filesystem.

## The Shell

### Definition
- The shell is a program that accepts user commands.
- It acts as an interface between the user and the Linux kernel.
- The shell launches programs and returns output.

### Shell Workflow
1. User enters command.
2. Shell interprets command.
3. Shell starts requested program.
4. Program executes.
5. Results are displayed.

## Commands

### General Structure
```bash
command options arguments
```

Example:
```bash
ls -l /home
```

### Components
- Command
	- Program to execute.
- Options
	- Modify behavior.
- Arguments
	- Target of operation.

## Navigating the Filesystem

### Current Working Directory
- Every shell session has a current location.
- Commands operate relative to this location unless told otherwise.

Command:
```bash
pwd
```

### Listing Files
Command:
```bash
ls
```

Purpose:
- Display contents of a directory.

Common options:
- `-l` detailed listing
- `-a` show hidden files

### Changing Directories
Command:
```bash
cd
```

Purpose:
- Move to another directory.

Special Locations:
- `.` current directory
- `..` parent directory
- `~` home directory

## Linux Filesystem Layout

### Design Philosophy
- Linux presents storage as a single directory tree.
- Everything begins at root (`/`).

### Root Directory
```text
/
```

- Top of the filesystem.
- All files and directories descend from root.

### Important Directories

#### /home
- User files and personal data.

#### /etc
- System configuration.

#### /bin
- Essential user programs.

#### /sbin
- Administrative programs.

#### /usr
- Applications and supporting files.

#### /var
- Data that changes frequently.
- Logs, databases, mail.

#### /tmp
- Temporary files.

#### /dev
- Device representations.

#### /proc
- Kernel and process information.

## File Manipulation

### Creating
```bash
touch
mkdir
```

### Copying
```bash
cp
```

### Moving / Renaming
```bash
mv
```

### Removing
```bash
rm
rmdir
```

### Viewing File Contents
```bash
cat
less
```

## Hidden Files

### Definition
- Filenames beginning with a period (`.`).

Examples:
```text
.bashrc
.profile
```

Purpose:
- Store configuration information.
- Reduce visual clutter.

## Obtaining Help

### Manual Pages
Command:
```bash
man
```

Purpose:
- Primary source of Linux documentation.

Example:
```bash
man ls
```

### Command Help
```bash
--help
```

Example:
```bash
ls --help
```

## Efficiency Features

### Tab Completion
- Automatically completes commands and paths.
- Reduces typing and mistakes.

### Command History
- Stores previously executed commands.
- Allows reuse of common commands.

Command:
```bash
history
```

Search:
```text
Ctrl+r
```

## Key Ideas

### Linux is Hierarchical
- Files are organized in a tree structure.
- Every file has a path.

### Everything Has a Place
- System files, user files, logs, and devices each have standard locations.

### Learn Concepts Before Commands
- Commands change over time.
- Filesystem organization remains largely consistent.
- Understanding the hierarchy is more valuable than memorizing syntax.

## Vocabulary
- Shell
- Filesystem
- Directory
- Path
- Root Directory
- Absolute Path
- Relative Path
- Hidden File
- Command
- Argument
- Option

## Concepts to Understand
- How the shell interacts with programs.
- Difference between absolute and relative paths.
- Purpose of major Linux directories.
- Why Linux uses a hierarchical filesystem.
- How users navigate and manipulate files.

This chapter is to give a guide on the Unix commands and utilities that will be referenced many times over the course of this book. 

> We use *Unix* instead of Linux heavily in this chapter for 2 reasons
	1.  Linux is a flavor of Unix originally
	2.  Due to its origins, Unix tends to be the long-term more stable option


# Chapter 3
---
-  Basic tour of device infrastructure in a Linux system. 
-  The methodology of how the kernel works with devices to the user has changed over time.
-  The goal of this chapter is to extract information about the devices

> Understanding the kernel and how it acts with user space upon recieving new devices is important.

## 3.1 Device Files

-  Devices are easy to manipulate in Unix because the kernel treats I/O of device interfaces as files.
-  Device files can be sometimes called *device nodes*

The device files can be broken down into 4 main devices:
1.  Block Device
2.  Character Device
3.  Pipe Device
4.  Socket Device
### Block Device
# Chapter 7
---
