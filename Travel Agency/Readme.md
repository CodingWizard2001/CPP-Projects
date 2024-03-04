# Travel Agency Program in C++


### Description:
This C++ program simulates a travel agency's booking system. It allows users to choose from predefined tour packages and displays the details of the selected package.

### Functionality:
- The program defines a Package structure to hold details of each tour package, including option number, destination, start date, return date, and price.
- A displayTour function is implemented to display the details of a given tour package.
- In the main function, three tour packages are predefined (pack1, pack2, pack3), each with unique details.
- The program displays the available tour packages and prompts the user to select one.
- Based on the user's choice, it clears the console screen, and then displays the details of the selected package using the displayTour function.
- If an invalid choice is entered, it displays an error message.

<br/>

### Demo
```cpp

....... Tour Plans .......

    Option : 1
    Destination : Sundarban
    Start Date : 20-04-2024
    Return Date : 24-04-2024
    Package price : 12500

    Option : 2
    Destination : Kashmir
    Start Date : 20-04-2024
    Return Date : 23-04-2024
    Package price : 15000

    Option : 3
    Destination : Goa
    Start Date : 20-04-2024
    Return Date : 23-04-2024
    Package price : 25000

    Select your pack :2

```
```cpp

    You selected the following package
    Option : 2
    Destination : Kashmir
    Start Date : 20-04-2024
    Return Date : 23-04-2024
    Package price : 15000

```
### Usage:
- Compile the program using a C++ compiler.
- Run the compiled executable.
- Follow the on-screen prompts to select a tour package.

<br/>

#### Explanation:
<br/>
  - Package Structure:
    - int opt: Option number for the package.
    - string dest: Destination of the package.
    - string sDate: Start date of the package.
    - string eDate: End date of the package.
    - long long price: Price of the package.
<br/>
  - displayTour Function:
    - Displays the details of a given tour package, including option, destination, start date, return date, and price.
<br/>
  - Main Function:
    - Pre-defines three tour packages (pack1, pack2, pack3).
    - Displays available tour packages.
    - Prompts the user to select a package.
    - Clears the console screen based on the user's choice.
    - Displays the details of the selected package or an error message for an invalid choice.

>[!TIP]
>Note:This program uses system("cls") to clear the console screen, which may not work on all platforms. Consider using alternative methods for screen clearing based on your platform requirements.
> Date format assumed: DD-MM-YYYY.