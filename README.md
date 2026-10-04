This is a simple readme file which is the documentation of the source codes in this repository.

hello.py - A simple python program which asks the user to input their name and age, and then prints them in a sentence. It also imports the datetime library which is used to fetch the current year, and then calculates the birth year of the user from their input age using simple arithmetics

hello.cpp - A simple python program which asks the user to input their name and age, and then prints them in a sentence. It also imports the chrono library which is used to fetch the current year, and then calculates the birth year of the user from their input age using simple arithmetics. The year fetching process is different from the straighforward approach in python. Chrono is used to fetch the current time, and then that time is converted into a calendar format, which is then used to extract the year, and finally that year is made into an integer. 

All these programs have been executed from Konsole the terminal on my linux environment. 

Commands used to execute files
cd (The path to these files)
python3 hello.py - launches the python3 interpteter which takes the hello.py file as input and interprets it and executes all the instructions (lines of codes)
the output is displayed in the terminal itself

cd(the path to these files)
g++ hello.cpp -o hello - launches the g++ compiler for c++ to compile the program named hello.cpp and save the output in a executable file named "hello".
./hello - in the same directory, executes the file named hello.
C++ is a compiler language hence the execution process occurs in two steps, the first step is the compilation which produces an executable file. The 2nd stage is executing the executable, which gives the output in the terminal itself.