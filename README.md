In this 42 project you will learn to create a function that will read a line of text from a file.
To be able to read a line of text from a file, we must first make sure that the file we are looking for exists. If we find the file we're searching, we can access its contents. But how do we get access to a file? We can use the open function.

<h1 align="left">The <code>open</code> function</h1>

- The open function is a function that is used to open or create a new file (in case the file doesn't exist).
The general sintax of the open() function is the following:

<code>&nbsp;&nbsp;&nbsp;int open(const char *path, int flags, mode_t mode);</code>
