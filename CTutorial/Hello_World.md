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

C programs can range from the simple to the complex, but the basic requirements for every program are as follows:
  1. #include \<stdio.h\>                                   
        - This line of code tells the compiler to include the standard C library of input and output functions in the                  program's operations
  2. main(){
  
        - Instructions to be executed by the compiler must reside between the curly brackets { }
          of the main() function, with the exception of inline comments
        - There can only be one main() per program
  3. /* This is an example of a comment */           
        - Comments are statements that will not be executed by the compiler
  4. printf("Hello, World!");
        - This is a sample instruction, which will print the String "Hello, World!" on the screen
  5. }
        - Always remember to enclose main() and/or any other function with the appropriate closing bracket


# Sources


