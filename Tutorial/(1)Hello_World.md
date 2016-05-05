# Getting Started

Because C was initially developed for Unix, its configuration will be fairly straightforward on Linux and OSX systems. The open source GNU Compiler Collection (GCC) is often distributed as a built-in feature of Unix-based operating systems.

For Unix and Linux users:
  - Make sure the GCC is installed on your computer by typing the following command into your terminal window: gcc --version
  - In the event that you do not already have the compiler, Mac users can download the Xcode IDE at https://developer.apple.com/xcode/ or from the App Store
      - Linux users can get the compiler from the following source: http://linux.softpedia.com/get/Programming/Compilers/GCC-641.shtml

Unfortunately, the GCC and similar compilers aren't typically bundled with Microsoft Windows; they must be downloaded from the web and configured on the command line. 

For Windows users:
  - Follow these instructions: http://www.wikihow.com/Install-MinGW-(Minimalist-Gnu-C/C%2B%2B-Compiler)-on-Microsoft-Windows

Regardless of which OS you are using, if you do not want to be restricted to programming from the command line, you can download and utilize a cross-platform Text Editor or Integrated Development Environment (IDE):
  - Eclipse: http://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/mars1
  - Sublime Text: http://www.sublimetext.com/2
  - Emacs: http://www.gnu.org/software/emacs/#Obtaining

# Programming with C

## A Simple Program

C programs can range from the simple to the complex, but the basic requirements for every program are as follows:
 ```
 #include <stdio.h>
        /* This is an example of a comment */
        /* Comments are statements that will not be executed by the compiler */
        /* This line of code tells the compiler to include the standard C library 
           of input and output functions in the program's operations */
  ```
  ```
  main(){
        /* Instructions to be executed by the compiler must reside between a pair of curly 
           brackets { } following the main() function, with the exception of inline comments */
        /* There can only be one main() per program */
   
        printf("Hello, World!");
            /* This is a sample instruction, which will display the String "Hello, World!" 
               across the console */
            /* Because all instructions must be statements, each instruction must be 
               punctuated by a semicolon (;) */
  }
        /* Always remember to enclose main() and/or any other function with the 
           appropriate closing bracket */
  ```
  
## C is a Compiled Language

The filename of this sample program is hello_world.c -- all C programs must be saved with the (.c) file extension or they will not compile! Once you have saved your program, you can run the program from either terminal/command line or your IDE's GUI. 

Although you may or may not have to manually compile your program, depending on your programming environment, C is a compiled language and therefore must be compiled before it is run. Barring any syntax errors or other problems that may interfere with the compilation process, your machine will always compile the program prior to execution). 

# Sources

Amdani, Salim Y. "'C' Programming: 1st Edition" University Science Press/Laxmi Publications Pvt. Ltd., c2009.

Wikipedia.org https://en.wikipedia.org/wiki/C_(programming_language) Accessed Feb. 02, 2016.



