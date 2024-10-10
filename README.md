<h1>get_next_line</h1>

<h2>Description</h2>

The Get Next Line project introduces a convenient function for reading lines from a file descriptor (fd) in C programming. This project aims to enhance your understanding of static variables while providing a practical utility for file reading operations.

<h2>Features</h2>

<ul>
  <li>Read lines from both files and standard input.</li>
  <li>Handle repeated calls to return one line at a time.</li>
  <li>Return NULL when there is nothing left to read or when an error occurs.</li>
  <li>Include the terminating newline character (\n) in the returned line, except at the end of the file.</li>
</ul>

<h2>Usage</h2>

To test the gnl function you must create a main function where you open a file to read and then pass the file descriptor to the 'get_next_line' function.
If you want to read just one line of the file you simply call the function once. If u want to read the entire file you can put the call to the function inside a while loop that ends when there's nothing left to read.

Here I give you the two versions of main functions that you can use:

<h3>Version 1 (read one line)</h3>
```
  int main(int argc, char **argv) 
  {
    int fd = open("filename.txt", O_RDONLY);
    if (fd < 0) 
    {
        perror("Error opening file");
        return 1;
    }
    char *line = get_next_line(fd);
    if (line != NULL) 
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
```


<h3>Version 2 (read all the file)</h3>
<code>
  int main(int argc, char **argv) 
  {
    int fd = open("filename.txt", O_RDONLY);
    if (fd < 0) 
    {
        perror("Error opening file");
        return 1;
    }
    char *line;
    while ((line = get_next_line(fd)) != NULL) 
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
</code>
