# MARS TASK 01 LIGHT DOSE

Mars Task 01 involves utilizing fundamental Linux command lines and scripting a Bash script. The script should accept a Current Working Directory as input and recursively search for files with a .txt extension within it. It then copies all found files, changing their extension to .bak.

## SHELL SCRIPTING

### IMPLEMENTATION
1.Save the script as a Bash file (e.g., copy_and_modify.sh).

2.Run the script from the terminal: bash copy_and_modify.sh

3.Enter the CWD when prompted.

4.The script will process the files and create the "Modified" directory with the modified .bak files.

##  CUSTOM DATA TYPE AND LAMBDA FUCNTIONS

### IMPLEMENTATION:

1.**Custom Data Type Definition**: The program defines a custom data type named custom, which contains a single integer member variable called value.

2.**Lambda Function Usage**: A lambda function is declared, which accepts an instance of the custom data type as a parameter and prints out the value of the value member variable.

3.**User Input**: The program prompts the user to enter a value for the value member variable of the custom data type.

4.**Lambda Function Invocation**: The lambda function is invoked with the user-provided custom data type instance as an argument, printing out the entered value.

## MARS CLUB AND THE INTRACOMMUNICATION

## IMPLEMENTATION

Class Definitions:

1.**Student :** Represents a club member with attributes name and level.

2.**MarsClub**: Manages the club members using a vector and provides methods to add members and send messages to members based on their levels.

**Adding Members :**

Users are prompted to enter the number of members to add to the club.
For each member, the user inputs the member's name and level.

**Sending Messages :**

Users input the message they want to send to members.Users specify the minimum level of members who should receive the message.

**Messaging Functionality :**

The program sends the message to all club members whose level is greater than or equal to the specified minimum level.

### Conclusion
This program demonstrates a simple messaging system for a club, allowing members to be added and messages to be sent based on their levels. It serves as a basic example of how to manage club interactions in C++.

