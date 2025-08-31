# Experiment 2
# Name: Vivek Prajapati
# Batch: B-2
# Roll no: 43

# ---------------- STRING ----------------
s = "Python"
print("Original String:", s)
print("Indexing:", s[0])                  # Accessing character at index 0
print("Slicing (1:6):", s[1:6])           # Substring from index 1 to 5
print("Concatenation:", s + " Program")   # Adding another string
print("Repetition:", s * 2)               # Repeat string

# ---------------- LIST ----------------
lst = [10, 20, 30, 40]
print("\nOriginal List:", lst)
print("Indexing:", lst[2])                # Element at index 2
print("Slicing (1:3):", lst[1:3])         # Sublist
print("Concatenation:", lst + [50, 60])   # Add elements
print("Repetition:", lst * 2)             # Repeat list

# ---------------- TUPLE ----------------
tup = (1, 2, 3, 4)
print("\nOriginal Tuple:", tup)
print("Indexing:", tup[0])                # First element
print("Slicing (1:3):", tup[1:3])         # Subtuple
print("Concatenation:", tup + (5, 6))     # Add elements
print("Repetition:", tup * 2)             # Repeat tuple

# ---------------- DICTIONARY ----------------
diction = {'Name': 'Vivek', 'Age': 20}
print("\nOriginal Dictionary:", diction)
print("Access By Key 'Name':", diction['Name'])  # Access value
diction['City'] = 'Pune'                        # Add new key
print("After Adding 'City':", diction)
diction['Age'] = 23                             # Update value
print("After Updating 'Age':", diction)

# ---------------- SET ----------------
my_set = {1, 2, 3, 4}
print("\nOriginal Set:", my_set)
print("Concatenation (Union):", my_set | {5, 6})   # Union with another set
my_set.add(7)                                      # Add new element
print("After adding 7:", my_set)
