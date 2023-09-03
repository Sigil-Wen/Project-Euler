def extract_words_from_file(filename):
    with open(filename, 'r') as file:
        content = file.read()

    # Strip double quotes and split the string based on commas
    words = [word.strip('"') for word in content.split(',')]
    return words

filename = "problem_42_words.txt"

word_list = extract_words_from_file(filename)

def char_to_int_position(character):
    # Ensure that the given character is uppercase
    character = character.upper()
    return ord(character) - ord('A') + 1

print(word_list)

def check_triangularity(num):
    for i in range(20):
        if num == (i * (i+1)/2):
            return True
    return False


total = 0
for word in word_list:
    sum = 0
    for char in word:
        sum += char_to_int_position(char)
    
    if check_triangularity(sum):
        total += 1
        print(word + " is a Triangle word")

print("Total is ")

print(total)

# total is 162