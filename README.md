## How to use my_printf ?

This function returns the number of characters prints

Run the command _make_ to construct the library, then compile your programm with the library named libmy.a

### Formats possible
my_printf("%[flag][width]<letter_specifier>...", arg1, ...)

### Flags possible
- 0 (with width) : instead of spaces, it'll be 0 before the argument
- '+' or a space : put a '+' sign or a space before the positives arguments
- You can put multiple flags, but you must put only one specifier per % (otherwise, the next letter will not be taken in account)

### Specifiers possible
- d or i : Display a decimal number
- u : Display an unsigned integer
- o : Transform an unsigned decimal to octal
- s : Display a string
- c : Display a character
- f or F : Display a floating number
- e or E : Scientific notation of a floating number
- g or G : Display the shortest representation of a floating number between e and f
- x or X : Transform a decimal number to hexadecimal
- a or A : Transform a floating number to hexadecimal
- p : Display the memory adress of a pointer in hexadecimal
- % : Just display %

## Commits norm (emojis used)
- 🔥 (fire): code or file removed
- 🐛 (bug) : bug.s resolved
- 📝 (memo) : add or modify documentation
- ✅ (white_check_mark) : add, modify or remove tests
- 🔀 (twisted_rightwards_arrows) : merge branches
- ✨ (sparkles) : add new features
- 🙈 (see_no_evil) : add or modify a .gitignore file
- ♻️  (recycle) : add or modify a function
- :art: (art) : Improve the structure or the format of the code
- :truck: (truck) : move or rename a file, a path or a route
