# Even/Odd Number Checker using Adapter Pattern in C#

## 📘 Description

This is a beginner-friendly C# console application that demonstrates the **Adapter Design Pattern** through a simple task: checking whether a given number is even or odd.

The Adapter Pattern is a structural design pattern that allows incompatible interfaces to work together. In this project, we simulate a scenario where a legacy number-checking class has a different interface than what the client expects. The adapter bridges the gap between the legacy class and the modern interface.

---

## 🧩 Components

- **ITarget Interface**  
  Defines the method `CheckNumber(int number)` that the client expects.

- **LegacyNumberChecker Class**  
  A legacy class with its own logic and method for determining even or odd numbers.

- **NumberAdapter Class**  
  Implements `ITarget` and adapts the legacy class method to work with the expected interface.

- **Client (Program.cs)**  
  Accepts user input and uses the adapter to check whether the number is even or odd.

---

## 🔧 Technologies Used

- Language: C#
- Platform: .NET Console Application


