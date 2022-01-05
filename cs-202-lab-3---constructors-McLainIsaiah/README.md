# CS 202 Lab 3 - Constructors
This lab walks you through the process of setting up your computer for development, and using Git to manage your program source.


### Learning Targets
* (CORE) I can use Git to manage source code
* I can perform basic operations in the Linux operating system
* I can convert a simple procedural program to be object-oriented


## Activities for this Lab

1. Accept the Github assignment
2. Analyze the procedural code in the assignment
3. Create a single class that implements the functionality in the procedural code
4. Check in the code and push to Github
5. Turn in the Github URL along with your Github username to WebCampus

### Accept the Assignment
1. Click [here](https://classroom.github.com/a/4-I50iNa) to accept the assignment in GitHub Classroom. This will create a project in your personal workspace on GitHub. 
2. Open the project in Github after it has been created and copy the clone URL.
2. Open a terminal and change directory (cd) into your `cs202` directory and then into your `labs` directory. This directory should have been created in a previous lab exercise. 
3. Type `git clone`, one space, and then paste in the clone URL that you copied from Github and then hit return.
4. Type return and you should see messages saying that code is being downloaded to your machine. You can now `cd` into the lab directory that was just created. Type `ls` and you should see the files for this lab (a README and `main.cpp`)

### Problem

In the editor of your choice, open the file named `main.cpp`.
Compile and run the code to ensure that is works correctly.

Your goal is to create a class that implements a complex number. Your class should 

- have a constructor that takes as arguments the real and imaginary part of a number as integers
- add getters and setters for the class attributes in the class
- add a copy constructor to your class, being sure to have it copy any attributes as discussed in class
- have a method called `add(const ComplexNumber& number)` that adds a complex number  returns the complex number as a string
- have a method called `print` that prints the current value of the complex number held by the class

	Example

	```
		ComplexNumber num1(1,2);
		ComplexNumber num2(1,1);
		std::string result = num1.add(num2);
	```

Your `ComplexNumber` class should be implemented in a file called `complexnumber.cpp` and have its definition in a file called `complexnumber.h`. Create a `makefile` that compiles the application, giving the executable the name `lab3`. Be sure to add a `clean` target.


Modify the `main` method so that it

- instantiates two `ComplexNumber` objects with the values you see in the existing `main` method
- uses the `add` method on one of the objects to add the two objects
- prints the results of the addition to the terminal 
- creates a third instance of the class that is a copy of one of your other instances by using your copy constructor
- calls the `print` method for each of the three objects that were created

Ensure that your class is giving you the correct answer, and then 

- Run the git command `git add .` to add all your files and your modified `main.cpp` file to git
- Run the git command `git commit -m "lab 3 solution"`
- Push your code to Github using the command `git push origin main`

## What to Turn In
In the text entry for this assignment, put your Github username. Go to your Github repository for this lab and copy the clone url. Paste the clone URL into the text field on the next line after your github name.

Submit your assignment.








