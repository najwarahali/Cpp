# Cpp
The goal of these modules is to introduce you to Object-Oriented Programming .


* C++ is a general-purpose programming language that was developed as an extension of the C programming language. It was created by Bjarne Stroustrup in the early 1980s and has since become one of the most popular and widely used programming languages.

* C++ builds upon the features of C and adds additional capabilities, primarily focusing on object-oriented programming (OOP). It provides support for classes, objects, inheritance, and polymorphism, allowing programmers to write modular and reusable code. C++ also includes features such as templates, exception handling, namespaces, and a standard template library (STL) that provides ready-to-use data structures and algorithms.

* One of the key design goals of C++ is performance and efficiency. It allows low-level access to memory through pointers and supports inline assembly code, enabling programmers to write code that executes quickly and utilizes system resources efficiently. C++ also supports static typing, which means that variables must have their types declared at compile-time, ensuring type safety and efficient code execution.



 - Standard guidelines :
    /    Compiling    \
   . Generate executable code by compiling your source code with the C++ compiler and the flags -Wall -Wextra -Werror.
   
   
    /    Formatting and naming conventions    \
   
   . Adhere to the prescribed format for exercise directories: ex00, ex01, ..., exn.
   
   
   . Follow the guidelines for naming your files, classes, functions, member functions, and attributes.
   
   
   . Ensure that class names are written in UpperCamelCase format. Correspondingly, files containing class code should be named after the class, such as ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. For example, if you have a header file defining a class "BrickWall" representing a brick wall, its name should be BrickWall.hpp.
   
   
   . Unless explicitly instructed otherwise, make sure that all output messages are terminated by a newline character and displayed to the standard output.
   
   
   . No strict coding style, such as Norminette, is enforced in the C++ modules. You have the freedom to follow your preferred coding style. However, keep in mind that if your code is not easily understandable by your peer evaluators, it may affect the grading process. Strive to write clean and readable code to the best of your ability.



    /    Allowed/Forbidden    \
    
   . It's time to transition from C to C++! As a result, you have the freedom to utilize almost everything from the standard library. Instead of relying solely on what you already know, it would be wise to leverage the C++-specific versions of the functions you are accustomed to.
   
   
   . However, please note that you are not allowed to use any external libraries other than the standard library. This means that C++11 (and its derivatives) and Boost libraries are off-limits. Additionally, the following functions are forbidden: *printf(), *alloc(), and free(). Using any of these will result in a grade of 0.
   
   
   . In the context of C++ - Module 00, please be aware that the using namespace <ns_name> and friend keywords are prohibited, unless explicitly specified otherwise. Violating this rule will lead to a grade deduction of -42.
   
   
   . Until Module 08 and 09, you are permitted to employ the Standard Template Library (STL). However, this allowance excludes the usage of containers such as vector, list, map, and other related types, as well as any algorithms that necessitate including the <algorithm> header. Failing to adhere to this rule will result in a grade deduction of -42.
  
  
  
  
    /    A few design requirements    \
  
   . In C++, it is essential to be mindful of memory leaks. When you allocate memory using the new keyword, it is crucial to ensure that you free that memory appropriately to prevent leaks.
 
 
   . Starting from Module 02 to Module 09, it is expected that your classes follow the Orthodox Canonical Form, unless otherwise specified explicitly.
 
 
   . Placing function implementations in header files (excluding function templates) will result in a grade of 0 for the exercise.
 
 
  . Each header file should be self-contained and able to function independently from other headers. Consequently, it should include all the necessary dependencies. However, it is important to prevent the problem of double inclusion by adding include guards. Failure to do so will result in a grade of 0.
 
 
  
  
  
    /       Additional information   \ 
  
  
    . If necessary, you are allowed to include additional files in your code, such as to split your code into multiple files. Since these assignments are not verified by a program, you have the freedom to add extra files as long as you submit the required files.
 
 
    . Occasionally, the exercise guidelines may appear brief, but the examples provided may reveal requirements that are not explicitly stated. Pay close attention to the examples to ensure you meet all the necessary requirements.
 
 
    . It is highly recommended to thoroughly read each module before starting the assignments. This will help you gain a comprehensive understanding of the expectations and requirements.
  
  
  
  
  
  
  
  
