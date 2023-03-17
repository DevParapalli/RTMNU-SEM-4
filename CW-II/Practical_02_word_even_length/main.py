# 2.	Print every word from the below sentence which has even number of letters
# St- ‘print only the word that starts with s in this sentence’.

SENTENCE = "print only the word that starts with s in this sentence"

if __name__ == "__main__":
    for word in SENTENCE.split():
        if len(word) % 2 == 0:
            print(word)

""" 
only
word
that
starts
with
in
this
sentence
"""
