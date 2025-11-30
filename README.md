# ⚡ Electricity Bill Generator in C

A simple and efficient **Electricity Bill Generator** built in **C
language**.\
This program calculates the electricity bill for **Residential**,
**Commercial**, and **Industrial** consumers based on slab-wise tariff
rates.

## 📌 Features

-   Takes **customer name**
-   Takes **units consumed**
-   Choose **customer type** (Residential / Commercial / Industrial)
-   Calculates bill using **slab-based pricing**
-   Generates a clean, user-friendly **bill output**

## 🧮 Tariff Structure

### **1️⃣ Residential Consumers**

  Units Range   Rate (₹/unit)
  ------------- ---------------
  0--100        2.00
  
  101--300      3.50
  
  Above 300     5.00

### **2️⃣ Commercial Consumers**

  Units Range   Rate (₹/unit)
  ------------- ---------------
  0--200        5.00
  
  201--500      7.50
  
  Above 500     10.00

### **3️⃣ Industrial Consumers**

  Units Range   Rate (₹/unit)
  ------------- ---------------
  0--500        8.00
  
  Above 500     12.00

## 📂 Project Structure

    📁 Electricity-Bill-Generator
    │── Electricity_bill_generator.c
    │── README.md

## ▶️ How to Compile and Run

### **Compile the program**

``` bash
gcc Electricity_bill_generator.c -o bill
```

### **Run the program**

``` bash
./bill
```

## 🖥️ Sample Output

    ==== ELECTRICITY BILL ====
    Customer Name : Rahul
    Units Consumed: 250.00
    Customer Type : Residential
    Total Bill    : XXXX.XX

## 🧩 Code Overview

-   **calculateResidential()** → Calculates bill for residential users\
-   **calculateCommercial()** → Calculates commercial bill\
-   **calculateIndustrial()** → Calculates industrial bill\
-   Uses **if--else slab calculations** for accurate billing\
-   Clean formatting for final bill display

## 🚀 Possible Future Enhancements

-   Add **GST** or extra service charges\
-   Add option to **save bills to a file**\
-   Add **looping** for multiple customers\
-   Create a **menu-driven UI**

## 🏷️ Author

**Satyam Kumar**
