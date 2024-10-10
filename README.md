<h1>get_next_line</h1>

<h2>Description</h2>

The Get Next Line project introduces a convenient function for reading lines from a file descriptor (fd) in C programming. This project aims to enhance your understanding of static variables while providing a practical utility for file reading operations.

<br>
<h2>Features</h2>

<ul>
  <li>Read lines from both files and standard input.</li>
  <li>Handle repeated calls to return one line at a time.</li>
  <li>Return NULL when there is nothing left to read or when an error occurs.</li>
  <li>Include the terminating newline character (\n) in the returned line, except at the end of the file.</li>
</ul>

<br>
<h2>Usage</h2>

To test the gnl function directly you can use one of the 2 versions of main present in the code. Just uncomment one of the 2 main versions to test.

<h2>Compilation Instructions</h2>
<code> gcc -Wall -Wextra -Werror -D BUFFER_SIZE=n <all_files>.c -o executable_name</code>
<br><br>
Replace <code>n</code> with your desired buffer size.
<br><br>
And then execute:
<br><br>
<code>./executable_name "filename"</code>

