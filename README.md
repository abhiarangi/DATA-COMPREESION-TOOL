# DATA-COMPREESION-TOOL

 **COMPANY**: CODTECH SOLUTIONS

 **NAME** : ARANGI ABHISHEK

 **INTERN ID**  : CT08WCM

 **DOMAIN** : C PROGRAMMING

 **DURATION** : 4 WEEKS 

 **MENTOR** : NEELA SANTHOSH KUMAR

 **DESCRIPTION**

Data compression is a technique used to reduce the size of files or data by eliminating redundancy while retaining essential information. One of the simplest and most commonly used compression methods is **Run-Length Encoding (RLE)**. RLE is particularly effective when compressing data with repeated patterns, such as sequences in binary data or pixel values in images. 
 
**Concept of Run-Length Encoding (RLE)**
Run-Length Encoding works by replacing consecutive repeating characters (or runs) in a string with a single instance of the character followed by the number of times it is repeated. For instance:
 Input: `AAAABBBCCDAA`
 Output: `A4B3C2D1A2`

**Components of the Program**
To implement RLE in C, the program must:
1. Accept input data (either from a file or a user-provided string).
2. Traverse the input data character by character.
3. Count the number of consecutive occurrences of each character.
4. Write the compressed output, displaying each character and its frequency.
5. Optionally, decompress the encoded data to verify its correctness.

 **Explanation of the Code**
1. **Compression Function (`compressRLE`)**:
    This function processes the input string character by character.
    For each character, it counts consecutive repetitions using a loop and appends the character along with the count to the output.
    The count is converted to a character using `count + '0'`.

2. **Decompression Function (`decompressRLE`)**:
    This function reverses the compression process.
    It reads each pair of characters (a character and its count) from the compressed string and reconstructs the original string by repeating the character `count` times.

3. **Main Function**:
    The user enters the input string.
    The program compresses the string using the `compressRLE` function and prints the compressed result.
    The program decompresses the compressed string using `decompressRLE` and verifies that the original string is restored.

**A)Advantages**:
 Simple and easy to implement.
 Efficient for data with long runs of repeated characters.

**B)Limitations**:
 Ineffective for data with high variability, as the compressed size might be larger than the original.
 Not suitable for compressing highly complex or structured data, such as multimedia files.

**Applications**
RLE is widely used in:
 Image compression (e.g., BMP and TIFF formats).
 Data transmission in scenarios with repeated patterns.
 Compressing simple text or binary data.


**OUTPUT**

![Image](https://github.com/user-attachments/assets/8cf5f1c3-6d6b-46ce-a97c-457da1ec725b)
