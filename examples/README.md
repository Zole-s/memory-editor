# Example of Usage.

* Example 1.
When you start the program, it allows you to enter the segment You want to crack.
Example: lets access 2048th segment in memory.
After that it asks you how you want to modify segment.
Lets set its data to 0x01.
After that, the program will run infinitely. Important byte was modified.

* Example 2. Interrupting a program.
Let's run, for example Python in other session.
Let's assume segment 0xfab10a is being used by Python
Modify it to 0.
Python got interrupted!
