In this 42 project you will learn to create a function that will read a line of text from a file.<br>
Our function will receive the identification number of our file to read (the file descriptor 'fd') as an input parameter that it will use to read the text contained in it. How? through the read function.
<h1 align="left">The <code>read()</code> function</h1>

The read() function in C is used to read data from an open file or file descriptor. 
Here is the general syntax of the read() function:

<code>&nbsp;&nbsp;&nbsp;size_t read(int fd, void *buf, size_t count);</code>

Lets take a look at the parameters that the function takes as input:

    fd: is the file descriptor from which you want to read data. It can be the result of the open() function or other standard file descriptors such as 0 (stdin), 1 (stdout), and 2 (stderr).
    buf: it is a pointer to the buffer where the read data will be stored.
    count: is the number of bytes you want to read.

The read() function returns the number of bytes read if successful, otherwise it returns -1 if an error occurs while reading. It is important to note that the function may read fewer bytes than requested, especially if the file or input stream is finished or if an error occurs.

