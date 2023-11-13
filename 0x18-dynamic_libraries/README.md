Dynamic Library

A dynamic library, also known as a shared library, is a collection of compiled code that can be linked to an executable program at runtime. This means that the library is not embedded into the executable file, but instead is loaded into memory separately when the program starts. This has several advantages, including:

    Reduced executable size: Dynamic libraries can significantly reduce the size of executable files, as the code from the library is not duplicated in each executable that uses it.
    Shared code: Dynamic libraries can be shared between multiple programs, which can save memory and improve performance.
    Easier updates: If a dynamic library is updated, all programs that use it will automatically benefit from the update, without the need to recompile the programs.

How Dynamic Libraries Work

When a program is linked to a dynamic library, the linker does not embed the library code into the executable file. Instead, it creates a reference to the library in the executable file. When the program starts, the operating system loads the dynamic library into memory and resolves the references to the library code.

Creating a Dynamic Library

Creating a dynamic library typically involves the following steps:

    Compile the source code for the library into object files.
    Link the object files into a shared library file.
    Create a header file that declares the functions and variables in the library.

Using a Dynamic Library

To use a dynamic library in a program, you typically need to do the following:

    Link the program to the library.
    Include the header file for the library.
    Call the functions from the library.

Environment Variable $LD_LIBRARY_PATH

The environment variable $LD_LIBRARY_PATH tells the linker where to look for dynamic libraries when linking a program. If a library is not found in the current directory, the linker will search the directories specified in $LD_LIBRARY_PATH.

Differences Between Static and Shared Libraries

The main difference between static and shared libraries is that static libraries are embedded into executable files, while shared libraries are loaded into memory separately at runtime. This has several implications, including:

    Executable size: Static libraries typically make executable files larger than shared libraries.
    Shared code: Static libraries cannot be shared between multiple programs.
    Easier updates: If a static library is updated, all programs that use it must be recompiled.

Basic Usage of nm, ldd, and ldconfig

    nm: nm is a tool that displays the symbols in an object file or library.
    ldd: ldd is a tool that displays the shared libraries that a program is linked to.
    ldconfig: ldconfig is a tool that updates the system's linker cache, which is used to find shared libraries.

--------------

[libdynamic.so](https://github.com/saiAl/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libdynamic.so "libdynamic.so")

--------------

[1-create_dynamic_lib.sh](https://github.com/saiAl/alx-low_level_programming/tree/master/0x18-dynamic_libraries/1-create_dynamic_lib.sh "1-create_dynamic_lib.sh")

--------------

[100-operations.so](https://github.com/saiAl/alx-low_level_programming/tree/master/0x18-dynamic_libraries/100-operations.so "100-operations.so")

--------------
