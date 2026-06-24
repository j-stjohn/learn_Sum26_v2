# Chapter 1
---------------------------------

-  Code is useful as it allows for communication in difficult than normal circumstances
-  Auditory code or speaking is not always available to use.
-  There fore a solution to being able to communicate and transmit information must be made for specific circumstances.

> Assuming a situation when in your youth you wish to communicate with your friend beyond the  allotted hours of which one is allowed to be awake.
> 
> Luckily, being quick witted you realize through trial and error you can communicate with your friend using flashlights.
> 	Specifically blinking flashlights in the method of *Morse Code* allows for the ability to communicate beyond bedtime.

This ability for communication is the beginnings of understanding coding with regards to computation.

*Morse Code Chart*
![[Pasted image 20260515141201.png]]

# Chapter 2

Morse code uses a binary method of transmitting information such as letters. This binary method allows for advanced characters when taken beyond 4 dots/dashes.
5 represent numbers
6 represent punctuation
	64 different code options

*A more enlightening understanding of how the Morse Code if aligned, this looks very similar to ASCII. Most likely ASCII is a continuation of Morse Code
![[Pasted image 20260515141416.png]]


# Chapter 3 Braille and Binary Code
---

> Rudimentary braille was originally invented for the French Military to be able to communicate along the battlefield when weather like rain would tarnish notes.
> 	This allowed for quick short messages to be relayed along the battlefield
> Louis Braille took these methodology to further expand it into a method for communication for the blind to be able to read.

It is interesting to note that braille is in fact binary.  Modern braille is a 2 x 3 grid of dots either raised or un-raised.  This allows for 64 possible combinations for letters.

> Modern braille has been adjusted for paper saving and readability. Instead of writing each individual letter in a word, the chart has been replaced with logic that if only one character is present then it represents the word, not the letter. Multi-character writings represent individual characters per character.

```Braile
10   10 10 10   01 01   10   11 10 11 11 10 10 10 10 01
00   10 01 01   10 10   11   01 00 01 11 01 11 01 00 10
00   00 00 00   00 10   10   00 00 10 00 00 10 10 11 10
```  
"A bee is rather dangerous "

> A single character represents the word, whereas more than one character represents those letters.

But with Grade 2 Braille we can use combinations of characters to shorten space by assigning certain common contractions

```Braile
10   10 10 10   01 01   10   11 10 11 11 11 10 01   00
00   10 01 01   10 10   11   01 00 01 11 11 11 10   11
00   00 00 00   00 10   10   00 00 10 00 01 01 10   01
```
"A bee is rather dangerous."

# Code — Chapter 4
## Anatomy of a Flashlight

### Core Concept
- A flashlight demonstrates a simple electrical circuit.
- Electrical systems require:
	- Power source
	- Conductive path
	- Load/device
	- Switch
- The flashlight is used to explain:
	- Circuit flow
	- Electrical connectivity
	- Open vs closed circuits
	- Physical switching

## Main Components

### Batteries
- Provide electrical energy.
- Convert chemical energy into electrical energy.
- Have:
	- Positive terminal
	- Negative terminal

### Conductors
- Metal components carry electricity.
- Conductive materials allow electron movement.
- Examples:
	- Springs
	- Metal strips
	- Flashlight casing

### Lamp/Bulb
- Converts electrical energy into light.
- Acts as the load in the circuit.

#### Filament
- Thin wire inside bulb.
- Resistance creates heat and light.

### Switch
- Controls whether the circuit is complete.

#### Open Circuit
- Broken electrical path.
- No current flow.
- Flashlight remains off.

#### Closed Circuit
- Complete electrical path.
- Current flows through system.
- Flashlight turns on.

## Circuits

### Definition
- A circuit is a complete loop that allows electricity to travel.

### Requirements
- Continuous conductive path.
- Electricity must return to the battery.

## Electrical Flow
- Electricity moves through the circuit from one battery terminal to the other.
- Current requires:
	- Energy source
	- Conductive path
	- Closed loop

## Importance of Switching
- Switches physically connect or disconnect conductors.
- Demonstrates binary physical states:
	- On / Off
	- Open / Closed
	- Conducting / Not Conducting

## Relationship to Computing
- Computers rely on billions of electronic switches.
- Transistors function similarly conceptually:
	- Enabled
	- Disabled
	- 1 / 0

## Key Takeaways
- Electrical devices require complete circuits.
- Switches control current flow.
- Binary physical states are foundational to computing.
- Flashlights are simplified examples of logic and switching systems.

## Vocabulary
- Circuit
- Conductor
- Load
- Filament
- Open circuit
- Closed circuit
- Voltage
- Switch

## Concepts to Understand
- Why electricity requires a complete loop
- Difference between open and closed circuits
- Relationship between switching and binary logic
- How simple electrical systems relate to computing hardware

# Chapter 5: Seeing Around Corners

### The Telegraph as a Model

- Petzold uses the **telegraph** as the foundational example of encoding and transmitting information electrically.
- A basic telegraph circuit consists of a **battery**, **wire**, and a **lightbulb** (or buzzer) at the receiving end.
- Closing a switch completes the circuit → light turns on → signal received.

### Two-Way Communication

- A single wire cannot support two-way communication on its own without a **shared ground wire**.
- The **earth/ground** acts as a return path, allowing two people to communicate bidirectionally with just two wires instead of four.
- Ground as a shared reference point reduces the number of required physical connections.

### Morse Code

- Morse code is a **binary encoding system** — signals are either on or off (dot or dash, short or long).
- Demonstrates that **complex information** (letters, words) can be encoded using only two states.
- Early example of **binary communication**, a concept that underpins all of computing.

### Key Takeaways

- Binary states (on/off) are sufficient to represent any information if a proper encoding system is defined.
- Physical infrastructure (wires, ground) can be shared and minimized through clever design.
- Encoding and decoding are two sides of every communication system.

---

# Chapter 6: Logic with Switches

### Series Circuits → AND Logic

- Two switches wired **in series**: both must be closed for current to flow.
- Equivalent to the logical **AND** operation.
- `Output = A AND B` → light only turns on if switch A **and** switch B are both closed.

### Parallel Circuits → OR Logic

- Two switches wired **in parallel**: either one being closed allows current to flow.
- Equivalent to the logical **OR** operation.
- `Output = A OR B` → light turns on if switch A **or** switch B (or both) are closed.

### Combining Circuits

- Series and parallel arrangements can be **combined** to represent more complex logical expressions.
- Example: `(A AND B) OR C` — two switches in series, then a third in parallel with that pair.
- Any logical expression can be mapped to a physical switch arrangement.

### Boolean Algebra Connection

- George Boole's algebra (mid-1800s) describes logic using **true/false** values.
- Claude Shannon (1937) showed that Boolean algebra maps directly onto **electrical relay circuits**.
- Foundational insight of digital computing: logic and electricity are the same thing.

### NOT Logic (Inversion)

- A normally-closed switch (open when activated) performs **NOT** logic.
- `Output = NOT A` → light is on by default, turns off when the switch is pressed.
- Inversion is essential for building more complex logic.

### Key Takeaways

- AND, OR, and NOT are the **three fundamental logic gates**.
- Any logical statement can be built from combinations of these three.
- The equivalence of switch circuits and Boolean logic is the conceptual backbone of all digital electronics.