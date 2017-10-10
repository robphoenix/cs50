# This is [cs50](https://cs50.harvard.edu/) :mortar_board:

## Installation

Requires asciidoctor in order to build the docs...

```sh
sudo apt-get install asciidoctor
# or
gem install asciidoctor
```

Clone this repo and the [cs50 library submodule](https://github.com/cs50/libcs50)...

```sh
git clone --recursive https://github.com/robphoenix/cs50.git
cd cs50/libcs50
sudo make install
```

Install `check50` to run tests...

```sh
sudo -H pip install check50
```

## check50

This only works locally for me, it asks for `submit50` otherwise, which is
installed but it can't find. :woman_shrugging:

To run against the `greedy` exercise for instance...

```sh
check50 -l cs50/2017/x/greedy
```

Output:

```sh
:) greedy exists
:) greedy compiles
:) input of 0.41 yields output of 4
:) input of 0.01 yields output of 1
:) input of 0.15 yields output of 2
:) input of 1.6 yields output of 7
:) input of 23 yields output of 92
:) input of 4.2 yields output of 18
:) rejects a negative input like -.1
:) rejects a non-numeric input of "foo"
:) rejects a non-numeric input of ""
```

## Example

```c
#include <cs50.h>
#include <stdio.h>

int main() {
  // attempt to read string from stdin
  string s = get_string("Enter string: ");

  // ensure string was read
  if (s != NULL) {
    printf("You entered: %s\n", s);
  }
}
```
