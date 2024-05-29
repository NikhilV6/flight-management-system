# XYZ Airlines Ticket Booking System

This program is a simple flight booking system for XYZ Airlines. It allows customers to enter their details, book flights to various destinations, and generate tickets with charges.

## Overview

### Classes

- **Management**
  - Initiates the main menu.
  
- **Details**
  - Stores and manages customer details.
  - Methods: `information()`
  
- **Registration**
  - Manages flight booking.
  - Methods: `flight()`
  
- **Ticket**
  - Generates and displays tickets.
  - Inherits from `Registration` and `Details`.
  - Methods: `bill()`, `display()`

### Functions

- **mainMenu**
  - Displays the main menu and handles user choices:
    1. Add Customer Details
    2. Flight Registration
    3. Ticket and Charges
    4. Exit

- **main**
  - Creates an instance of the `Management` class to start the program.

### File Handling

- **records.txt**: Stores ticket details. The `bill` method writes to this file, and the `display` method reads from it.

## Usage

1. Compile the program using a C++ compiler.
2. Run the executable.
3. Follow the on-screen instructions to enter customer details, book flights, and generate tickets.

## Future Improvements

- Add more destinations and flights.
- Improve input validation and error handling.
- Enhance the user interface.
- Add features to update or cancel bookings.
