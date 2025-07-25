# Arduino Car Lock

This repository contains the full wiring diagrams and source code for a working model of a car locking system based on two Arduino UNO boards.

One Arduino acts as a transmitter (remote control) with buttons for locking, unlocking, and opening the trunk. The second Arduino is the receiver, which listens for RF signals and controls a servo motor to simulate the physical lock mechanism. Status updates and warnings are displayed on a 16×2 I2C LCD display.

Communication is established over the 433 MHz RF frequency, and both Arduinos can be powered either via 9V battery or USB.

This project was originally developed as part of my bachelor's thesis research and later extended and secured further for my master’s thesis, where I explored replay protection using counter-based validation.


<img width="2214" height="1656" alt="Receiver_diagram" src="https://github.com/user-attachments/assets/fd17cac1-a062-48eb-958a-7bab3dd7e9ee" />
<img width="2253" height="1656" alt="Transmitter_diagram" src="https://github.com/user-attachments/assets/34696662-a10f-4aad-bc21-0b725b3fbf45" />
