**About**

An algoritm ciphers a given string using supplied key

**To Run**<br>

Clone this repo

`git clone https://github.com/berbakay/cipher-text.git`

Compile code 

`clang -o substitution substitution.c -lcs50`

run file

`./substitution :key`

key must be 26 unique letters.
You'll then be prompted to enter your plain text string.

**Example Output**<br>
./substitution yukfrnlbavmwzteogxhcipjsqd<br>
plaintext: hello, world<br>
ciphertext: brwwe, jexwf

**Requirements**<br>
A dev environment that can compile and run C code.<br>
CS50 Library https://cs50.readthedocs.io/libraries/cs50/c/