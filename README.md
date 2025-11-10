# Number System Converter
---

## Group Members  

| Name | Registration Number |
|------|----------------------|
| Kinuthia Abraham Ngugi   | CT101/G/22378/24 |
| Mbau Victor Kagumba      | CT101/G/23670/24 | 
| Lawrence Kigotho Njoroge | CT101/G/21996/24 |
| Kimani Peter mwangi      | CT101/G/19791/23 |
| Griffin's Kimotho        | CT101/G/22430/24 |

---

## Project Overview
The **Number System Converter** is a React.js web application designed to automate the conversion of numbers between **Binary (Base 2)**, **Octal (Base 8)**, **Decimal (Base 10)**, and **Hexadecimal (Base 16)** systems.  
It allows users to enter a number in any one base and instantly view its equivalent in all other number systems.

This project demonstrates the practical application of number system concepts in programming, while integrating **frontend development** skills using **React.js**.

---

##  Objectives
- To automate conversions between different number systems.
- To demonstrate the use of **React.js** in building interactive web applications.
- To enhance understanding of data representation across various number systems.
- To collaborate effectively as a team in designing, coding, testing, and documenting a complete application.

---

## Key Features
- Converts numbers between **Binary**, **Octal**, **Decimal**, and **Hexadecimal**.
- Provides **instant real-time conversions** as the user types.
- Includes **input validation** to detect invalid entries.  
- Clean and **responsive user interface** built with React and CSS.  
- Well-structured code for easy understanding and maintenance.

---

## System Architecture
The project follows a **component-based architecture** using React.js:
- **Header Component:** Displays the app title and short description.  
- **Converter Component:** Handles input, conversion logic, and output display.  
- **App Component:** Combines all components into one cohesive UI.

---

## Conversion Logic
The system uses JavaScript’s built-in `parseInt()` and `toString()` methods:
- `parseInt(value, base)` converts a string number from any base to decimal.  
- `decimal.toString(targetBase)` converts a decimal number into the chosen target base.  

The logic is wrapped in a simple function that:
1. Takes user input and selected base.
2. Converts it to decimal.
3. Converts that decimal to all other bases.
4. Displays all equivalent representations instantly.

---

## Technologies Used
| Technology | Purpose |
|-------------|----------|
| **React.js** | Frontend library for UI components and state management |
| **JavaScript** | Core programming language | 
| **Render** |Deploying web service  |
| **CSS** | Styling and responsiveness |

---

## Steps to Run the App.

1. Clone this repository:
```bash
git clone https://github.com/your-username/number-system-converter.git
```
---

### 2. Navigate into the project folder:
``` bash
cd number-system-converter
```
---

### 3. Install dependencies:
```bash
npm install
```
---

### 4. Run the application:
```bash
npm start
```
---

### 5. Open your browser and go to:
http://localhost:3000

