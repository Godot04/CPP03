# C++ - Module 03: Inheritance

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)
![Status](https://img.shields.io/badge/Status-Complete-success?style=flat-square)

## About

**C++ Module 03** introduces inheritance in C++98 and shows how a derived class can extend, reuse, and specialize the behavior of a base class. The exercises focus on object hierarchy, constructor and destructor chaining, access control, and the design trade-offs that appear when classes start sharing common state.

## Project Goals

- Understand how inheritance builds relationships between classes
- Practice constructor and destructor chaining across class hierarchies
- Learn when and why `protected` members are used in derived classes
- Explore method overriding and specialization of inherited behavior
- Observe the diamond problem and how multiple inheritance affects class design
- Build small programs that keep shared behavior centralized in a base class

## Exercise Overview

### Exercise 00: Aaaaand... OPEN!

**Directory:** `ex00/`
**Executable:** `ClapTrap`

This exercise introduces the base class for the module. It establishes a small character-like object with basic actions such as attacking, taking damage, and repairing itself.

#### Learning Concepts

- Base class design
- Member variables shared by derived classes
- Constructors, destructors, and basic object lifecycle
- Encapsulating common behavior in one class

### Exercise 01: Serena, create your own, please!

**Directory:** `ex01/`
**Executable:** `ScavTrap`

This exercise extends the base class with a derived type that changes some of the default characteristics and adds a class-specific behavior. It is a first step into specialization through inheritance.

#### Learning Concepts

- Public inheritance
- Overriding inherited methods
- Reusing base class functionality while adjusting class-specific values
- Adding new behavior to a derived class

### Exercise 02: Repetitive work

**Directory:** `ex02/`
**Executable:** `FragTrap`

This exercise continues the inheritance chain with another derived class. The goal is to build a new type with its own identity while still sharing the common base behavior.

#### Learning Concepts

- Derived class initialization
- Custom behavior on top of inherited state
- Comparing multiple specializations of the same base class
- Keeping shared logic in the parent class

### Exercise 03: Now it's weird!

**Directory:** `ex03/`
**Executable:** `DiamondTrap`

This exercise combines multiple inherited paths and exposes the classic diamond problem. It is designed to show why ambiguity can appear in multiple inheritance and how class design choices affect the resulting object structure.

#### Learning Concepts

- Multiple inheritance
- Ambiguous base-class members and method resolution
- Combining behaviors from more than one parent class
- Distinguishing between a class identity and its inherited base identity

## Compilation

Each exercise has its own Makefile and can be built independently.

### Build an Exercise

```bash
cd ex00
make
```

Replace `ex00` with any other exercise directory as needed.

### Available Targets

- `make` - Compile the exercise
- `make clean` - Remove object files
- `make fclean` - Remove object files and the executable
- `make re` - Rebuild everything from scratch

### Compilation Flags

- Compiler: `c++`
- Standard: `-std=c++98`
- Warnings: `-Wall -Wextra -Werror`

## Technical Notes

- The project follows the C++98 standard required by the module
- Exercises stay intentionally small so the inheritance rules remain visible
- Shared behavior is implemented once in the base class and then adapted in derived classes
- Multiple inheritance is introduced only where the subject requires it

## Testing

Recommended checks for this module:

- Build every exercise with `make`
- Run each executable and verify the printed lifecycle messages
- Check that overridden methods use the expected derived behavior
- Confirm that constructor and destructor order matches the inheritance hierarchy
- Inspect the DiamondTrap exercise for ambiguity and base-class reuse

## Author

**opopov** - 42 School Student
