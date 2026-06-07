# Program to count no of characters, words and sentences from a text file

with open(r"C:\Users\Gourav\Documents\GitHub\University-Stuff\Python\MyEssay.txt", "r") as file:
    text = file.read()

char_count = len(text)

words = text.split()

word_count = len(words)

sentence_count = text.count('.') + text.count('!') + text.count('?')

print("No. of Characters:", char_count)

print("No. of Words:", word_count)

print("No. of Sentences:", sentence_count)