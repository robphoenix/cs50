# This is [CS50](https://cs50.harvard.edu/)

## INSTALLATION

```
git clone --recursive https://github.com/robphoenix/cs50.git
cd cs50/libcs50
sudo make install
```

I had to install asciidoctor for this to work; `sudo apt install asciidoctor`.

## EXAMPLE

```
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

## VIM KEY MAPPING

My leader key is `<space>` and so `<space>50` will compile the current c file,
linking it with the cs50 lib, as `<filename>.out`.

```vim
autocmd FileType c nnoremap <silent> <leader>50 :!clear;gcc % ~/code/C/cs50/libcs50/src/cs50.c -o %:r.out<CR>
```
