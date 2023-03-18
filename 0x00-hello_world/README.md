  1 # 0x00 Projects
  2 
  3 ## 0-preprocessor:
  4 ### the pre-processing phase is the first step in the compilation of C programs. 
  5 - all the statements starting with '#' will be processed with the pre-processer.
  6 - the pre-processor will turn the code to intermediate file (.i)with no '#' or comments.
  7 - the gcc option '-E' tell the gcc compiler to run the pre-processor and stop without completing the     compilation process.
  8 
  9 ## 1-compiler
 10 ### the compiling phase is the second step in the compilation process
 11 - in this phase the intermediate file output from the pre-processor will be converted to assembly fil    es (.s)
 12 - the '-c' option is used for the first three phases only
 13 
 14 ## 2-assembler
 15 ### the compiler will convert the assembly file (.s) generated from the previous step to a machine-co    de in binary/hexadecimal specific to the machine type known as the object file (.obj)
 16 - the '-S' option is used to generate the assembly code
 17 
 18 ## 3-name
 19 - the '-o' option place the primary output in file to 'file name' user provied, this applies to whate    ver sort of output being produced wether is from the pre-processor (.i) phase or compilier(.s) phase     or assemblier (.obj)
 20 
 21 ## 4-puts 
 22 - the puts() function its a part of the C standard library stdio.h, which writes a string to stdout
 23 
 24 ## 5-printf.c
 25 - like puts() function, printf() do the exact same thing, and its also part of the stdio.h standard l    ibrary

