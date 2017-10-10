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

Use `make test` to run `check50`

```sh
~/cs50/pset1/hello
> make test
check50 -l cs50/2017/fall/hello
:) hello.c exists.
:) hello.c compiles.
:) prints "hello, world\n"
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
