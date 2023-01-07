# Password Generator

Work in progress
This project is free software under the MIT license. You can use, modify, and redistribute this software according to the terms of the MIT license as described in the `LICENSE` file.

## Prerequisites

To use this project, you will need:
- A C compiler (GCC, Clang, etc.)
- The glibc library

## Compiling

To compile this project, you can use the `make` command. It will generate a `bin` directory containing the executable.

## Running

`./gen_pass [options]`<br/>
See the options section or use `./gen_pass -h` / `./gen_pass --help` to display the help message.

## Options

```
-h, --help
    Display this help message and exit.
-v, --version
    Display version information and exit.
-l, --length [length]
    Generate a password with the specified length.
    Default is 16.
-s, --special [list]
    Generate a password with the specified special characters.
    Default is !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    https://www.owasp.org/index.php/Password_special_characters
-n, --numbers [list]
    Generate a password with the specified numbers.
    Default is 0123456789.
-a, --alphabet [list]
    Generate a password with the specified alphabet.
    Default is abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.
-u, --uppercase [true|false]
    Generate a password with uppercase letters.
    Default is true.
-r, --repeat [true|false]
    Generate a password with repeating characters.
    Default is false.
-c, --complexity [low|medium|high|veryhigh|007]
    Generate a password with the specified complexity.
    Valid values are: low, medium, high, veryhigh, 007.
    Default is medium.
    does not apply -l, -s, -n, -a, -u, -r options.
    Complexity standards are based on the OWASP recommendations.
    https://owasp.deteact.com/cheat/cheatsheets/Authentication_Cheat_Sheet.html#password-complexity
-i, --information
    Display complexity informations about the generated password.
-k, --keep
    Keep the generated password in the clipboard.
-s, --save [file]
    Save the generated password in the specified file.
-p, --passphrase [number]
    Generate a passphrase with the specified number of words.
    Default is 4.
    does not apply -l, -s, -n, -a, -u, -r options.
    https://xkcd.com/936/
-w, --words [file]
    Use the specified file as a word list.
-q, --quiet
    Do not display the generated password.
    Only works with -k and/or -s options.
-b, --browtf
    Generate a password with the BroWTF algorithm.
    BroWTF algorithm will generate a password with random options,
    so you can have a password with a length of one characters to 1 billion characters
    with only 'a' characters.
    Why BroWTF exists? Because why not?
-m, --mcredits
    Display the credits of this program.
    Why mcredits? Because I do not have more letters.
```

## Contributing

If you would like to contribute to this project, feel free to fork it and submit a pull request or create an issue on GitHub. All contributions are welcome!
