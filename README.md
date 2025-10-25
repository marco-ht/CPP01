# CPP Module 01

This repository contains my implementation of **C++ Module 01**, developed as part of the 42 School curriculum. This module focuses on fundamental C++ concepts including memory allocation, pointers to members, references, and switch statements.

**"Memory allocation, pointers to members, references and switch statements"**

## Table of Contents

- [Overview](#overview)
- [General Rules](#general-rules)
- [Exercises](#exercises)
  - [Exercise 00: BraiiiiiiinnnzzzZ](#exercise-00-braiiiiiiinnnzzzz)
  - [Exercise 01: Moar brainz!](#exercise-01-moar-brainz)
  - [Exercise 02: HI THIS IS BRAIN](#exercise-02-hi-this-is-brain)
  - [Exercise 03: Unnecessary violence](#exercise-03-unnecessary-violence)
  - [Exercise 04: Sed is for losers](#exercise-04-sed-is-for-losers)
  - [Exercise 05: Harl 2.0](#exercise-05-harl-20)
  - [Exercise 06: Harl filter](#exercise-06-harl-filter)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Submission and Peer Evaluation](#submission-and-peer-evaluation)
- [Acknowledgments](#acknowledgments)
- [Disclaimer](#disclaimer)
- [License](#license)

## Overview

C++ is a general-purpose programming language created by **Bjarne Stroustrup** as an extension of the C programming language, or "C with Classes". This module builds upon the Object-Oriented Programming concepts introduced in Module 00, diving deeper into memory management and advanced C++ features.

Key topics covered in this module:
- Stack vs heap memory allocation
- Pointers to member functions
- References and their differences from pointers
- The `new` and `delete` operators
- Switch statements
- File manipulation in C++

All exercises must be written in **C++98** and compiled using the appropriate flags.

## General Rules

- **Compilation:**
  - Compile with `c++ -Wall -Wextra -Werror`
  - Code must still compile with `-std=c++98`

- **Formatting & Naming:**
  - Exercises are stored in directories `ex00`, `ex01`, `ex02`, …  
  - Class names in `UpperCamelCase` (e.g., `Zombie`, `Weapon`)  
  - Source files: `ClassName.cpp`  
  - Header files: `ClassName.hpp` or `ClassName.h`  

- **Allowed / Forbidden:**
  - Allowed: most of the C++ standard library (except where explicitly forbidden)
  - Forbidden: external libraries, C++11 or newer, Boost libraries
  - Forbidden functions: `*printf()`, `*alloc()`, `free()`
  - Forbidden keywords: `using namespace <ns_name>`, `friend` (unless explicitly stated)
  - STL containers and algorithms are only allowed starting from Module 08

- **Design Requirements:**
  - Avoid memory leaks when using `new` / `delete`
  - From Module 02 onwards, classes must follow the Orthodox Canonical Form
  - Each header must be self-contained and protected by include guards
  - No function implementations inside headers (except templates)

## Exercises

### Exercise 00: BraiiiiiiinnnzzzZ

**Directory:** `ex00/`  
**Files to turn in:** `Makefile`, `main.cpp`, `Zombie.{h,hpp}`, `Zombie.cpp`, `newZombie.cpp`, `randomChump.cpp`

Implement a `Zombie` class with a private `name` attribute and an `announce()` member function that prints:
```
<name>: BraiiiiiiinnnzzzZ...
```

Implement two functions:
- `Zombie* newZombie(std::string name)` - Creates a zombie on the heap and returns it
- `void randomChump(std::string name)` - Creates a zombie on the stack and makes it announce itself

**Key Learning:** Determine when it's better to allocate zombies on the stack versus the heap. Zombies must be properly destroyed with appropriate destructor messages.

### Exercise 01: Moar brainz!

**Directory:** `ex01/`  
**Files to turn in:** `Makefile`, `main.cpp`, `Zombie.{h,hpp}`, `Zombie.cpp`, `zombieHorde.cpp`

Implement the following function:
```cpp
Zombie* zombieHorde(int N, std::string name);
```

This function must allocate `N` Zombie objects in a single allocation, initialize them with the given name, and return a pointer to the first zombie.

**Key Learning:** Array allocation with `new[]` and proper cleanup with `delete[]`.

### Exercise 02: HI THIS IS BRAIN

**Directory:** `ex02/`  
**Files to turn in:** `Makefile`, `main.cpp`

Write a program that contains:
- A string variable initialized to "HI THIS IS BRAIN"
- `stringPTR`: a pointer to the string
- `stringREF`: a reference to the string

The program must print the memory addresses and values of all three.

**Key Learning:** Understand the relationship between pointers and references.

### Exercise 03: Unnecessary violence

**Directory:** `ex03/`  
**Files to turn in:** `Makefile`, `main.cpp`, `Weapon.{h,hpp}`, `Weapon.cpp`, `HumanA.{h,hpp}`, `HumanA.cpp`, `HumanB.{h,hpp}`, `HumanB.cpp`

Implement a `Weapon` class with:
- Private attribute `type` (string)
- `getType()` - returns a const reference to type
- `setType()` - sets the type

Create two classes: `HumanA` and `HumanB`. Both have a weapon and name, and an `attack()` function that displays:
```
<name> attacks with their <weapon type>
```

**Key differences:**
- `HumanA` takes the Weapon in its constructor and is always armed
- `HumanB` may not always have a weapon

**Key Learning:** When to use pointers versus references for class attributes.

### Exercise 04: Sed is for losers

**Directory:** `ex04/`  
**Files to turn in:** `Makefile`, `main.cpp`, `*.cpp`, `*.{h,hpp}`  
**Forbidden functions:** `std::string::replace`

Create a program that takes three parameters: a filename, and two strings `s1` and `s2`.

The program must:
- Open the file `<filename>`
- Copy its content into a new file `<filename>.replace`
- Replace every occurrence of `s1` with `s2`

**Key Learning:** File manipulation in C++ and string processing without using forbidden functions.

### Exercise 05: Harl 2.0

**Directory:** `ex05/`  
**Files to turn in:** `Makefile`, `main.cpp`, `Harl.{h,hpp}`, `Harl.cpp`

Create a `Harl` class with four private member functions:
- `void debug(void)`
- `void info(void)`
- `void warning(void)`
- `void error(void)`

And one public member function:
- `void complain(std::string level)`

**Log Levels:**
- **DEBUG**: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
- **INFO**: "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
- **WARNING**: "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."
- **ERROR**: "This is unacceptable! I want to speak to the manager now."

**Key Learning:** Use pointers to member functions instead of if/else chains.

### Exercise 06: Harl filter

**Directory:** `ex06/`  
**Files to turn in:** `Makefile`, `main.cpp`, `Harl.{h,hpp}`, `Harl.cpp`

Create a program that takes a log level as a parameter and displays all messages from that level and above.

Example:
```sh
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years, whereas you started working here just last month.

[ ERROR ]
This is unacceptable! I want to speak to the manager now.
```

**Key Learning:** Use the switch statement for filtering logic.

*Note: This exercise is optional and not required to pass the module.*

## Project Structure

```
CPP01/
├── ex00/
│   ├── Makefile
│   ├── main.cpp
│   ├── Zombie.hpp
│   ├── Zombie.cpp
│   ├── newZombie.cpp
│   └── randomChump.cpp
├── ex01/
│   ├── Makefile
│   ├── main.cpp
│   ├── Zombie.hpp
│   ├── Zombie.cpp
│   └── zombieHorde.cpp
├── ex02/
│   ├── Makefile
│   └── main.cpp
├── ex03/
│   ├── Makefile
│   ├── main.cpp
│   ├── Weapon.hpp
│   ├── Weapon.cpp
│   ├── HumanA.hpp
│   ├── HumanA.cpp
│   ├── HumanB.hpp
│   └── HumanB.cpp
├── ex04/
│   ├── Makefile
│   ├── main.cpp
│   └── *.{cpp,hpp}
├── ex05/
│   ├── Makefile
│   ├── main.cpp
│   ├── Harl.hpp
│   └── Harl.cpp
├── ex06/
│   ├── Makefile
│   ├── main.cpp
│   ├── Harl.hpp
│   └── Harl.cpp
└── README.md
```

## Installation

1. **Clone the Repository:**

   ```sh
   git clone https://github.com/yourusername/CPP01.git
   cd CPP01
   ```

2. **Build the Desired Exercise:**

   ```sh
   cd ex00 && make
   ```

## Usage

Each exercise produces its own executable. Navigate to the exercise directory and run:

**Exercise 00:**
```sh
./zombie
```

**Exercise 01:**
```sh
./moar_brainz
```

**Exercise 02:**
```sh
./brain
```

**Exercise 03:**
```sh
./weapons
```

**Exercise 04:**
```sh
./sed <filename> <s1> <s2>
```

**Exercise 05:**
```sh
./harl
```

**Exercise 06:**
```sh
./harlFilter <level>
```

## Acknowledgments

- Thanks to the 42 community, mentors, and fellow students for their guidance and support.
- Special thanks to the C++ documentation and learning resources that helped in understanding memory management and advanced C++ concepts.

## Disclaimer

**IMPORTANT**:
This project was developed solely as part of the educational curriculum at 42 School. The code in this repository is published only for demonstration purposes to showcase my programming and C++ development skills.

**Academic Integrity Notice**:
It is strictly prohibited to copy or present this code as your own work in any academic submissions at 42 School. Any misuse or uncredited use of this project will be considered a violation of 42 School's academic policies.

## License

This repository is licensed under the Creative Commons - NonCommercial-NoDerivatives (CC BY-NC-ND 4.0) license. You are free to share this repository as long as you:

- Provide appropriate credit.
- Do not use it for commercial purposes.
- Do not modify, transform, or build upon the material.

For further details, please refer to the CC BY-NC-ND 4.0 license documentation.

Developed with dedication and in strict adherence to the high standards of 42 School.
