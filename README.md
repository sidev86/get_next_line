In this 42 project you will learn to create a function that will read a line of text from a file.
To be able to read a line of text from a file, we must first make sure that the file we are looking for exists. If we find the file we're searching, we can access its contents. But how do we get access to a file? We can use the open function.

<h1 align="left">The <code>open()</code> function</h1>

- The open() function is a function that is used to open or create a new file (in case the file doesn't exist).
The general syntax of the open() function is the following:

<code>&nbsp;&nbsp;&nbsp;int open(const char *path, int flags, mode_t mode);</code>

So, let's define the parameters that the function takes as input:

- <code>path:</code> it is a string that represents the path of the file to open or create.
- <code>flags:</code> specify how the file should be opened. These flags, are constants defined in the fcntl.h library and can include O_RDONLY (open read only), O_WRONLY (open write only), O_RDWR (open read and write), O_CREAT (create the file if it does not exist), O_TRUNC (truncate the file if it already exists) and others.
- <code>mode:</code> is an optional argument that is used only when the O_CREAT flag is specified. It specifies file access permissions for the case in which the file needs to be created.
