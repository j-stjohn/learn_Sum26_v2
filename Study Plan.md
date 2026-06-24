# 16-Week Summer 2026 Self-Study Plan

### Focus Areas

- Intro Computer Science
    
- Programming Foundations
    
- Linux / Operating Systems
    
- Networking Fundamentals
    
- Homelab Systems Administration
    

This outline is designed around:

- ~4 hours/day
    
- 5–6 study days/week
    
- Heavy emphasis on practical application
    
- Your existing homelab and Linux environment
    
- The pace and structure of Harvard University’s CS50x
    

---

# Overall Weekly Structure

### Daily Time Allocation

| Topic                     | Time    |
| ------------------------- | ------- |
| CS50 + Programming        | 1.5 hrs |
| Linux / Operating Systems | 1 hr    |
| Networking                | 45 min  |
| Lab / Notes / Projects    | 45 min  |

[[Weekly Work Template]]

---

# Primary Resources

### Computer Science / Programming

- CS50x
    
- Code
    

### Operating Systems

- How Linux Works
    

### Networking

- Internet Routing Architectures
    

---

# Phase 1 — Computing Foundations

## Weeks 1–4

Goal: Understand how computers actually work underneath the software.

---

# Week 1 — Binary, Logic, and the Terminal

[[Summer26_Week1_ScheduleV1]]
## CS50

- Week 0 lecture
    
- Scratch exercises
    

## Code

Read:

- Chapters 1–5
    

Topics:

- Morse code
    
- Binary systems
    
- Braille
    
- Boolean logic
    
- Relays and switches
    

## Linux

Read:

- Chapters 1–2 of _How Linux Works_
    

Topics:

- Linux philosophy
    
- Shell basics
    
- Filesystem layout
    
- Navigating with bash
    

Lab:

- Build Linux command cheat sheet
    
- Learn:
    
    - `ls`
    - `cd`
    - `cp`
    - `mv`
    - `grep`
    - `find`
    - `nano`
    - `vim`

## Networking

Read:

- Intro + Chapter 1
    

Topics:

- What routing is
    
- Autonomous systems
    
- Internet structure
    

Lab:

- Identify:
    
    - your LAN
        
    - gateway
        
    - subnet
        
    - public IP
        
- Use:
    
    - `ping`
        
    - `traceroute`
        
    - `ip a`
        

---

# Week 2 — Representation of Information

## CS50

- C language intro
    
- Variables
    
- Loops
    
- Conditionals
    

## Code

Read:

- Chapters 6–10
    

Topics:

- ASCII
    
- Encoders
    
- Memory
    
- Circuits
    
- CPU basics
    

## Linux

Read:

- Chapters 3–4
    

Topics:

- Devices
    
- Disks
    
- Partitions
    
- Processes
    

Lab:

- Mount a virtual disk
    
- Explore:
    
    - `/proc`
        
    - `/dev`
        
    - `/etc`
        

## Networking

Read:

- TCP/IP fundamentals
    

Topics:

- IPv4
    
- Packets
    
- Ports
    
- NAT
    

Lab:

- Use:
    
    - `ss`
        
    - `netstat`
        
    - `tcpdump`
        

---

# Week 3 — Algorithms and System Thinking

## CS50

- Algorithms
    
- Arrays
    
- Search/sort
    

## Code

Read:

- Chapters 11–15
    

Topics:

- Logic gates
    
- Adders
    
- ALU concepts
    
- Machine organization
    

## Linux

Read:

- Process management chapters
    

Topics:

- Processes
    
- Services
    
- Daemons
    
- Signals
    

Lab:

- Use:
    
    - `ps`
        
    - `top`
        
    - `htop`
        
    - `systemctl`
        

Build:

- Service monitoring notes
    

## Networking

Topics:

- OSI vs TCP/IP
    
- Switching vs routing
    

Lab:

- Diagram your homelab network
    

---

# Week 4 — Memory and Compilation

## CS50

- Memory
    
- Pointers
    
- Debugging
    

## Code

Read:

- Chapters 16–20
    

Topics:

- RAM
    
- Assemblers
    
- Operating system concepts
    

## Linux

Read:

- Users and permissions
    

Topics:

- chmod
    
- ownership
    
- sudo
    
- groups
    

Lab:

- Create:
    
    - users
        
    - groups
        
    - shared directories
        

## Networking

Read:

- Routing protocols overview
    

Topics:

- BGP basics
    
- Static vs dynamic routing
    

Lab:

- Configure static routes in lab VMs
    

---

# Phase 2 — Systems and Administration

## Weeks 5–8

Goal: Become comfortable managing Linux systems.

---

# Week 5 — Data Structures + Linux Internals

## CS50

- Linked lists
    
- Data structures
    

## Linux

Read:

- Package management
    
- Boot process
    

Topics:

- systemd
    
- GRUB
    
- apt
    
- repositories
    

Lab:

- Install packages
    
- Analyze boot logs
    

## Networking

Topics:

- Subnetting
    

Lab:

- Practice subnet calculations
    

---

# Week 6 — Storage and Filesystems

## CS50

- Hash tables
    
- Tries
    

## Linux

Read:

- Filesystems/storage chapters
    

Topics:

- ext4
    
- mounts
    
- fstab
    
- swap
    

Lab:

- Add virtual disks
    
- Automount storage
    

Project:

- Build centralized storage server
    

## Networking

Topics:

- VLANs
    
- Segmentation
    

Lab:

- VLAN research + diagrams
    

---

# Week 7 — Python and Automation

## CS50

- Python introduction
    

## Linux

Topics:

- Bash scripting
    
- Cronjobs
    
- Logging
    

Lab:

- Improve your restart script from your homelab notes
    
- Add:
    
    - logging
        
    - failure handling
        
    - notifications
        

Project:

- Automated backup scripts
    

## Networking

Topics:

- DNS
    
- DHCP
    

Lab:

- Configure local DNS service
    

---

# Week 8 — Web and Services

## CS50

- HTML
    
- CSS
    
- Flask basics
    

## Linux

Topics:

- Web servers
    
- Reverse proxies
    

Lab:  
Install:

- NGINX
    
- Apache
    

Project:

- Self-hosted dashboard
    

## Networking

Topics:

- Ports
    
- Firewalls
    
- ACLs
    

Lab:

- Configure:
    
    - `ufw`
        
    - SSH hardening
        

---

# Phase 3 — Infrastructure and Networking

## Weeks 9–12

Goal: Think like a junior systems administrator / infrastructure engineer.

---

# Week 9 — SQL and Databases

## CS50

- SQL
    
- Databases
    

## Linux

Topics:

- MariaDB/PostgreSQL
    

Lab:

- Create database server
    
- Back up databases
    

## Networking

Read:

- BGP deeper dive
    

Topics:

- Path selection
    
- Peering
    

Goal:

- Understand _why_ the internet works
    

---

# Week 10 — Security Foundations

## CS50

- Cybersecurity concepts
    

## Linux

Topics:

- SSH security
    
- PAM
    
- Fail2Ban
    
- Logs
    

Lab:

- Harden your server
    

Project:

- Create security baseline checklist
    

## Networking

Topics:

- VPNs
    
- Encryption
    
- TLS
    

Lab:

- Deploy WireGuard VPN
    

---

# Week 11 — APIs and Services

## CS50

- APIs
    
- JSON
    

## Linux

Topics:

- Docker basics
    
- Containers
    

Lab:

- Deploy:
    
    - Nextcloud
        
    - Jellyfin
        
    - Homepage dashboard
        

## Networking

Topics:

- Load balancing
    
- Reverse proxy architecture
    

---

# Week 12 — Infrastructure Operations

## CS50

- Final project planning
    

## Linux

Topics:

- Monitoring
    
- Metrics
    
- Backups
    

Lab:  
Install:

- Grafana
    
- Prometheus
    

Project:

- Monitor homelab resources
    

## Networking

Topics:

- Redundancy
    
- High availability
    

---

# Phase 4 — Integration and Real Systems

## Weeks 13–16

Goal: Build confidence operating real infrastructure.

---

# Week 13 — Virtualization

## Linux

Topics:

- KVM
    
- LXC
    
- Containers vs VMs
    

Lab:

- Expand your Proxmox VE environment
    

Project:

- Multi-service deployment
    

## Networking

Topics:

- Virtual networking
    
- Bridges
    

---

# Week 14 — Automation

## Linux

Topics:

- Infrastructure scripting
    

Learn:

- Python automation
    
- SSH automation
    
- rsync
    

Project:

- Automated backup pipeline
    

---

# Week 15 — Documentation and Architecture

## Goal

Document everything.

Create:

- Network diagrams
    
- Server inventory
    
- Backup procedures
    
- Recovery procedures
    

Use:

- Obsidian
    
- Markdown
    
- Git
    

---

# Week 16 — Final Infrastructure Project

## Build a Complete Homelab Platform

Suggested Stack:

- Reverse proxy
    
- Dashboard
    
- NAS
    
- Monitoring
    
- DNS
    
- VPN
    
- Backups
    
- Documentation
    

## Final Deliverables

- Architecture diagram
    
- Written documentation
    
- Git repository
    
- Backup/recovery plan
    

---

# Recommended Outcome by End of Summer

You should comfortably understand:

- Linux administration
    
- Basic networking
    
- Programming fundamentals
    
- Bash scripting
    
- Python basics
    
- Routing concepts
    
- Infrastructure architecture
    
- Homelab operations
    
- Documentation practices
    

You would be approaching the skill level of:

- junior Linux administrator
    
- junior infrastructure technician
    
- entry-level DevOps learner
    
- advanced homelab operator
    

---

# Strong Recommendation for Your Situation

Your notes already show systems thinking and operational curiosity:

- SSH hardening
    
- cron automation
    
- off-LAN connectivity
    
- backup logic
    
- process logging
    

That is exactly how good infrastructure engineers begin learning: solving real operational problems repeatedly.

Your biggest advantage right now is:

1. consistency
    
2. documentation
    
3. building real systems
    

Not speed.