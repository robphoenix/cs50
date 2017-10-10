# This is [CS50](https://cs50.harvard.edu/)

## INSTALLATION

Requires asciidoctor in order to build the docs.

```sh
sudo apt-get install asciidoctor # or gem install asciidoctor
git clone --recursive https://github.com/robphoenix/cs50.git
cd cs50/libcs50
sudo make install
```

## EXAMPLE

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
