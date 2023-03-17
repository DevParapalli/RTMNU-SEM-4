# 1.	Print only the words that start with letter ‘s’ in the following statement 
# St- ‘print only the word that starts with s in this sentence’.

SENTENCE = "print only the word that starts with s in this sentence"

if __name__ == "__main__":
    for word in SENTENCE.split():
        if word[0].lower() == "s":
            print(f"{word}")

"""
starts
s
sentence
"""