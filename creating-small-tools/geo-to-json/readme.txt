A small tool is a C program that does one task and does it well.
It might display the contents of a file on the screen or list the
processes running on the computer. Or it might display the first
10 lines of a file or send it to the printer. Most operating systems
come with a whole set of small tools that you can run from the
command prompt or the terminal. Sometimes, when you have a
big problem to solve, you can break it down into a series of small
problems, and then write small tools for each of them.



There are Other ways off redirecting I/O
	In the geo2json example, 

		The user won’t want to type in all
		of the data if it’s already stored in a file somewhere. And if the
		data in JSON format is just displayed on the screen, there’s no
		way the map within the web page will be able to read it.
		You need to make the program work with files. But how do
		you do that? If you want to use files instead of the keyboard
		and the display, what code will you have to change? Will you
		have to change any code at all?
	
		Is there a way of making the program
		use files without changing code?
		Without even recompiling it?
		
			use the '<' key to read data from a file in.
			and the '>' key to write to one
			
			Example
				geo2json <gpsdata.csv >output.json
				
			but what if you want to displa error messages or write them 
			to files separately so they don't interfere with the stream
			currently being written?
			
				1. You can display the error returned in linux with command 'echo $>' and 'echo %ERRORLEVEL% on windows.
				2. Using Standard Output
				
				
					Using Standard Output:
					======================
						Wouldn’t it be dreamy if there
						were a special output for errors so
						that I didn’t have to mix my errors
						in with Standard Output? But I know
						it’s just a fantasy...
														... may not be fantasy for all you know
						
						That’s why the Standard Error was invented. The Standard
						Error is a second output that was created for sending error messages
						
						Human beings generally have two ears and one mouth, but
						processes are wired a little differently. Every process has one ear
						(the Standard Input) and two mouths (the Standard Output
						and the Standard Error).
						
						Remember how when a new process is created, the operating
						system points the Standard Input at the keyboard and the Standard
						Output at the screen? Well, the operating system creates the
						Standard Error at the same time and, like the Standard Output, the
						Standard Error is sent to the display by default.
						
						That means that if someone redirects the Standard Input and
						Standard Output so they use files, the Standard Error will continue
						to send data to the display.
						
						And that’s really cool, because it means that even if the Standard
						Output is redirected somewhere else, by default, any messages
						sent down the Standard Error will still be visible on the
						screen.
						So you can fix the problem of our hidden error messages by simply
						displaying them on the Standard Error.
						
						the printf() function is just a version of a more general
						function called fprintf();.
						
						The fprintf() function allows you to choose where you
						want to send text to. You can tell fprintf() to send text
						to stdout (the Standard Output) or stderr (the Standard
						Error).
						
						Example
								printf("I like Turtles!");
								
																		is the same as
																		
								fprintf(stdout, "I like Turtles!");
						
						so to redirect the error message 2 to error.txt,
						
																						geo2json 2> error.txt 
						
						
						
						
						
