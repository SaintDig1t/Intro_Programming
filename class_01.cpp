//=================================================================================================================================
// Jan 30, 2024
// Name: Henry M. Rivera Osso
// Student Number: Y00575252
// Description: What is programming c++
//=================================================================================================================================
// What is a computer?:
// a computer is a programmable device that can store, retrieve and process data
// A computer is compromised of both hardwareand software
// If it can be programmed it can be considered a computer
// Hardware components (Physical computer compenents):
//1. CPU
//2. Main memory (ram)
//3. Secondary  Storage 
//4. Inpute Devices 
//5. Output devices 
// 
// Input Devices:
//Touch Screen, mouse, midi keyboard, webcam, mic, media , scanner, touchpad these are all input device examples
// 
//Output Devices:
//Printer, speakers, virtual reality, headphones, vibration
//
//Secondary storage:
//usb, floppy, nvme, ssd, mechanical hard drive
//
//Main components:
// GPU (graphics processing unit), CPU (central processing unit), Main memory (RAM[Random Access Memory])

//Communication devices:(input/output)
//bluetooth, wifi, ethernet

//CPU:
// CPU is the part of the computer that actually runs programs. 
// Fetches instructions, follows instructions and produces results
// Consists of:
// Control Unit - recieves and decodes intructions and coordinates with rest of PC
// Arithmetic and logic unit - optimized for numeric calculation and desgined for true/false operations

//Computing components:
//                       CPU
//                        ^
// Input -> Control unit && arithmetic Logic Unit -> output
//                       ^
//                      RAM

// CPU cycle:
// Fetch/Decode/excute 

//Fetch - fetches necxt instruction in the sequence of program instructions from memory 

// Decode - The instruction is encoded in the form of a number. The control unit decodes the insruction and generates an electronic signal.

//Execute - The signal is route to the approiate component of the compute (such as the ALU, a disk drive)

// Memory unite this is where the computer store a prohram while prohram is runnig, as well as the data that the program is working with
// It is volatile. Main memory is erased when program terminates or computer is turned off 
//Organized as follows:
// bit: binary digit: smallest piece of memory. Has value of  0 (False), or 1 (true)

// Memory unit:
// Ordered sequence of storage cells, each capable of holding ap iece of information 
// Each cell has its own unique affress

//Secondary Storage:
// non-volatile: data retained when program is not running or computer is turned off
// comes in a variett of media:
// magnet: traditional hard drives that use a moveable mechanical arm to rad/write
//solid state: data stored in chips, moving parts
//optical: CD
//flasg drivesm cinnected to the usb port(USB and SD Cards)

//Input Devies:
//Devices that senf information to the computer from the outside
//many devices can provide input:
//Keyboard, mouse, touchscreen, scanner, digial camera, microphone, disk drives,CD, DVD, Blue-Ray drives

//Output Device:
//Output is any information the computer sends to the outside

//Software- Programs that run on a computer 
//Everything a computer does is under the ontrol of software
//Categories
// System Software - programs that manage the computer hardware and the programs that run on them. 
// Application software- provides service to user

//Memory organization:
//two circuit states: 0 and 1 
// Bit (short of binary digit) refers to a single 0 or 1 
// Bit patterns represent both the computer instructions and computer data
//1 byte = 8 bits
//1 Kb = 1024 bytes 
//1 Mb = 1,048,576 bytes 
// everything is a power of 2 in computing 

// Machine Language:
// Computer only executes machine language
//made of binary code

// binary code:
// the binary system is a numeral system is the base-2 number system 

//octal numbers:
//The octal numeral system, oct for short is the base-8
//nuber system uses the digits 0-7

//Hexadecimal numbers:
//number system with base 16 0-9, A-F

//Types of languages:
//Low Level languages: used for communication directly with hardware often binary machine code (assembly language)
//high level: closer to human language 

//assembly language:
// A programming upgrade from machine language 
//instrucctions written in mneumonic 
//computer cannor directly execute these instructions 

//highe level languages:
//Portable 
//user writes program in language simulate to natural language 
//many use a compiler to translate programs written in certain high level languages 
//examples --- Fortan, COBOL, PASCAL, ADA, MODULA-2, C++, RUST, Python 
//most are standarized by ISO/ANSI to provide an official description of the language

//How do we go from high level language to an exec:
// a. Create a file contraining the program with a text editor
// b. Run preprocessor to convert source files directives to source code  
// c. run compilernto converto source program into machine instrctuojns
// d. run linker to connect hardware specific code to machine intructions, producing an exec file

//Three c++ program stages:
// Source   ->  object   -> exec
//   via compiler | via linker 

//What does a program do:
//input, processing and output
//computer programs typically perform a three step process of gathering input, performing 
//some process on the information gathered, and then producing output

//What is and IDE:
// Integrated developments enviroment or IDE combine all the tools needed to write, compile and debug a program 
//into a software application

//Basic Control Structures:
//Sequence - series of statements that execute one after the other
//Selection - statement is used to determine which of two different statements to execute
//Looping- statement is used to repeat satements while conditions are ment
//Subprogram - smaller part of another program, collections of subprrograms solves the orginival problem
//Concurrency - enables running of multiple subprograms simultaneosly 
//Each of these ways of structuring statements controls the order which the computer executes the statements
